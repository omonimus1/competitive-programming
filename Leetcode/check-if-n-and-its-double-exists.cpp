// https://leetcode.com/explore/featured/card/fun-with-arrays/527/searching-for-items-in-an-array/3250/
class Solution {
public:
    
    bool checkIfExist(vector<int>& arr) {
        sort(arr.begin(), arr.end());

        int len = arr.size();
        if(len ==1)
        {
            return false; 
        }
        if(len == 2)
        {
            if(arr[1] == arr[0]*2)
                return true; 
            return false; 
        }
    
        for(int i =0; i < len-1; i++)
        {
            for(int j=i+1; j < len; j++)
            {
                cout << arr[i] *2  <<" " << arr[j] <<endl;
                if(arr[i] *2 == arr[j] || arr[j]*2 == arr[i])
                    return true;
            }
        }
        return false;
    }
};