// https://leetcode.com/problems/matrix-diagonal-sum/submissions/
class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int SIZE = mat.size(); 
        int sum_main = 0, sum_second = 0;
        // Get sum of the main diagonal
        for(int i =0;  i< SIZE; i++)
            sum_main += mat[i][i];

        // Get sum of the second diagonal;
        for (int i = 0; i < SIZE; i++){
            if(i == SIZE-1-i)
                continue; 
            else
                sum_second += mat[i][SIZE-i-1];
        }
        return sum_main + sum_second; 
    }
};