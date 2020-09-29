// https://leetcode.com/problems/move-zeroes/submissions/
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
       int len = nums.size(); 
       // count number of zeros
        int zeros = 0; 
        for(int i =0; i < len ;i++)
        {
            if(nums[i] == 0)
                zeros++; 
        }
        // if there are no 0 or there are just zeros, return
        if(zeros == 0 ||  zeros == len )
            return; 
        int j=0; 
        for(int i = 0; i< len; i++)
        {
            if(nums[i] != 0)
            {
                nums[j] = nums[i]; 
                j++; 
            }
        }
        // Now, insert all the zeros at the end; 
        for(int i = len-zeros; i < len; i++)
            nums[i] = 0; 
    }
};