note
	description: "This class connected provides features that query the database. Results are directly returned in JSON format."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	DEMO_DB

create
	make


feature {NONE}

	make (a_path_to_db_file: STRING)
			-- Creation procedure
		require
			valid_file: a_path_to_db_file /= Void and not a_path_to_db_file.is_empty
		do
			create db.make_open_read_write (a_path_to_db_file)
		end


feature {NONE} -- Format helpers

	rows_to_json_array (a_row: SQLITE_RESULT_ROW; a_num_columns: NATURAL; a_result_array: JSON_ARRAY): BOOLEAN
			-- given the rows of a db query as input, this function turns the rows into an JSON array of JSON objects
			-- each object has as JSON keys the db's colum name and and as JSON value the db's row value
		local
			j_obj: JSON_OBJECT
			i: NATURAL
		do
				-- create a JSON object; it will hold the values "id", "description", "user" for ech eb table entry
			create j_obj.make

			from
				i := 1
			until
				i > a_num_columns
			loop
				j_obj.put (create {JSON_STRING}.make_json (a_row.string_value(i)), create{JSON_STRING}.make_json (a_row.column_name (i)))
				i := i + 1
			end

			a_result_array.extend(j_obj)

			Result := False
		end


	row_to_json_object (a_row: SQLITE_RESULT_ROW; a_num_columns: NATURAL; a_result_object: JSON_OBJECT): BOOLEAN
			-- given the row of a db query as input, this function turns the row into an JSON OBJECT
			-- each object has as JSON keys the db's colum name and and as JSON value the db's row value
		local
			i: NATURAL
		do
			from
				i := 1
			until
				i > a_num_columns
			loop
				a_result_object.put (create {JSON_STRING}.make_json (a_row.string_value(i)), create{JSON_STRING}.make_json (a_row.column_name (i)))
				i := i + 1
			end

			Result := False
		end


