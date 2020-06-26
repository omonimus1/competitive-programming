// https://leetcode.com/problems/binary-tree-level-order-traversal/submissions/
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> solution;
        if(root == NULL)
            return solution; 
    
        // Apply breath First search algorithm 
        
        // Create a queue and push in the root
        queue<TreeNode*>q;
        q.push(root);
        
        TreeNode *node;
        int size;
        while(!q.empty())
        {
            
            size = q.size();
            vector<int>level;
            while(size--)
            {
                node = q.front();
                q.pop();
                level.push_back(node->val);
                if(node->left != NULL) q.push(node->left);
                if(node->right != NULL) q.push(node->right);
            }
            
            solution.push_back(level);
        }
        return solution;
    }
};