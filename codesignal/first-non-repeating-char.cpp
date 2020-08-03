// https://app.codesignal.com/interview-practice/task/uX5iLwhc6L5ckSyNC/solutions
char firstNotRepeatingCharacter(std::string s) {
    unordered_map<char, int>mp;
    int len  = s.size();
    for(int i =0; i < len; i++){
        mp[s[i]]++;
    }
    
    for(int i =0; i < len; i++)
    {
        if (mp[s[i]] == 1)
            return s[i];
    }
    return '_';a
}
