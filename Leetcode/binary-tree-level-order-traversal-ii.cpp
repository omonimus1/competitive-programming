// https://leetcode.com/problems/binary-tree-level-order-traversal-ii/submissions/
class Solution {
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> solution;
        
        if(root == NULL)
            return solution; 

        queue<TreeNode*> q;
        q.push(root);
        
        TreeNode *node;
        
        while(!q.empty())
        {
            vector<int>level;
            int size = q.size();
            
            while(size--)
            {
                node = q.front();
                q.pop();
                level.push_back(node-> val);
                
                if(node->left != NULL)  q.push(node->left);
                if(node->right != NULL) q.push(node->right);
            }
            
            solution.push_back(level);
        }
        
        reverse(solution.begin(), solution.end());
        return solution; 
    }
};