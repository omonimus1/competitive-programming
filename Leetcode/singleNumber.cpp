class Solution {
public:
    int singleNumber(vector<int>& nums) {
         // Do XOR of all elements and return 
        int res = nums[0]; 
        for (int i = 1; i < nums.size(); i++) 
            res = res ^ nums[i]; 
  
        return res;
    }
};