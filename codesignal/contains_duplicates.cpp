// https://app.codesignal.com/interview-practice/task/CfknJzPmdbstXhsoJ/
bool containsDuplicates(std::vector<int> a) {
    unordered_map<int, int>mp;
    
    int len = a.size();
    for(int i =0; i < len; i++)
        mp[a[i]]++;
        
    unordered_map<int,int>::iterator itr;
    itr = mp.begin();
    bool all_distinct = true;
    for(itr = mp.begin(); itr != mp.end(); ++itr)
    {
        if(itr->second != 1)
            return true;
    }    
    
    return false;

}
