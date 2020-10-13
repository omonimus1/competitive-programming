// https://leetcode.com/problems/largest-unique-number/submissions
class Solution {
public:
    int largestUniqueNumber(vector<int>& A) {
        int biggest = INT_MIN;
        int len = A.size();
        unordered_map<int, int>mp;
        for(int i =0; i < len; i++)
            mp[A[i]]++;
        
        for(auto x: mp)
        {
            if(x.second == 1)
            {
                if(x.first > biggest)
                    biggest = x.first; 
            }
        }
        if(biggest == INT_MIN)
            return -1;
        else
            return biggest;
    }
};