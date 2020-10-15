//  https://leetcode.com/problems/reverse-only-letters/submissions/
class Solution {
public:
    bool isLetter(char x)
    {
        if(x >= 'a' && x <= 'z')
            return true; 
        else if(x >= 'A' && x <= 'Z')
            return true; 
        else
            return false; 
    }
         
    string reverseOnlyLetters(string S) {
        string letters = "";
        int len = S.size();
        for(int i=0;  i< len; i++)
        {
            if(isLetter(S[i]))
                letters += S[i];
        }
        
        reverse(letters.begin(), letters.end());
        int a=0;
        for(int i=0;  i< len; i++)
        {
            if(isLetter(S[i]))
            {
                S[i] = letters[a];
                a+=1;
            }
        }
        return S; 
    }
};