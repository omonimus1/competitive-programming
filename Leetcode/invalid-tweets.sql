// https://leetcode.com/problems/invalid-tweets/submissions/
SELECT tweet_id 
FROM Tweets
WHERE character_length(content)> 15;