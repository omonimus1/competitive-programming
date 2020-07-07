// https://leetcode.com/problems/binary-search/submissions/
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size()-1;
        
        while (left <= right)
        {
            int middle = left + (right-left)/2;
            if(nums[middle] == target)
                return middle;
            if(nums[middle] > target)
                right--;
            else
                left++;
        }
        return -1;
    }
};