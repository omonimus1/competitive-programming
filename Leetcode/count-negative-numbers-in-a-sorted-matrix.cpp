// https://leetcode.com/problems/count-negative-numbers-in-a-sorted-matrix/submissions/
class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int negative = 0;
        for(int i =0; i < grid.size(); i++)
        {
            for(int j=0; j < grid[i].size(); j++)
            {
                if(grid[i][j] < 0)
                    negative+=1;
            }
        }
        return negative;
    }
};