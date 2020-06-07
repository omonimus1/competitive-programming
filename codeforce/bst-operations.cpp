// https://www.codechef.com/problems/BSTOPS
#include <iostream>
using namespace std;

struct node 
{ 
    int data; 
    struct node *left, *right; 
}; 
  
// A utility function to create a new BST node 
struct node *newNode(int item) 
{ 
    struct node *temp = new node; 
    temp->data = item; 
    temp->left = temp->right = NULL; 
    return temp; 
};


struct node * insert(struct node *root, int element)
{
    if(root == NULL)
        return newNode(element);
    if(root->data > element)
        insert(root->left, element);
    else
        insert(root->right, element); 
    return root;
}


bool exists(struct node *root, int element)
{
    if (root == NULL)
        return false;
    if(root->data == element)
        return true;
    else if(root->data > element)
        return exists(root->left, element);
    return exists(root->right, element);
}


/* Given a non-empty binary search tree, return the node with minimum 
key value found in that tree. Note that the entire tree does not 
need to be searched. */
struct node * minValueNode(struct node* node) 
{ 
    struct node* current = node; 
  
    /* loop down to find the leftmost leaf */
    while (current && current->left != NULL) 
        current = current->left; 
  
    return current; 
} 

struct node* remove(struct node *root, int element)
{
    // Case 1: the BST is empty
    if(root == NULL) return root;

    if(root->data > element)
        root->left = remove(root->left, element);
    else if( root->data  < element)
        root->right = remove(root->right, element);

    // We are in the node to remove  
    else
    {
        // Case 1: One of the childre is NULL
        if(root->left == NULL)
        {
            struct node *temp = root->right;
            free(root);
            return temp;
        }
        else if(root->right == NULL)
        {
            struct node *temp = root->left;
            free(root);
            return temp;
        }

        // Case 2: The node has two children
           // node with two children: Get the inorder successor (smallest 
        // in the right subtree) 
        struct node* temp = minValueNode(root->right); 
  
        // Copy the inorder successor's content to this node 
        root->data = temp->data; 
  
        // Delete the inorder successor 
        root->right = remove(root->right, temp->data); 
    } 
    return root; 
    
}

int main()
{
    struct node *root = NULL; 
    int test, number;
    char command;  
    while(test--)
    {
        cin >> command >> number; 
        if(command == 'i')
        {
            // Check if the element is not already present
            if(!exists(root, number))
            {
                cout<<number<<endl;
                insert(root, number);
            }
                
        }
        // Delete command
        else if(command = 'd')
        {
            if(exists(root, number) )
            {
                cout << number<<endl;
                remove(root, number);
            }         
        }
    }
    return 0;
}