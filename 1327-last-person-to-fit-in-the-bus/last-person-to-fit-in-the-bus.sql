# Write your MySQL query statement below
select q1.person_name 
from Queue q1
join Queue q2
on q2.turn<=q1.turn
group by q1.turn 
having sum(q2.Weight)<=1000
order by q1.turn desc
limit 1