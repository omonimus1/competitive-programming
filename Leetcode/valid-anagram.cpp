//https://leetcode.com/problems/valid-anagram/submissions/
/* Having two strings, checkk if s2 is the anagram of s1 */
class Solution {
public:
    bool isAnagram(string s, string t) {
        
        if(s.size() != t.size())
            return false;
        
        sort(s.begin(), s.end());
        
        sort(t.begin(), t.end());
        
        if(s == t)
            return true;
        return false;
    }
};