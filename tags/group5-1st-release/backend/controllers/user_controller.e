note
	description: "Handlers for everything that concerns users."
	author: "Zensich Ezequiel"
	date: "$11/11/2014$"
	revision: "$Revision$"

class
	USER_CONTROLLER

inherit

	DEMO_HEADER_JSON_HELPER

create
	make

feature {NONE} -- Creation

	make (a_dao: CRUD_USER)
		do
			my_crud_user := a_dao
		end

feature {NONE} -- Private attributes

	my_crud_user: CRUD_USER

feature -- Handlers

	get_users (req: WSF_REQUEST; res: WSF_RESPONSE)
			-- sends a reponse that contains a json array with all users
		local
			l_result_payload: STRING
		do
			l_result_payload := my_crud_user.users.representation
			set_json_header_ok (res, l_result_payload.count)
			res.put_string (l_result_payload)
		end

	get_user_by_id (req: WSF_REQUEST; res: WSF_RESPONSE)
		local
			l_id: STRING
			l_result: JSON_OBJECT
		do
				-- create emtpy string objects
			create l_id.make_empty
			l_id := req.path_parameter ("id").string_representation
			l_result := my_crud_user.user_by_id (l_id.to_natural)
			set_json_header_ok (res, l_result.representation.count)
			res.put_string (l_result.representation)
		end

	create_user (req: WSF_REQUEST; res: WSF_RESPONSE)
		local
			l_payload, l_email, l_username, l_password, l_name, l_is_admin: STRING
			was_created: BOOLEAN
			user_id: INTEGER
			result_add_user: TUPLE [BOOLEAN, INTEGER]
			parser: JSON_PARSER
			l_result: JSON_OBJECT
		do
				-- create emtpy string objects
			create l_payload.make_empty
			create l_name.make_empty
			create l_email.make_empty
			create l_username.make_empty
			create l_password.make_empty
			create l_is_admin.make_empty

				-- read the payload from the request and store it in the string
			req.read_input_data_into (l_payload)

				-- now parse the json object that we got as part of the payload
			create parser.make_parser (l_payload)

				-- if the parsing was successful and we have a json object, we fetch the properties
				-- for the todo description and the user info
			if attached {JSON_OBJECT} parser.parse as j_object and parser.is_parsed then

					-- we have to convert the json string into an eiffel string
				if attached {JSON_STRING} j_object.item ("name") as s then
					l_name := s.unescaped_string_8
				end
				if attached {JSON_STRING} j_object.item ("email") as s then
					l_email := s.unescaped_string_8
				end
				if attached {JSON_STRING} j_object.item ("username") as s then
					l_username := s.unescaped_string_8
				end
				if attached {JSON_STRING} j_object.item ("password") as s then
					l_password := s.unescaped_string_8
				end
				if attached {JSON_STRING} j_object.item ("is_admin") as s then
					l_is_admin := s.unescaped_string_8
				end
			end
			create l_result.make
				-- create the user in the database
			was_created := false
			if not my_crud_user.user_exists_with_email (l_email).boolean_item (1) then
				if not my_crud_user.user_exists_with_username (l_username).boolean_item (1) then
					result_add_user := my_crud_user.add_user (l_email, l_username, l_password, l_name, "", l_is_admin.to_integer)
					was_created := result_add_user.boolean_item (1)
					user_id := result_add_user.integer_32_item (2)
				else
					l_result.put (create {JSON_STRING}.make_json ("Username already in use"), create {JSON_STRING}.make_json ("error"))
					set_json_header (res, 409, l_result.representation.count)
				end
			else
				l_result.put (create {JSON_STRING}.make_json ("Email already in use"), create {JSON_STRING}.make_json ("error"))
				set_json_header (res, 409, l_result.representation.count)
			end
			if was_created then
					--if the user was created,set the response
				l_result.put (create {JSON_STRING}.make_json (user_id.out), create {JSON_STRING}.make_json ("id"))
				set_json_header (res, 201, l_result.representation.count)
			end
			res.put_string (l_result.representation)
		end

	delete_user_by_id (req: WSF_REQUEST; res: WSF_RESPONSE)
		local
			l_id: STRING
			l_result: JSON_OBJECT
		do
				-- create emtpy string objects
			create l_id.make_empty
			l_id := req.path_parameter ("id").string_representation
			create l_result.make
			if my_crud_user.remove_user_by_id (l_id.to_natural) then
					--if the user was removed,set the response
				set_json_header (res, 204, l_result.representation.count)
			end
			res.put_string (l_result.representation)
		end

	update_user (req: WSF_REQUEST; res: WSF_RESPONSE)
		local
			l_id, l_payload, l_email, l_username, l_last_login, l_name, l_password, l_is_admin: STRING
			result_exists_user: TUPLE [BOOLEAN, INTEGER]
			parser: JSON_PARSER
			l_result: JSON_OBJECT
		do
				-- create emtpy string objects
			create l_payload.make_empty
			create l_name.make_empty
			create l_email.make_empty
			create l_username.make_empty
			create l_last_login.make_empty
			create l_is_admin.make_empty
			create l_password.make_empty
			create l_id.make_empty
			l_id := req.path_parameter ("id").string_representation

				-- read the payload from the request and store it in the string
			req.read_input_data_into (l_payload)

				-- now parse the json object that we got as part of the payload
			create parser.make_parser (l_payload)

				-- if the parsing was successful and we have a json object, we fetch the properties
				-- for the todo description and the user info
			if attached {JSON_OBJECT} parser.parse as j_object and parser.is_parsed then

					-- we have to convert the json string into an eiffel string
				if attached {JSON_STRING} j_object.item ("name") as s then
					l_name := s.unescaped_string_8
				end
				if attached {JSON_STRING} j_object.item ("email") as s then
					l_email := s.unescaped_string_8
				end
				if attached {JSON_STRING} j_object.item ("username") as s then
					l_username := s.unescaped_string_8
				end
				if attached {JSON_STRING} j_object.item ("lastLogin") as s then
					l_last_login := s.unescaped_string_8
				end
				if attached {JSON_STRING} j_object.item ("new_password") as s then
					l_password := s.unescaped_string_8
				end
				if attached {JSON_STRING} j_object.item ("is_admin") as s then
					l_is_admin := s.unescaped_string_8
				end
			end
			create l_result.make
			result_exists_user := my_crud_user.user_exists_with_email (l_email)
			if not result_exists_user.boolean_item (1)  then
					if my_crud_user.update_user_email (l_id.to_natural, l_email) And my_crud_user.update_user_is_admin (l_id.to_natural, l_is_admin.to_natural) And my_crud_user.update_user_last_login (l_id.to_natural, l_last_login) And my_crud_user.update_user_name (l_id.to_natural, l_name) And my_crud_user.update_user_username (l_id.to_natural, l_username) then
							--if the user was updated,set the response
						if not l_password.is_empty then
							if my_crud_user.update_user_password (l_id.to_natural, l_password) then
								l_result := my_crud_user.user_by_id (l_id.to_natural)
								set_json_header_ok (res, l_result.representation.count)
							else
								l_result.put (create {JSON_STRING}.make_json ("Password edit error"), create {JSON_STRING}.make_json ("error"))
								set_json_header (res, 500, l_result.representation.count)
							end
						else
							l_result := my_crud_user.user_by_id (l_id.to_natural)
							set_json_header_ok (res, l_result.representation.count)
						end
					else
						l_result.put (create {JSON_STRING}.make_json ("Error while updating"), create {JSON_STRING}.make_json ("error"))
						set_json_header (res, 500, l_result.representation.count)
					end
			else
				if (l_id.to_integer = result_exists_user.integer_32_item (2)) then
					l_result := my_crud_user.user_by_id (l_id.to_natural)
					set_json_header_ok (res, l_result.representation.count)
				else
					l_result.put (create {JSON_STRING}.make_json ("Email already in use"), create {JSON_STRING}.make_json ("error"))
					set_json_header (res, 409, l_result.representation.count)
				end
			end
			res.put_string (l_result.representation)
		end

end