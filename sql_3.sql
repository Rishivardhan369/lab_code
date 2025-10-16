SELECT EmployeeName, Salary,
       RANK() OVER (ORDER BY Salary DESC) AS Rank
FROM Employees;

WITH HighEarners AS (
    SELECT EmployeeName, Salary FROM Employees WHERE Salary > 80000
)
SELECT * FROM HighEarners ORDER BY Salary DESC;

SELECT EmployeeName,
       CASE 
           WHEN Salary > 80000 THEN 'High'
           WHEN Salary BETWEEN 50000 AND 80000 THEN 'Medium'
           ELSE 'Low'
       END AS SalaryCategory
FROM Employees;
