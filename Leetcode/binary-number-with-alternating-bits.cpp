// https://leetcode.com/problems/binary-number-with-alternating-bits/submissions/
class Solution {
public:
    bool hasAlternatingBits(int n) {
        vector<bool>s;
        while(n > 0)
        {
            s.push_back(n%2);
            n /=2;
        }
        for(int i =0; i < s.size()-1; i++)
        {
            if(s[i] == s[i+1])
                return false;
        }
        return true;
    }
};