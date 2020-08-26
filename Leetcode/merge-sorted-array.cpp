// https://leetcode.com/explore/learn/card/fun-with-arrays/525/inserting-items-into-an-array/3253/
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int end = m+n;
        int current_index_array_1 = m; 
        for(int i=0; i< n; i++)
        {
            nums1[current_index_array_1] = nums2[i];
            current_index_array_1 +=1;
        }
        sort(nums1.begin(), nums1.end());
    }
};