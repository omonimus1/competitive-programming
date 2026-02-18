# https://leetcode.com/submissions/detail/1923565691/
costumer id which placed the highest number of orders
# Code
```mysql []
SELECT customer_number
from Orders
GROUP BY customer_number
ORDER BY COUNT(*) DESC
LIMIT 1
```
