Select p.product_id ,
    IFNULL(Round(SUM(p.price * u.units) / SUM(u.units), 2), 0) as average_price
From Prices p
Left Join UnitsSold u
on p.product_id  = u.product_id 
    AND u.purchase_date >= p.start_date
    AND u.purchase_date <= p.end_date
Group by p.product_id 