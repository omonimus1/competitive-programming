// https://leetcode.com/problems/three-consecutive-odds/submissions/
class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int len = arr.size();
        if(len < 3)
            return false; 
        if(len == 3)
        {
            if(arr[0] %2 !=0 && arr[1]%2 !=0)
            {
                if(arr[2] %2 !=0)
                    return true;
            } 
            return false;
        }
        for(int i =0; i <= len-3; i++)
        {
            if(arr[i] %2 !=0 && arr[i+1]%2 !=0)
            {
                if(arr[i+2] %2 !=0)
                    return true;
            }
        } 
        return false; 
    }
};