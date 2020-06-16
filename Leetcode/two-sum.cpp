// https://leetcode.com/problems/two-sum/submissions/
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>s;
        for(int i =0; i < nums.size()-1; i++)
        {
            for(int j = i+1; j < nums.size(); j++)
            {
                if(nums[i] + nums[j] == target)
                {
                    s.push_back(i);
                    s.push_back(j);
                    return s;
                }
            }
        }
        return s; 
    }
};