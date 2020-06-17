// https://leetcode.com/problems/search-insert-position/submissions/
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int len = nums.size();
        // Last element is smaller
        if(nums[len-1] < target)
            return len;
        if(nums[0] > target)
            return 0;
        for(int i =0; i < nums.size(); i++)
        {
            if(nums[i] == target)
                return i;
            if(nums[i] > target)
                return i;
        }
        // Something went wront
        return -1;
    }
};