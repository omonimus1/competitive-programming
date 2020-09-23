// https://leetcode.com/problems/check-if-a-number-is-majority-element-in-a-sorted-array/submissions/
class Solution {
public:
    bool isMajorityElement(vector<int>& nums, int target) {
        int len = nums.size(); 
        
        int counter = 0; 
        for(int i =0; i < len; i++)
        {
            if(nums[i] == target)
                counter++; 
        }
        if(counter > len/2)
            return true; 
        return false; 
    }
};