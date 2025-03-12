// https://leetcode.com/problems/maximum-count-of-positive-integer-and-negative-integer/?envType=daily-question&envId=2025-03-12
/*
    Below is a brute force approach, using O(N) time complexity.
    You can improve it by having a binary search (O(log n)).
    Uses std::lower_bound to find the first non-negative number, which gives the count of negative numbers.
    Uses std::upper_bound to find the first positive number, which helps compute the count of positive numbers.

#include <vector>
#include <algorithm>

class Solution {
public:
    int maximumCount(std::vector<int>& nums) {
        int negCount = std::lower_bound(nums.begin(), nums.end(), 0) - nums.begin();
        int posCount = nums.end() - std::upper_bound(nums.begin(), nums.end(), 0);
        return std::max(negCount, posCount);
    }
};

*/
class Solution {
    public:
        int maximumCount(vector<int>& nums) {
            int negatives = 0;
            int positives = 0;
            for(int i =0; i < nums.size(); i++) {
                if(nums[i] < 0){
                    negatives++;
                } else if (nums[i] >=1 ) {
                    positives++;
                }
            }
            return abs(max(negatives, positives));
        }
    };