//  https://leetcode.com/problems/sort-array-by-parity-ii/

class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& A) {
        int i;
        int len = A.size();
        vector<int>even;
        vector<int>odd;
        vector<int>solution;
        for(i=0;  i < len; i++)
        {
            if(A[i] % 2 ==0)
                even.push_back(A[i]);
            else
                odd.push_back(A[i]);
        }
        int a=0, b=0; 
        for(int i =0; i < len; i++)
        {
            if(i % 2 == 0)
            {
                solution.push_back(even[a]);
                a+=1;
            }
            else
            {
                solution.push_back(odd[b]);
                b+=1;
            }
        }
        return solution; 
    }
};