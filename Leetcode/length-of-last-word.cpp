// https://leetcode.com/problems/length-of-last-word/submissions/
class Solution {
public:
    int lengthOfLastWord(string s) {
        
        stringstream str(s);
        string word;
        int ans = 0;
        
        while(str >> word){
            ans = word.size();
        }
        return ans;
    }
};