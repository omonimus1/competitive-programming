"""
Given an array nums with n objects 
colored red, white, or blue, sort them 
in-place so that objects of the same color 
are adjacent, with the colors in the order red, 
white, and blue.

We will use the integers 0, 1, 
and 2 to represent the color red, white,
 and blue, respectively.

You must solve this problem without using the 
library's sort function.
"""
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int length = nums.size();
        int zero = 0;
        int one = 0;
        int two = 0;
        for(int i =0; i< length; i++){
            if(0 == nums[i])
                zero++;
            else if(1 == nums[i])
                one++;
            else if(2 == nums[i])
                two++;
        }

        int index = 0;
        while(zero > 0){
            nums[index] = 0;
            index++;
            zero--;
        }
        while(one > 0){
            nums[index] = 1;
            index++;
            one--;
        }
        while(two > 0){
            nums[index] = 2;
            index++;
            two--;
        }
    }
};