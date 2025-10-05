# Write your MySQL query statement below
Select p.project_id, 
    ROUND(AVG(e.experience_years),2) AS average_years
From Project p
Left Join Employee e
ON p.employee_id = e.employee_id
Group by project_id