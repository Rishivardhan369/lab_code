SELECT SUM(Salary) AS TotalSalary FROM Employees;
SELECT DepartmentID, AVG(Salary) AS AvgSalary
FROM Employees
GROUP BY DepartmentID;

SELECT DepartmentID, COUNT(*) AS EmployeeCount
FROM Employees
GROUP BY DepartmentID;

SELECT MAX(Salary) AS Highest, MIN(Salary) AS Lowest FROM Employees;
