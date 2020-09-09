// https://leetcode.com/explore/interview/card/amazon/79/sorting-and-searching/482/
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int len = nums.size();
        return nums[len-k];
    }
};