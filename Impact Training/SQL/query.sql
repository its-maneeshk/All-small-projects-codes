SELECT *,
CASE
WHEN age >= 30 THEN 'Aged Person'
WHEN age >= 25 THEN 'Mid Aged Person'
ELSE 'Younger
END AS Difference
FROM Customers
ORDER BY
CASE
	WHEN age >= 30 THEN 1
	WHEN age >= 25 THEN 2
    ELSE 3
    END
    LIMIT 2
;


-- query 2
SELECT e1.name as employee, e2.name as manager
from employees e1
left join employee e2
on e1.manager_id = e2.employee_id;