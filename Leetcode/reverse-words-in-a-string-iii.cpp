// https://leetcode.com/problems/reverse-words-in-a-string-iii/submissions/
class Solution {
public:
    string reverseWords(string s) {
        if(s == "")
            return s; 
        if(s == " ")
            return s; 
        vector<string>temporary;
        int len = s.size();
        string word;
        for(int i =0; i < len ; i++)
        {
            word = "";
            while(i < len && s[i] != ' ')
            {
                word += s[i];
                i+=1;
            }
            if(word != "" && word != " ")
            {
                reverse(word.begin(), word.end());
                temporary.push_back(word);
            }
                
        }
        len =  temporary.size();
        string result = "";
        for(int i =0; i <len-1; i++)
        {
            result += temporary[i];
            result += " ";
        }
        result += temporary[len-1];
        return result; 
        
    }
};