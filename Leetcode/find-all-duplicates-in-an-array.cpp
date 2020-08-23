//    https://leetcode.com/problems/find-all-duplicates-in-an-array/submissions/
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int len = nums.size();
        vector<int>solution; 
        sort(nums.begin(), nums.end());
        for(int i =0; i < len-1; i++)
        {
            if(nums[i] == nums[i+1])
                solution.push_back(nums[i]);
        }
        return solution; 
    }
};