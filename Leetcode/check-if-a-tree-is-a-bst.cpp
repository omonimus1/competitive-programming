//  https://leetcode.com/problems/validate-binary-search-tree/submissions/
/*
    Time complexity: O(N), because where are just traversing the tree;
    It is also optimized becuase if the root is NULL, it will not call recursively 
    the left and right substree;

    Another approach is to check if the inorder traversal is SORTED; 
    1. We iterate the tree with inorder traversal
    2. We store all the values in an array
    3. If the array is sorted, return true: false otherwise.

    
*/
class Solution {

public:

    bool IsBSTHelper(TreeNode* node, int smallest, int biggest)
    {
        if(node == NULL)
            return true; 
    
        int data = node->val;
        if(smallest != -1 && data <= smallest) return false; 
        if(biggest != -1 && data >= biggest) return false; 

        if(! IsBSTHelper(node->right, data, biggest)) return false;

        if (! IsBSTHelper(node->left, smallest, data)) return false;         
        return true;
    }
    
     bool isValidBST(TreeNode* root) {
        return IsBSTHelper(root, -1,-1);
   }
};