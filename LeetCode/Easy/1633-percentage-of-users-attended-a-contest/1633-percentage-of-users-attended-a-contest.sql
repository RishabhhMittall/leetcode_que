# Write your MySQL query statement below
Select r.contest_id,
    Round((COUNT(r.user_id) / (SELECT COUNT(*) FROM Users)) * 100, 2) as percentage
From register r
Left join Users u
ON u.user_id = r.user_id
Group By contest_id
order by percentage desc, contest_id ASC