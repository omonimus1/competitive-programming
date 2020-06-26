// https://leetcode.com/problems/search-in-rotated-sorted-array-ii/submissions/
class Solution {
public:
    bool search(vector<int>& nums, int target) {
        for(int i =0; i < nums.size(); i++)
        {
            if(nums[i] == target)
                return true;
        }
        return false; 
    }
};