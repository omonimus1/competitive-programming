// https://leetcode.com/explore/learn/card/data-structure-tree/134/traverse-a-tree/930/                                                                                                                                                                                                                                                                                                                                                                                             
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
    vector<int>s;
    void postOrder(TreeNode *root)
    {
        if(root  == NULL)
            return;
        postOrder(root->left);
        postOrder(root->right);
        s.push_back(root->val);

    }
    
    vector<int> postorderTraversal(TreeNode* root) {
        postOrder(root);
        return s; 
    }
};