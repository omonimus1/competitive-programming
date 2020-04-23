// https://practice.geeksforgeeks.org/problems/minimum-element-in-bst/1
int minValue(Node* root)
{
    // Code her
    Node *current = root;  
      
    /* loop down to find the leftmost leaf */
    while (current->left != NULL)  
    {  
        current = current->left;  
    }  
    return(current->data);  
}