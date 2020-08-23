// https://leetcode.com/problems/final-prices-with-a-special-discount-in-a-shop/submissions/
class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        int len = prices.size();
        bool flag; 
        for(int i =0; i < len-1; i++)
        {
            flag = false; 
            for(int j =i+1; j < len; j++)
            {
                
                if(prices[j] <= prices[i])
                {
                    prices[i] -= prices[j];
                    flag =true; 
                    break; 
                }
                if(flag)
                    break; 
            }
        }
        return prices; 
    }
};