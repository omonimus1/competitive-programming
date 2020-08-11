// https://leetcode.com/problems/find-lucky-integer-in-an-array/submissions/
class Solution {
public:
    int findLucky(vector<int>& arr) {
        int len = arr.size();
        int frequency;
        int current_luky = INT_MIN;
        for(int i =0; i < len; i++)
        {
            frequency =0;
            for(int j = 0; j < len; j++)
            {
                if(arr[i] == arr[j])
                    frequency++;
            }
            if(frequency == arr[i])
            {
                if(arr[i]> current_luky)
                    current_luky = arr[i];
            }
        }
        
        if(current_luky == INT_MIN)
            return -1;
        return current_luky;
    }
};