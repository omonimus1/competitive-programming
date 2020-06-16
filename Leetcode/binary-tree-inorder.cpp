// https://leetcode.com/problems/binary-tree-inorder-traversal/submissions/
class Solution {
public:
    vector<int>s;
    void inorder(TreeNode * root)
    {
        if(root == NULL)
            return; 
        inorder(root->left);
        s.push_back(root->val);
        inorder(root->right);
    }
    
    vector<int> inorderTraversal(TreeNode* root) {
            inorder(root);
            return s;  // [1,2,3]
    }
};