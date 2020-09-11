// https://leetcode.com/problems/search-a-2d-matrix/submissions/
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for(int i=0;  i< matrix.size(); i++)  
        {
            for(int j = 0; j < matrix[i].size(); j++)
            {
                if(matrix[i][j] == target)
                        return true; 
            }
        }
        return false;
    }
};