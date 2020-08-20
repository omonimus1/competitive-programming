//  https://leetcode.com/problems/unique-number-of-occurrences/submissions/
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int, int> mp;
        int len = arr.size();
        for(int i =0; i < len; i++)
            mp[arr[i]]++;
        
        unordered_set<int>s; 
        int size_map = mp.size();
        for(auto x:mp)
            s.insert(x.second);
        
        if(s.size() == size_map)
            return true; 
        return false; 
        
    }
};