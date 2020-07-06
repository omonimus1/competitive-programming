// https://leetcode.com/problems/element-appearing-more-than-25-in-sorted-array/submissions/
class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        if(arr.size() <= 2)
            return arr[0];
        
        int frequency;
        int min = floor(arr.size()/4);
        
    
        for(int i =0; i < arr.size()-1 ; i++)
        {
            frequency = 0;
            while(arr[i] == arr[i+1])
            {
                frequency++;
                if(frequency >= min)
                    return arr[i];
                i+=1;
            }
        }
        return -1;
    }
};