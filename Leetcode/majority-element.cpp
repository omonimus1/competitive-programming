// https://leetcode.com/problems/majority-element/submissions/
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int len = nums.size();
        
        int frequency = len/2;
        unordered_map<int, int>mp;
            
        for(int i =0; i < len; i++)
        {
            mp[nums[i]]++;
        }
        
        for(auto x: mp)
        {
            if(x.second > frequency)
                return x.first; 
        }
        return -1;
    }
};