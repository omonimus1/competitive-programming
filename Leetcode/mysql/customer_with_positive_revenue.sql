# https://leetcode.com/problems/find-customers-with-positive-revenue-this-year/?envType=problem-list-v2&envId=database
SELECT customer_id
from Customers
WHERE year = '2021' and revenue > 0
