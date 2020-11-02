//  https://leetcode.com/explore/interview/card/top-interview-questions-hard/116/array-and-strings/834/
/*
    This can be solved in O(N^2 time), or in O(N) time using an unordered_map, or in O(N), 
    if the array would be sorted; 
*/

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int len = nums.size(); 
        for(int i =0; i< len-1; i++)
        {
            for(int j= i+1; j< len; j++)
            {
                if(nums[i] == nums[j])
                    return nums[i];
            }
        }
      return -1; 
    }
  
};