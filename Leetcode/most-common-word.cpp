// https://leetcode.com/problems/most-common-word/submissions/
class Solution {
public:
    bool isBanned(vector<string>& banned, string word)
    {
        for(int i = 0;  i< banned.size(); i++)
        {
            if(banned[i] == word)
                return true; 
        }
        return false; 
    }
    
    string mostCommonWord(string paragraph, vector<string>& banned) {
        int len = paragraph.size(); 
        for(int i =0; i < len ; i++)
        {
            if(isupper(paragraph[i]))
                paragraph[i] = tolower(paragraph[i]);
        }
        string word; 
        unordered_map<string, int>mp; 
        
        for(int i =0;  i< len; i++)
        {
            word =""; 
            while(i < len && paragraph[i] >= 'a' &&  paragraph[i] <= 'z')
            {
                word += paragraph[i];
                i+=1; 
            }
            
            if(word != "" && word != " ")
            {
                mp[word]++;
            }
        }
        //cout <<mp.size()<<endl;  
        string result = ""; 
        int smallest = INT_MIN; 
        for(auto x : mp)
        {
            // If frequency is > than my highest current frequency, store frequency and check if word is banned
            if(x.second >= smallest)
            {
                // if word is NOT banned, store its frequency and word
                if(!isBanned(banned, x.first))
                {
                    result = x.first;
                    smallest = x.second; 
                }
            }
        }
        return result; 
    }
};
