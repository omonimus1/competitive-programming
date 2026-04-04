# https://leetcode.com/problems/students-with-invalid-departments/?envType=problem-list-v2&envId=database
SELECT id, name
FROM Students
WHERE  department_id not in (SELECT id from Departments)
