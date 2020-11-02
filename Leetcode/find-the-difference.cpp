// https://leetcode.com/problems/find-the-difference/submissions/
class Solution {
public:
    char findTheDifference(string s, string t) {
        int len_s = s.size(); 
        if (len_s == 0)
            return t[0];
        
        unordered_map<char, int>map_s; 
        unordered_map<char, int>map_t; 
        for(int i =0;  i < s.size(); i++)
            map_s[s[i]]++;
        
        for(int i =0;  i < t.size(); i++)
            map_t[t[i]]++;
        
        for(auto x : map_t)
        {
            if(!map_s.count(x.first))
                return x.first;
            if(map_s[x.first] != map_t[x.first])
                return x.first; 
        }
        return t[0]; 
    }
};