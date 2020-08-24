//   https://leetcode.com/explore/interview/card/top-interview-questions-easy/127/strings/883/
class Solution {
public:
    bool isPalindrome(string s) {
        if(s == "" || s == " ")
            return true;
        int len = s.size();
                
        string sentence = "";
        for(int i =0; i < len; i++)
        {
            if(s[i] >= 'A' && s[i] <= 'Z')
                sentence += tolower(s[i]);
            if(s[i] >= 'a' && s[i] <= 'z')
                sentence += s[i];
            if(s[i] >= '0' && s[i] <= '9')
                 sentence += s[i];
        }
        
        len = sentence.size();
        if(len <=1  )
            return true;
        if(len == 2)
        {
            if(sentence[0] == sentence[1])
                    return true;
            return false; 
        }

        int end = len-1;
        for(int i =0; i <= len/2; i++)
        {
            if(sentence[i] != sentence[end])
                return false; 
            end -=1;
        }
        return true; 
    }
};