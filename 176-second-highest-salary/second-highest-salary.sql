SELECT MAX(temp.SecondHighestSalary) AS SecondHighestSalary
FROM (
    SELECT Salary AS SecondHighestSalary,
           DENSE_RANK() OVER (ORDER BY Salary DESC) AS rnk
    FROM Employee
) AS temp
WHERE rnk = 2;