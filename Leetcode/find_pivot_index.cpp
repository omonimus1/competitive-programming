// https://leetcode.com/problems/find-pivot-index/
class Solution {
public:
    int pivotIndex(vector<int>& nums) {
       int entire_sum = 0;
    
       int len = nums.size(); 
       if (len <=1)
           return 0; 
           
       for(int i=0; i< len; i++)
            entire_sum += nums[i];
       int sum_to_the_right = entire_sum;
       int sum_to_left = 0;
    
        
       for(int i=0; i < len; i++)
       {
           // decrease_right_sum
           sum_to_the_right-= nums[i];
           if(sum_to_the_right == sum_to_left)
               return i; 
           sum_to_left+= nums[i]; 
       }
        return -1; 
    }
};

