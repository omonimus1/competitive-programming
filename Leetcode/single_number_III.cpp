//https://leetcode.com/problems/single-number-iii/
class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
     unordered_map<int, int>mp;
        int len = nums.size();
        for(int i =0; i < len; i++)
            mp[nums[i]]++;
        
        vector<int>solution; 
        for(auto x : mp)
        {
            if(x.second == 1)
                solution.push_back(x.first);
        }
        return solution; 
    }
};