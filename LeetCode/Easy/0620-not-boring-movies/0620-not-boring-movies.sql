# Write your MySQL query statement below
SELECT id, movie, description, rating
From Cinema c
Where MOD(id,2) = 1 and description != "boring"
Order by rating DESC