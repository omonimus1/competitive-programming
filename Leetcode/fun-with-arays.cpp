// https://leetcode.com/explore/learn/card/fun-with-arrays/525/inserting-items-into-an-array/3245/
class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int len = arr.size();
        if(len == 1)
        {
            return;
        }
        if(len == 2)
        {
            if(arr[0] == 0)
                arr[1] = 0;
            return; 
        }
        for(int i=0;  i< len-1; i++)
        {
            if(arr[i] == 0)
            {
                // shift
                for(int j = len-1; j >= i+1; j--)
                    arr[j] = arr[j-1];
                // Set next to zero
                arr[i+1] = 0;
                // Increment i so that we do not count again the new 0; 
                i+=1;
            }
            
        }
    }
};