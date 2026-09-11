-- Write your PostgreSQL query statement below
select id,visit_date,people 
from (
    select*,
    id - row_number()over(order by id)as grp
    from Stadium 
    where people>=100
)
where grp in(
    select grp
    from(
        select id- row_number() over(order by id)as grp
        from Stadium 
        where people >= 100
    )
    group by grp
    having count(*)>=3
)
order by visit_date;