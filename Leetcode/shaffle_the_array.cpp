// https://leetcode.com/problems/shuffle-the-array/
/*
Given the array nums consisting of 2n elements in the form [x1,x2,...,xn,y1,y2,...,yn].

Return the array in the form [x1,y1,x2,y2,...,xn,yn].
*/
class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        if(n <= 1)
                return nums;
        vector<int> solution;
    
        for(int i=0;i < n; i++)
        {
             solution.push_back(nums[i]);
             solution.push_back(nums[i+n]);
        }
        return solution;
    }
};