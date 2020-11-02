// https://leetcode.com/explore/interview/card/facebook/54/sorting-and-searching-3/3032/
class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int len = nums.size(); 
        if(len == 1 )
            return 0;

        for(int i =0; i < len; i++)
        {
            if(i==0)
            {
                if(nums[0] > nums[1])
                    return 0; 
                continue; 
            }
            if(i == len-1)
            {
                if(nums[len-2] > nums[len-1])
                    return len-2; 
                else if(nums[len-1] > nums[len-2])
                    return len-1; 
                return -1; 
            }
            if(nums[i] > nums[i-1] && nums[i] > nums[i+1])
                return i; 
        }
        return -1; 
    }
};