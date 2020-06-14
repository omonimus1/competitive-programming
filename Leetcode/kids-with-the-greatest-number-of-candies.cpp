// https://leetcode.com/problems/kids-with-the-greatest-number-of-candies/submissions/

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool>solution;
        
        int biggest = -99999999;
        for(int i =0; i < candies.size(); i++) { if(candies[i] > biggest) biggest = candies[i]; }
        for(int i =0; i < candies.size(); i++)
        {
            if(candies[i]+extraCandies >= biggest)
                solution.push_back(true);
            else
                solution.push_back(false);
        }
        return solution; 
    }
};
