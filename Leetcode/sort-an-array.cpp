//https://leetcode.com/problems/sort-an-array/submissions/
class Solution {
public:
    int partition(vector<int> &nums, int start, int end)
    {
        
        int pivot = nums[end];
        for(int i =start; i<end; i++)
        {
            if(nums[i] <= pivot)
            {
                swap(nums[i], nums[start++]);
            }
        }
        
        swap(nums[start], nums[end]);
        return start;
    }
    
    void quickSort(vector<int> &nums, int start, int end)
    {
        if(start < end)
        {
            int pivot = partition(nums, start, end);
            quickSort(nums, start, pivot-1);
            quickSort(nums, pivot+1, end);
        }
    }
    
    vector<int> sortArray(vector<int>& nums) {
        
        int list_size = nums.size();
        if (list_size <=1) return nums;
       
    
        quickSort(nums, 0, list_size-1);
        
        return nums;
    }
  
};