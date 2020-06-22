// https://leetcode.com/problems/max-consecutive-ones/submissions/
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        if(nums.size() == 1)
            return nums[0];
        int max = 0;
        int counter=0;
        
        
        for(int i =0; i < nums.size(); i++)
        {
            if(nums[i] == 1)
            {
                counter++;
                max = counter > max ? counter : max;
            }   
            // if we have a 0
            else
                counter = 0;
        }
        return max; 
    }
};