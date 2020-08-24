// https://leetcode.com/explore/interview/card/top-interview-questions-easy/127/strings/879/
class Solution {
public:
    void reverseString(vector<char>& s) {
     /* Do not allocate extra space for another array, you must do this by modifying the input array in-place with O(1) extra memory */
        reverse(s.begin(), s.end());       
    }
};