// https://leetcode.com/problems/sum-of-digits-in-the-minimum-number/submissions/
class Solution {
public:
    int sumOfDigits(vector<int>& A) {
        int smallest = INT_MAX;
        int len = A.size();
            
    
        for(int i =0;  i< len; i++)
        {
            if(A[i] < smallest)
                smallest = A[i];
        }
        
        int sum_digits = 0;
        while(smallest > 0)
        {
            sum_digits += smallest % 10;
            smallest /= 10;
        }
        if(sum_digits % 2 == 0)
            return 1;
        else
            return 0; 
    }
};