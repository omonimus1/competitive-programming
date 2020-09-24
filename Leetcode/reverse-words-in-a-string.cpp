// https://leetcode.com/problems/reverse-words-in-a-string/submissions/
class Solution {
public:
    string reverseWords(string s) {
        int len = s.size();
        if(len == 0)
            return s;
        if(s == " ")
            return "";
        vector<string>temp;
        string word;
        for(int i =0; i < len; i++)
        {
            word = "";
            while(i < len && s[i] != ' ')
            {
                word += s[i];
                i+=1;
            }
            if(word != "" && word != " ")
                temp.push_back(word);
        }
        
        len = temp.size();
        if(len == 0)
            return ""; 
        word = "";
        for(int i =len-1; i >= 1; i--)
        {
            word += temp[i];
            word += " ";
        }
        word += temp[0];
        return word; 
    }
};