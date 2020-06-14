//  https://leetcode.com/problems/running-sum-of-1d-array/submissions/
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int>s;
        if(nums.size() == 0)
            return s;
        s.push_back(nums[0]);
        
        int sum;
        // Add first element; 
        
        for(int i =0; i< nums.size()-1; i++)
        {
            sum = 0;
            for(int  j=0; j <=i+1; j++)
            {
                sum += nums[j];
            }
            s.push_back(sum);
        }
        return s; 
    }
};