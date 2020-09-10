// https://leetcode.com/explore/learn/card/data-structure-tree/134/traverse-a-tree/931/
class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root == NULL) 
            return 0;
        
        int left_max = maxDepth(root->left);
        int right_max = maxDepth(root->right);
        return max(left_max, right_max)+1;
    }
};