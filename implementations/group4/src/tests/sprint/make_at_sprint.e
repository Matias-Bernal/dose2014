note
	description: "Tests for routine make at class Sprint"
	author: "Rio Cuarto4 Team"
	date: "$2014-11-06$"
	revision: "$0.01$"

class
	MAKE_AT_SPRINT

inherit
	EQA_TEST_SET

feature -- Test routines

	make_with_correct_values
			-- Creation test with correct values
		local
			sprint: SPRINT
		do
			create sprint.make (0, "Complete", 20,1)
			assert ("Correct id", sprint.id.is_equal (0))
			assert ("Correct status", sprint.status.is_equal ("Complete"))
			assert ("Correct duration", sprint.duration.is_equal (20))
			assert ("Correct project_id", sprint.project_id.is_equal (1))
		end


	creation_negative_test_with_negative_id
			-- Creation test with empty name
		local
  			ok, second_time: BOOLEAN
  			sprint: SPRINT
		do
    		if not second_time then
          		ok := True
          		create sprint.make (-1, "new_status", 1,1) -- Must throw an exception
          		ok := False
    		end
    		assert ("The rutine has to fail", ok)
		rescue
     		second_time := True
     		if ok then   -- ok = true means that the rutine failed
           		retry
    		end
		end

	creation_negative_test_with_empty_status
			-- Creation test with empty status
		local
  			ok, second_time: BOOLEAN
  			sprint: SPRINT
		do
    		if not second_time then
          		ok := True
          		create sprint.make (1, "", 1,1) -- Must throw an exception
          		ok := False
    		end
    		assert ("The rutine has to fail", ok)
		rescue
     		second_time := True
     		if ok then   -- ok = true means that the rutine failed
           		retry
    		end
		end

	creation_negative_test_with_duration_equals_zero
			-- Creation test with duration equals zero
		local
  			ok, second_time: BOOLEAN
  			sprint: SPRINT
		do
    		if not second_time then
          		ok := True
          		create sprint.make (0, "new_status", 0,1) -- Must throw an exception
          		ok := False
    		end
    		assert ("The rutine has to fail", ok)
		rescue
     		second_time := True
     		if ok then   -- ok = true means that the rutine failed
           		retry
    		end
		end


	creation_negative_test_with_negative_duration
			-- Creation test with negative duration
		local
  			ok, second_time: BOOLEAN
  			sprint: SPRINT
		do
    		if not second_time then
          		ok := True
          		create sprint.make (0, "new_status", -8,1) -- Must throw an exception
          		ok := False
    		end
    		assert ("The rutine has to fail", ok)
		rescue
     		second_time := True
     		if ok then   -- ok = true means that the rutine failed
           		retry
    		end
		end


end
