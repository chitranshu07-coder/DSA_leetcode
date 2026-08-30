-- SELECT MAX(temp.SecondHighestSalary) AS SecondHighestSalary
-- FROM (
--     SELECT Salary AS SecondHighestSalary,
--            DENSE_RANK() OVER (ORDER BY Salary DESC) AS rnk
--     FROM Employee
-- ) AS temp
-- WHERE rnk = 2;
select max(e1.salary) as SecondHighestSalary
from Employee e1 join Employee e2 
on e1.salary<e2.salary
