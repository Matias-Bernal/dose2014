note
	description: "Handler for users."
	author: "ar"
	date: "14.11.2014"

class
	USER_CONTROLLER

inherit
	REST_CONTROLLER
redefine
	modify_json,
	post_insert_action,
	post_update_action
end

create
	make


feature {None} -- Internal helpers


	post_insert_action(req: WSF_REQUEST; res: WSF_RESPONSE; new_id: INTEGER_64; input: JSON_OBJECT)
		local
	        hashed_password: STRING
			password: STRING
			password_key: JSON_STRING
			dummy: ANY
		do
			hash_and_store_password_from_json(new_id.out, input)
		end


	post_update_action(req: WSF_REQUEST; res: WSF_RESPONSE; user_id: STRING; input: JSON_OBJECT)
		do
			if input.has_key (create {JSON_STRING}.make_json("password")) then
				hash_and_store_password_from_json(user_id, input)
			end
		end

	hash_and_store_password_from_json(user_id: STRING; input: JSON_OBJECT)
		local
	        hashed_password: STRING
			password: STRING
			password_key: JSON_STRING
			dummy: ANY
		do
			-- Extract the password from the given json input
			password_key := create {JSON_STRING}.make_json("password")
			password := input.item(password_key).representation
			password := password.substring (2, password.count - 1)

			-- Salt it with the user id and hash it
	        hashed_password := get_salted_and_hashed_password(password, user_id)

	        -- Replace the original password by the salted-hashed version
			dummy := db.update("UPDATE users SET password = %"" + hashed_password + "%" WHERE id = " + user_id)
		end



	modify_json(user: JSON_OBJECT)
		local
			assigned_tasks: JSON_ARRAY
			projects: JSON_ARRAY
			user_id: STRING
		do
			user_id := user.item(create {JSON_STRING}.make_json ("id")).representation
			assigned_tasks := db.query_id_list("SELECT task_id FROM task_assignments WHERE user_id = " + user_id)
			projects := db.query_id_list("SELECT project_id FROM project_shares WHERE user_id = " + user_id)
			user.put (assigned_tasks, "assigned_tasks")
			user.put (projects, "projects")
		end
end