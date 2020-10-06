//  https://leetcode.com/explore/interview/card/amazon/78/trees-and-graphs/894/
class Solution {
public:
    
    void callDFS(vector<vector<char>>& grid, int i, int j)
    {
        if(i <0  || i >= grid.size()  || j >= grid[i].size()  || grid[i][j] == '0')
            return; 
        
        grid[i][j] = '0';
        // Check up
        callDFS(grid, i+1, j);
        // CHECK DOWN
        callDFS(grid, i-1, j);
        // CHeck right
        callDFS(grid, i, j+1);
        // check left
        callDFS(grid, i, j-1);
    }
    
    int numIslands(vector<vector<char>>& grid) {
        int counter =0; 
        for(int i =0 ; i< grid.size(); i++)
        {
            for(int j =0;  j < grid[i].size(); j++)
            {
                if(grid[i][j] == '1')
                {
                    counter += 1;
                    callDFS(grid, i, j);
                }
            }
        }
        
        return counter; 
    }
};