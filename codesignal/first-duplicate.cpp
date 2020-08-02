// https://app.codesignal.com/interview-practice/task/pMvymcahZ8dY4g75q/solutions
int firstDuplicate(std::vector<int> a) {
    unordered_map<int, int>mp;
    for(int i =0; i < a.size(); i++)
    {
        mp[a[i]]++;
        if(mp[a[i]] >1)
            return a[i];
    }
    
    return -1;
}
