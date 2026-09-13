-- Write your PostgreSQL query statement below
with ranked as (
    SELECT 
        *,
        DENSE_RANK() OVER (
            PARTITION BY departmentId
            ORDER BY salary DESC
        ) AS rnk
    FROM Employee
)
SELECT 
    d.name AS Department,
    r.name AS Employee,
    r.salary AS Salary
    from ranked r
JOIN Department d
    ON r.departmentId = d.id
WHERE r.rnk <= 3;