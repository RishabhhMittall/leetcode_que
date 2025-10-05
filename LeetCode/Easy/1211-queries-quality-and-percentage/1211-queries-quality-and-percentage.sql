# Write your MySQL query statement below
Select query_name,
    Round(AVG(rating/position), 2) as quality,
     ROUND(SUM(rating < 3) * 100 / COUNT(*), 2) AS poor_query_percentage
From Queries
Group by query_name