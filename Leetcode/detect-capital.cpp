//   https://leetcode.com/problems/detect-capital/submissions/
class Solution {
public:
    bool are_all_lower_case(string word, int len)
    {
        for(int i =0; i < len; i++)
        {
            if(isupper(word[i]))
                return false; 
        }
        return true; 
    }
    
    bool are_all_upper_case(string word, int len)
    {
        for(int i =0; i < len; i++)
        {
            if(islower(word[i]))
                return false; 
        }
        return true; 
    }
    
    bool is_just_first_letter_upper_case(string word, int len)
    {
        if(islower(word[0]))
            return false; 
        for(int i =1;  i < len; i++)
        {
            if(isupper(word[i]))
                return false; 
        }
        return true; 
    }
    
    bool detectCapitalUse(string word) {
        int len = word.size(); 
        if(word == "" || word == " ")
            return false; 
        if(len == 1)
            return true; 
        
        if(are_all_upper_case(word, len))
            return true; 
        if( are_all_lower_case(word, len))
            return true; 
        
        if(is_just_first_letter_upper_case(word, len))
            return true; 
        
        return false; 
    }
};