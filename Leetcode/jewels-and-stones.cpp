// https://leetcode.com/problems/jewels-and-stones/submissions/
class Solution {
public:
    int numJewelsInStones(string J, string S) {
        unordered_map<char, int>mp;
        for (int i = 0; i < S.size(); i++)
            mp[S[i]]++;
        int solution = 0;
        for (int i = 0; i < J.size(); i++)
            solution += mp[J[i]];

        return solution;
    }
};