# Write your MySQL query statement below
SELECT 
    DATE_FORMAT(trans_date, '%Y-%m') as month, country,
    COUNT(*) as trans_count,
    sum(case when state='approved' then 1 else 0 end) as approved_count,
    sum(amount) as trans_total_amount,
    sum(if(state='approved', amount, 0)) as approved_total_amount
FROM Transactions
GROUP BY month, country