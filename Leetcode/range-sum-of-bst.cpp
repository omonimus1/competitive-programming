// https://leetcode.com/problems/range-sum-of-bst/submissions/
class Solution {
public:
    
    vector<int>inorder_vector;
    
    void inorder(TreeNode *root)
    {
        if(root == NULL)
            return;
        inorder(root->left);
        inorder_vector.push_back(root->val);
        inorder(root->right);
    }
    
    int rangeSumBST(TreeNode* root, int L, int R) {
        inorder(root);
        int sum=0;
        for(int i =0; i < inorder_vector.size(); i++)
        {
            if(inorder_vector[i]>= L && inorder_vector[i] <= R)
                sum += inorder_vector[i];
        }
        
        return sum; 
    }
};