feature -- Data access

	todos: JSON_ARRAY
			-- returns a JSON_ARRAY where each element is a JSON_OBJECT that represents a todo

		do
			create Result.make_array

			create db_query_statement.make ("SELECT t.id AS todoId, t.description, u.id AS userId, u.name FROM Todos As t, Users AS u WHERE t.userId = u.id;" , db)

			db_query_statement.execute (agent rows_to_json_array (?, 4, Result))
		end


	users: JSON_ARRAY
			-- returns a JSON_ARRAY where each element is a JSON_OBJECT that represents a user
		do
			create Result.make_array
			create db_query_statement.make ("SELECT * FROM Users;", db)
			db_query_statement.execute (agent rows_to_json_array (?, 2, Result))

		end


	todos_for_user (a_user_id: NATURAL): JSON_ARRAY
			-- returns a JSON_ARRAY where each element is a todo of user with id `a_user_id'
		do
			create Result.make_array
			create db_query_statement.make ("SELECT t.id AS todoId, t.description, u.id AS userId, u.name FROM Todos As t, Users AS u WHERE t.userId = u.id AND u.id = " + a_user_id.out + ";" , db)
			db_query_statement.execute (agent rows_to_json_array (?, 4, Result))
		end


	add_todo_for_user (a_description: STRING; a_user_id: NATURAL): JSON_OBJECT
			-- adds a new todo with the given description for the given userid
			-- returns a json object that contains the properties "todoId, description, userId, name" for the newly added todo
		local
			l_new_id: INTEGER_64
		do
				-- create the result object, in this case an empty JSON_OBJECT
			create Result.make

				-- construct the insert statement based on the provided arguments
			create db_insert_statement.make ("INSERT INTO Todos(description, userId) VALUES ('" + a_description + "', '" + a_user_id.out + "');", db)
				-- execute the statement
			db_insert_statement.execute

			if db_insert_statement.has_error then
				print("Error while inserting a new Todo")
				-- TODO: should have more error handling here, e.g. have a return value set to false
			else
					-- get the id of the row that was added to the Todos table
				l_new_id := db_insert_statement.last_row_id

					-- fetch the entry from the database
				create db_query_statement.make("SELECT t.id as todoId, t.description, t.userId, u.name FROM Todos as t, Users as u WHERE t.userId = u.id AND t.id = " + l_new_id.out + ";", db)
				db_query_statement.execute (agent row_to_json_object(?, 4, Result))
			end

		end


	remove_todo (a_todo_id: NATURAL)
			-- removes the todo with the given id
		do
			create db_modify_statement.make ("DELETE FROM Todos WHERE id=" + a_todo_id.out + ";", db)
			db_modify_statement.execute
			if db_modify_statement.has_error then
				print("Error while deleting a Todo")
					-- TODO: we probably want to return something if there's an error
			end
		end


	add_user (a_user_name: STRING)
			-- adds a new user with the given user name
		do
			create db_insert_statement.make ("INSERT INTO Users(name) VALUES ('" + a_user_name + "');", db)
			db_insert_statement.execute
			if db_insert_statement.has_error then
				print("Error while inserting a new user")
			end
		end

	add_project (a_project_name: STRING; a_user_name: STRING)
		-- add a new project in tha database
		do
			-- add the name if the project table
			-- add the name and the creator in the member table if boolean owner true
		end

	check_project_name (a_project_name: STRING) : BOOLEAN
		-- check if a given name already exist in the database: return true if the name exists
		do
		end

	is_project_empty (a_project_name: STRING) : BOOLEAN
		-- check is a project is empty: return true if it is empty
		do
			-- check in the table iteration if some of them are related to the given name project
		end

	remove_project (a_project_name: STRING)
		-- remove the project from table project and member.
		do

		end

	rename_project (a_old_project_name: STRING; a_new_project_name: STRING)
		-- rename the project in all tables: project, member, iteration, work_item
		do

		end

	get_all_user_projects (a_user_email: STRING): JSON_ARRAY
		-- get all the projects of a specific user
		do
			-- select from member table the project of the specific user
		end

	get_all_project_members (a_project_name: STRING): JSON_ARRAY
		-- get all the members and owners of a specific project
		do
			-- select from member table the members and owners of the specific project and return them as JSON_ARRAY
		end

	get_all_project_owners (a_project_name: STRING): JSON_ARRAY
		-- get all the owners of a specific project
		do
			-- call get_all_project_members and filter by owners only
			-- return them as JSON_ARRAY
		end

	add_member_to_project (a_project_name: STRING; a_user_email: STRING; a_owner: BOOLEAN)
		-- add a member or owner in the table member
		do
			-- if the user is an owner check if the tuple doesn't already exist:
				-- no add a new tuple in the table

				-- yes change the boolean owner into true
		end

	remove_member_from_project (a_project_name: STRING; a_user_email: STRING)
		-- remove a member from a project in the table member
		do
		end

	has_user_with_password (a_user_name, a_password: STRING): TUPLE[has_user: BOOLEAN; id: STRING; username: STRING]
			-- checks if a user with given username and password exists
			-- if yes, the result tuple value "has_user" will be true and "id" and "username" will be set
			-- otherwise, "has_user" will be false and "id" and "username" will not be set
		local
			l_query_result_cursor: SQLITE_STATEMENT_ITERATION_CURSOR
		do
				-- create a result object
			create Result

			create db_query_statement.make ("SELECT * FROM Users WHERE name=? AND password=?;", db)
			l_query_result_cursor := db_query_statement.execute_new_with_arguments (<<a_user_name, a_password>>)


			if l_query_result_cursor.after then
					-- there are no rows in the result of the query, thus no user with that password exits
				print("Did not find a user with name '" + a_user_name  + "' and password '" + a_password + "' in the dataase.%N")
				Result.has_user := False
			else
				print("Found a user name '" + a_user_name + "' and password '" + a_password + "' in the database.%N")
				Result.has_user := True
				Result.id := l_query_result_cursor.item.value (1).out
				Result.username := l_query_result_cursor.item.value (2).out
			end
		end


feature --data access: USERS

	get_all_users:JSON_OBJECT
		--returns a JSON_OBJECT that contains the list of all users
		do

		end

	add_user(name, surname, email, password, role, photo:STRING; male:BOOLEAN):BOOLEAN
		--creates a new user in the database, with specified information. Returns true if the operation was successfully completed,
		--false oherwise
		do

		end

	remove_user(user_email:STRING):BOOLEAN
		--removes a specified user from the database. Returns true if the operaton was successfully completed, false otherwise
		do

		end

	update_user(name, surname, email, password, role, photo:STRING; male:BOOLEAN):BOOLEAN
		--updates a user's information. Returns true if the operation was successfully completetd, false otherwise.
		do

		end

	check_user_password(mail, pwd:STRING):BOOLEAN
		--checks if a user with the specified email and password exists. Returns true if a match is found, false otherwise.
		do

		end

	



feature	--Data access: WORK ITEMS

	work_item_info (work_item_id:INTEGER): JSON_OBJECT
		-- returns a JSON_OBJECT with all information about a specified work_item
		do

		end

	add_work_item (info_new_work_item: JSON_OBJECT)
		-- adds a new work_item with the given information
		do

		end

	remove_work_item(work_item_id: INTEGER)
		--removes an existing work_item which has the given identificator
		do

		end

	modify_work_item(info_work_item: JSON_OBJECT)
		--modifies an existing work_item which the given informations
		do

		end

feature --data access: LINKS

	add_link(work_item_id1: INTEGER; work_item_id2: INTEGER)
		--adds a new link between the work_idem with id work_item_id1 and one with id work_item_id2
		do

		end

	remove_link(work_item_id1: INTEGER; work_item_id2: INTEGER)
		--removes an existing link between the work_idem with id work_item_id1 and one with id work_item_id2
		do

		end

	work_item_links(work_item_id: INTEGER): JSON_ARRAY
		--returns a JSON_ARRAY where each element is a JSON_OBJECT that represents a link with another work_item
		do

		end

feature --data access: COMMENTS
	add_comment(info_comment: JSON_OBJECT)
		 --adds a new comment with the given information
		 do

		 end

	work_item_comments(work_item_id: INTEGER): JSON_ARRAY
		--returns a JSON_ARRAY where each element is a JSON_OBJECT that represents a comment
		do

		end




feature {NONE}

	db: SQLITE_DATABASE
		-- the database

	db_query_statement: SQLITE_QUERY_STATEMENT
		-- an sql query statement for the db

	db_insert_statement: SQLITE_INSERT_STATEMENT
		-- an sql insert statement for the db

	db_modify_statement: SQLITE_MODIFY_STATEMENT
		-- other sql modification statment for the db, e.g. DELETE

end
