note
	description: "Summary description for {USER}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	COMMENTS
inherit
	DB_MAPPER_BASE
create
	make
feature
	new_by_names(user: STRING; project: STRING; date: STRING; contents: STRING)
		do
			create db_insert_statement.make ("INSERT INTO " + db_table_name +
				"(contents, date, userId, projectId)
				VALUES ('" + contents + "', '" + date + "', " +
				"(SELECT id FROM users WHERE name = '" + user + "'),",
				"(SELECT id FROM projects WHERE name = '" + project + "'));", db);
			db_insert_statement.execute

		ensure
			all_right: not db_insert_statement.has_error
		end

	new_by_ids(user_id: NATURAL; project_id: NATURAL; date: STRING; contents: STRING)
		do
			create db_insert_statement.make ("INSERT INTO " + db_table_name +
				"(contents, date, userId, projectId)
				VALUES ('" + contents + "', '" + date + "', " +
				user_id.out + ", " + project_id.out + "));", db);

			db_insert_statement.execute

		ensure
			all_right: not db_insert_statement.has_error
		end

feature{NONE}
	db_table_name: STRING

end

