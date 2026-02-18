// // https://leetcode.com/problems/binary-search/submissions/
// class Solution {
// public:
//     int search(vector<int>& nums, int target) {
//         int left = 0;
//         int right = nums.size()-1;
        
//         while (left <= right)
//         {
//             int middle = left + (right-left)/2;
//             if(nums[middle] == target)
//                 return middle;
//             if(nums[middle] > target)
//                 right--;
//             else
//                 left++;
//         }
//         return -1;
//     }
// };

// updated code as perivous code doesnt handle all the test cases on leetcode 
class Solution {
public:
    int searchInsert(std::vector<int>& nums, int target) {
        int start = 0;
        int end = nums.size();

        while (start < end) {
            int mid = start + (end - start) / 2;

            if (nums[mid] == target) {
                return mid;
            } else if (nums[mid] < target) {
                start = mid + 1;
            } else {
                end = mid;
            }
        }

        return start;  // If the target is not found, return the insertion position
    }
};
