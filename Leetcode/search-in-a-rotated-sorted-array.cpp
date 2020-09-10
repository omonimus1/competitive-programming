// https://leetcode.com/explore/interview/card/amazon/79/sorting-and-searching/2992/
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int len = nums.size(); 
        for(int i =0; i < len; i++)
        {
           if(nums[i] == target)
            return i; 
        }
        return -1; 
    }
};