// https://leetcode.com/problems/maximum-product-of-two-elements-in-an-array/
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        long int product = INT_MIN;
        int len = nums.size();
        long int current_product;
        for(int i =0; i < len-1; i++)
        {
            for(int j=i+1; j < len; j++)
            {
                current_product = (nums[i]-1)*(nums[j]-1);
                if(current_product > product)
                    product = current_product;
            }
        }
        return product; 
        
    }
};