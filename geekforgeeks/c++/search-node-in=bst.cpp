// https://practice.geeksforgeeks.org/problems/search-a-node-in-bst/1

bool search(Node* root, int x)
{
    //Your code here
    if(root == NULL)
        return false; 
    else
    {   // Target found
        if(root->data == x)
            return true;
        else if(root->data > x)
            return search(root->left , x);
        else
           return search(root->right , x);
    }
    return false; 
}