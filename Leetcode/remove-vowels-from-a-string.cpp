// https://leetcode.com/problems/remove-vowels-from-a-string/submissions/
class Solution {
public:
    bool isVowel(char x)
    {
        if(x == 'a' || x == 'A')
            return true; 
        else if( x == 'e' || x == 'E')
            return true; 
        else if (x == 'i' || x == 'I')
            return true; 
        else if( x == 'o' || x == 'O' )
            return true; 
        else if( x == 'u' || x == 'U')
            return true; 
        return false;
    }
    string removeVowels(string S) {
        int len = S.size();
        string solution =""; 
        for(int i=0; i < len; i++)
        {
            if(!isVowel(S[i]))
                solution += S[i];    
        }
        return solution;
    }
};