note
	description: "Handlers for everything that concerns sprints."
	author: "$Rio Cuarto4 Team$"
	date: "$2014-11-11$"
	revision: "$0.01$"

class
	SPRINT_CONTROLLER

inherit
	HEADER_JSON_HELPER

create
	make


feature {NONE} -- Creation

	make (a_path_to_db_file: STRING)
		do
			create db_handler_sprint.make (a_path_to_db_file)
		end


feature {NONE} -- Private attributes

	db_handler_sprint : DB_HANDLER_SPRINT


feature -- Handlers

	get_sprints (req: WSF_REQUEST; res: WSF_RESPONSE)
			-- sends a reponse that contains a json array with all sprints
		local
			l_result_payload: STRING
		do
			l_result_payload := db_handler_sprint.find_all.representation

			set_json_header_ok (res, l_result_payload.count)
			res.put_string (l_result_payload)
		end

	add_sprint (req: WSF_REQUEST; res: WSF_RESPONSE)
			-- adds a new sprint; the sprint data are expected to be part of the request's payload
		local
			l_payload : STRING
			new_id, new_status, new_duration, new_project_id : STRING
			new_sprint: SPRINT
			parser: JSON_PARSER
			l_result: JSON_OBJECT
		do
				-- create emtpy string objects
			create l_payload.make_empty

				-- read the payload from the request and store it in the string
			req.read_input_data_into (l_payload)

				-- now parse the json object that we got as part of the payload
			create parser.make_parser (l_payload)

				-- if the parsing was successful and we have a json object, we fetch the properties
				-- for the sprint description
			if attached {JSON_OBJECT} parser.parse as j_object and parser.is_parsed then

					-- we have to convert the json string into an eiffel string for each sprint attribute.
				if attached {JSON_STRING} j_object.item ("id") as id then
					new_id := id.unescaped_string_8
				end
				if attached {JSON_STRING} j_object.item ("status") as status then
					new_status := status.unescaped_string_8
				end
				if attached {JSON_STRING} j_object.item ("duration") as duration then
					new_duration := duration.unescaped_string_8
				end
				if attached {JSON_STRING} j_object.item ("project_id") as project_id then
					new_project_id := project_id.unescaped_string_8
				end
			end

			create new_sprint.make (new_id.to_integer_32, new_status, new_duration.to_integer_32, new_project_id.to_integer_32)

				-- create the sprint in the database
			db_handler_sprint.add (new_sprint)

				-- create a json object that as a "Message" property that states what happend (in the future, this should be a more meaningful messeage)
			create l_result.make
			l_result.put (create {JSON_STRING}.make_json ("Added sprint " + new_sprint.id.out ), create {JSON_STRING}.make_json ("Message"))

				-- send the response
			set_json_header_ok (res, l_result.representation.count)
			res.put_string (l_result.representation)
		end

	update_sprint (req: WSF_REQUEST; res: WSF_RESPONSE)
			-- update a sprint from the database
		local
			l_payload: STRING
			l_sprint_id: STRING
			sprint_id, sprint_status, sprint_duration, sprint_project_id : STRING
			sprint: SPRINT
			parser : JSON_PARSER
			l_result: JSON_OBJECT
		do
				-- create emtpy string objects
			create l_payload.make_empty

				-- read the payload from the request and store it in the string
			req.read_input_data_into (l_payload)

				-- now parse the json object that we got as part of the payload
			create parser.make_parser (l_payload)

				-- if the parsing was successful and we have a json object, we fetch the properties
				-- for the todo description and the userId
			if attached {JSON_OBJECT} parser.parse as j_object and parser.is_parsed then

				-- we have to convert the json string into an eiffel string for each sprint attribute.
				if attached {JSON_STRING} j_object.item ("id") as id then
					sprint_id := id.unescaped_string_8
				end
				if attached {JSON_STRING} j_object.item ("status") as status then
					sprint_status := status.unescaped_string_8
				end
				if attached {JSON_STRING} j_object.item ("duration") as duration then
					sprint_duration := duration.unescaped_string_8
				end
				if attached {JSON_STRING} j_object.item ("project_id") as project_id then
					sprint_project_id := project_id.unescaped_string_8
				end


			end

				-- create the sprint
			create sprint.make (sprint_id.to_integer_32, sprint_status, sprint_duration.to_integer_32, sprint_project_id.to_integer_32)

				-- the sprint_id from the URL (as defined by the placeholder in the route)
			l_sprint_id := req.path_parameter ("sprint_id").string_representation

				-- update the sprint in the database
			db_handler_sprint.update (l_sprint_id.to_natural,sprint)

				-- create a json object that as a "Message" property that states what happend (in the future, this should be a more meaningful messeage)
			create l_result.make
			l_result.put (create {JSON_STRING}.make_json ("Updated sprint "+ sprint.id.out), create {JSON_STRING}.make_json ("Message"))

				-- set the result
			set_json_header_ok (res, l_result.representation.count)
			res.put_string (l_result.representation)
		end

	remove_sprint (req: WSF_REQUEST; res: WSF_RESPONSE)
			-- remove a sprint from the database
		local
			l_sprint_id: STRING
			l_result: JSON_OBJECT
		do
				-- the user_id from the URL (as defined by the placeholder in the route)
			l_sprint_id := req.path_parameter ("sprint_id").string_representation
				-- remove the sprint
			db_handler_sprint.remove (l_sprint_id.to_natural)

				-- create a json object that as a "Message" property that states what happend (in the future, this should be a more meaningful messeage)
			create l_result.make
			l_result.put (create {JSON_STRING}.make_json ("Removed item"), create {JSON_STRING}.make_json ("Message"))

				-- set the result
			set_json_header_ok (res, l_result.representation.count)
			res.put_string (l_result.representation)
		end


end
