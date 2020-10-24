// https://leetcode.com/problems/find-largest-value-in-each-tree-row/submissions/
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> largestValues(TreeNode* root) {
         
        vector<int>solution; 
        if(root == NULL)
            return solution; 
        
        int smallest, len;
        queue<TreeNode*>q;
        q.push(root);
        while(! q.empty())
        {
            len = q.size();

            smallest = INT_MIN; 
            while(len--)
            {
                TreeNode * temp = q.front();
                q.pop();
                if(temp->val > smallest)
                    smallest = temp->val; 
                if(temp-> left != NULL)
                    q.push(temp->left); 
                if(temp->right != NULL)
                    q.push(temp->right);
            }
            solution.push_back(smallest);
                    
        }
    
        return solution; 
    }
};