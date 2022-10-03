class Solution {
public:
    bool isPalindrome(int x) 
    {
        if(x < 0) 
        {
            return false;
        }
        long int reverse = 0; 
        int temp = x;
        while(temp)
        {
            reverse = (10 * reverse) + (temp % 10);
            temp /= 10;
        }
        if(x == reverse)
        {
            return true;
        }
        else 
        {
            return false;
        }
    }
};
