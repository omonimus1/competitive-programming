// https://leetcode.com/problems/running-sum-of-1d-array/submissions/
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int>solution; 
        int size = nums.size(); 
        int sum; 
        for(int i =0; i < size; i++)
        {
            sum += nums[i];
            solution.push_back(sum);
        }
        return solution; 
    }
};
