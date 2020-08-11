// https://leetcode.com/problems/number-of-good-pairs/submissions/
class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int sol = 0;
        int len = nums.size();
        for(int i =0; i < len-1; i++)
        {
            for(int j=i+1; j < len; j++)
            {
                if(nums[i] == nums[j])
                    sol++;
            }
        }
        return sol; 
    }
};  