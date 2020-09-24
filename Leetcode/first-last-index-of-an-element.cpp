// https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/submissions/
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int first = -1, second =-1; 
        int len = nums.size(); 
        for(int i =0; i < len; i++)
        {
            if(nums[i] == target)
            {
                first = i; 
                break; 
            }
        }
        for(int i = len-1; i >=0; i--)
        {
            if(nums[i] == target)
            {
                second = i; 
                break; 
            }
        }
        vector<int>solution; 
        solution.push_back(first);
        solution.push_back(second);
        return solution; 
    }
};

// One solution providede by another Leetcode user: https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/discuss/861262/Easy-to-understand-iterative-solution-with-two-binary-searches