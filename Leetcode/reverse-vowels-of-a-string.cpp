//  https://leetcode.com/problems/reverse-vowels-of-a-string/submissions/
class Solution {
public:
    
    char vowel_list[10] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U' };
        
    bool is_vowel(char letter)
    {
        for(int i =0; i < 10; i++)
        {
            if(letter == vowel_list[i])
                return true;
        }
        return false; 
    }
    
    string reverseVowels(string s) {
        int len = s.size();
        
        string v = "";
        for(int i=0; i < len; i++)
        {
            if(is_vowel(s[i]))
                    v.push_back(s[i]);
        }
        
        reverse(v.begin(), v.end());
        int j =0; 
        for(int i =0; i < len; i++)
        {
            if(is_vowel(s[i]))
             {
                s[i] = v[j];
                j++;
             }
               
        }
        return s; 
    }
};