# Write your MySQL query statement below
(select u.name as results
from  Users u
right join MovieRating r
on u.user_id=r.user_id
group by u.user_id ,u.name
order by count(r.movie_id) desc,u.name asc
limit 1)
Union all
(select m.title
from  Movies m
right join MovieRating r
on m.movie_id=r.movie_id
where created_at between '2020-02-01' and '2020-02-29'
group by r.movie_id,m.title
order by avg(r.rating) desc,m.title asc
limit 1)