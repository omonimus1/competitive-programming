// https://leetcode.com/problems/reverse-string/submissions/
/*
    Reverse string without use extra spacel
*/
class Solution {
public:
    void reverseString(vector<char>& s) {
     /* Do not allocate extra space for another array, you must do this by modifying the input array in-place with O(1) extra memory */
     
        int list_size = s.size();
        // If string is empty or it has just one char
        if(list_size== 0 || list_size ==1)
            return;
        int end = list_size -1;
        for(int i =0; i <  list_size/2; i++)
        {
            swap(s[i], s[end]);
            end--;
        }
            
    }
};