// https://leetcode.com/problems/richest-customer-wealth/submissions/
class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int current_highest = INT_MIN;
        int highest = INT_MIN;
        for (int i = 0; i < accounts.size(); i++)
        {
            highest = 0;
            for (int j = 0; j < accounts[i].size(); j++)
            {
                highest += accounts[i][j];
            }
            if (highest > current_highest)
                current_highest = highest;
        }
        return current_highest;

    }
};