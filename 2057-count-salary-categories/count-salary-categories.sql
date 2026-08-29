SELECT COUNT(*) AS accounts_count, 'Low Salary' AS category
FROM Accounts
WHERE income < 20000
UNION 
SELECT COUNT(*) AS accounts_count, 'Average Salary' AS category
FROM Accounts
WHERE income >= 20000 AND income <= 50000
UNION 
SELECT COUNT(*) AS accounts_count, 'High Salary' AS category
FROM Accounts
WHERE income > 50000;