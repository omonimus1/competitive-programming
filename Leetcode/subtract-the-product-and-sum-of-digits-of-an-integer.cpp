// https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer/
class Solution {
public:
    int subtractProductAndSum(int n) {
        if (n==0)
            return 0; 
        int  sum = 0;
        int product = 1; 
        int single_digit; 
        while(n > 0)
        {
            single_digit = n % 10;
            n /= 10;
            sum += single_digit;
            product *= single_digit;
        }
        return product - sum; 
    }
};