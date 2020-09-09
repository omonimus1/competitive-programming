// https://leetcode.com/explore/interview/card/amazon/79/sorting-and-searching/2991/
#include <iomanip>
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int len1 = nums1.size();
        int len2 = nums2.size();
        
        vector<int>temp; 
        for(int i =0; i < len1; i++)
                temp.push_back(nums1[i]);
        
        for(int i =0; i < len2; i++)
                temp.push_back(nums2[i]);
        
        sort(temp.begin(), temp.end());
        std::cout << std::setprecision(5) << std::fixed;
        int len = len1+len2;
        
        
        double result = 0.0; 
        
        // if the length of the two arrays is odd, return the middl element
        if(len %2 !=0)
        {
            result = (double) temp[len/2];  
        }
        //  Because the length of the sum of two arrays is even, I will return the average of the two middle element
        else
        {
            result = (double) (temp[len/2]+temp[len/2 -1])/2;
        } 
         return result;
        
        
    }
};