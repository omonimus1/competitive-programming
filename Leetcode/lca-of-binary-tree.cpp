// Find Lowest Common Ancestor in a BST
// https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-search-tree/

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(p->val < root->val  && q->val < root->val)
            return lowestCommonAncestor(root->left , p, q);
        else if(p->val > root->val && q->val > root->val)
            return lowestCommonAncestor(root->right, p,q);
        return root;
            
    }
};