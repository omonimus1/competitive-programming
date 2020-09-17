//https://leetcode.com/problems/remove-duplicates-from-sorted-array/submissions/
/*
A solution could be use an unordered_set, simply iterate the array and push any element in the set,
of course, storing just the unique elements and then return the size of the set.

Another method is to sort first the array (in this case sorted), and use the unique function provided by C++. 

*/
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        nums.erase(std::unique(nums.begin(), nums.end()), nums.end());
        return nums.size();
    }
};