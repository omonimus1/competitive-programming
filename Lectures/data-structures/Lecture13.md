## Binary Tree

In computer science, a binary tree is a tree data structure in which each node has at most two children, which are referred to as the left child and the right child.
### Essentials about Binary Tree

* **Binary Tree:** Each element in the Tree Has at most a left and right child.
* **Applications:** Usually used when we store information that naturally forms a hierarchy or when we need to execute fast search operation.
* **Size**: Number of nodes in the Binary Tree. 

```
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

```


### Insert

Rember that in BT is not allowed to have duplicate elements, for this reason for every insert operation, we need to check first if element exists using the [exists checker function](#Check-if-an-element-exists) and the [create node function](#Create-new-node)


### Traversal

* **Traversal** is a process that visits all the nodes in the tree. Since a tree is a nonlinear data structure, there is no unique traversal. We will consider several traversal algorithms with we group in the following two kinds:
1. depth-first traversal
2. breadth-first traversal


There are Three types of depth -First-Traversals:

1. Inorder (Left, Root, Right) : 4 2 5 1 3
```
void inorder(struct Node *root)
{
    if(root == NULL)
        return; 
    inorder(root->left);
    cout <<root->data << " ";
    inorder(root->right);
}
```
2. Preorder (Root, Left, Right) : 1 2 4 5 3
```
void preoder(struct Node *root)
{
    if(root == NULL)
        return; 
    cout <<root->data << " ";
    preoder(root->left);
    preoder(root->right);
}
```
3. Postorder (Left, Right, Root) : 4 5 2 3 1
```
void postorder(struct Node *root)
{
    if(root == NULL)
        return; 
    postorder(root->left);
    postorder(root->right);
    cout <<root->data << " ";
}
```
There is only one kind of breadth-first-traversal, the Breadth First or Level Order Traversal : 1 2 3 4 5

### Breath First Search

Breath first search is also used for level order traversal.


Pseudo code of the algorithm:
/*Function to print level order traversal of tree*/
printLevelorder(tree)
for d = 1 to height(tree)
   printGivenLevel(tree, d);

/*Function to print all nodes at a given level*/
printGivenLevel(tree, level)
if tree is NULL then return;
if level is 1, then
    print(tree->data);
else if level greater than 1, then
    printGivenLevel(tree->left, level-1);
    printGivenLevel(tree->right, level-1);

```
// Recursive CPP program for level 
// order traversal of Binary Tree  
#include <bits/stdc++.h> 
using namespace std; 
  
class node  
{  
    public: 
    int data;  
    node* left, *right;  
};  
  
void printGivenLevel(node* root, int level);  
int height(node* node);  
node* newNode(int data);  
  
/* Function to print level  
order traversal a tree*/
void printLevelOrder(node* root)  
{  
    int h = height(root);  
    int i;  
    for (i = 1; i <= h; i++)  
        printGivenLevel(root, i);  
}  
  
/* Print nodes at a given level */
void printGivenLevel(node* root, int level)  
{  
    if (root == NULL)  
        return;  
    if (level == 1)  
        cout << root->data << " ";  
    // We are not in the root node of the BST.
    else if (level > 1)  
    {  
        printGivenLevel(root->left, level-1);  
        printGivenLevel(root->right, level-1);  
    }  
}  
  
/* Compute the "height" of a tree -- the number of  
    nodes along the longest path from the root node  
    down to the farthest leaf node.*/
int height(node* node)  
{  
    if (node == NULL)  
        return 0;  
    else
    {  
        /* compute the height of each subtree */
        int lheight = height(node->left);  
        int rheight = height(node->right);  
  
        /* use the larger one */
        if (lheight > rheight)  
            return(lheight + 1);  
        else return(rheight + 1);  
    }  
}  
  
/* Helper function that allocates  
a new node with the given data and 
NULL left and right pointers. */
node* newNode(int data)  
{  
    node* Node = new node(); 
    Node->data = data;  
    Node->left = NULL;  
    Node->right = NULL;  
  
    return(Node);  
}  
  
/* Driver code*/
int main()  
{  
    node *root = newNode(1);  
    root->left = newNode(2);  
    root->right = newNode(3);  
    root->left->left = newNode(4);  
    root->left->right = newNode(5);  
  
    cout << "Level Order traversal of binary tree is \n";  
    printLevelOrder(root);  
  
    return 0;  
}  
```

### Height vs Depth

During my first approach to Tree, I swapped the meaning of Height and Depth. 

![Depth vs Height BT](../../images/tree-depth.png)

The height of a node is the largest number of edges in a path from that node to a leaf node.
[Video Tutoral: find heaight of a BT](https://www.youtube.com/watch?v=AWIJwNf0ZQE)
```
int height(Node* root) {
    if(root == NULL)
        return -1;
    int l = height(root->left);
    int r = height(root->right);
            // Return the biggest counter
    return l > r ? l+1 : r+1; 
}
```
The height of a binary tree is the largest number of edges in a path from the root node to a leaf node. Essentially, it is the height of the root node. Note that if a tree has only one node, then that node is at the same time the root node and the only leaf node, so the height of the tree is 0. On the other hand, if the tree has no nodes, it’s height is -1.

The size of a binary tree is the total number of nodes in that tree.
[Video-Tutorial: Find size of a tree](https://www.youtube.com/watch?v=C128SsWVLkc)
The depth of a node is the number of edges in the path from the root node to that node.

The depth of a binary tree is usually used to refer to the height of the tree.

###### Source: Stackoverflow, the bible

### Max Depth

The max depth is the number of nodes along the longhest path from the root node down to the farthest leaf(external) node.

```
int maxDepth(struct node *root)
{
    if(root == NULL)
        return 0; 
    else
    {
        unsigned long int leftDepth = maxDeth(node->left);
        unsigned long int rightDepth = maxDepth(node->right);

        // Return the biggest counter
        if(leftDepth > rightDepth)
            return leftDepth+1;
        else    
            return rightDepth+1;
    }
}
```

* [Extra information: Tutorial 1](https://www.cs.cmu.edu/~adamchik/15-121/lectures/Trees/trees.html)
* [Extra information: Tutorial 2](http://cslibrary.stanford.edu/110/BinaryTrees.html)

## Print node at k distance from  root 

```
void print_level_k(node *root, int k)
{
    if(root == NULL)
        return;
    if( k == 0)
    {
        cout <<root->data<<endl;
        return;
    }
    else
    {
        print_level_k(root->left, k-1);
        print_level_k(root->right, k-1);
    }
}

```

## Count Leaves in a Binary Tree

* **Leaf node**: It has both left and right child nodes NULL;
```
int countLeaves(Node* root)
{
    Node *node = root;
    if(node == NULL)
        return 0;
    else if(node ->left == NULL && node ->right == NULL)
        return 1; 
    else
        return countLeaves(node->left) + countLeaves(node->right);
}
```


## Lowest Common Ancestor

According to the definition of LCA on Wikipedia: “The lowest common ancestor is defined between two nodes v and w as the lowest node in T that has both v and w as descendants (where we allow a node to be a descendant of itself).”

![LCA tree](../../images/lca.png)

###### Souce: Miss Deeksha Sharm - Medium


```
// return the Height of the given Binary Tree
int height(Node* root)
{
    Node *node = root;
   if(node == NULL)
    return 0;
   return 1 + max(height(node->left), height(node->right));
}
```
## Diameter of a Binary Tree
Diameter (also width): number of nodes on thelongest path between two end nodes.
The diameter of a tree T is the largest of the following quantities:
* The diameter of the left subtreee
* Diameter of right subtree
* Longest path between leaves that goes thourhg the root T (computed from the height of  a tree).
![Diameter-of-tree](../../images/diameter_of_tree.png)

```
int diameter(Node *head)
{
    if(head == NULL)
        return 0;
    else
    {
        left_height = height(root->left);
        right_height = height(root->right);

        // Get the diameter of left and right sub-trees
        left_diameter = diameter(root->left);
        right_diameter = diameter(root->right)

        return max(left_height + right_height +1, max(left_diameter, right_diameter));
    }
}
```
###### Image by Geeks for Geeks

## Left or Right view of Binary Tree


![Left View](../../media/left_view.png)
###### Left view, images: Geeks for Geeks
## Check if a tree is balanced

## Ancestors 
* [Print Ancestors of a given node](https://www.geeksforgeeks.org/print-ancestors-of-a-given-node-in-binary-tree/)
* [Lowest common Ancestor of a given binary tree](https://www.geeksforgeeks.org/print-ancestors-of-a-given-node-in-binary-tree/)

## Binary Tree (BT), convert it to a Doubly Linked List(DLL) In-Place.
Recursively look for the node with no grandchildren and both left and right child in the left sub-tree. Then store node->right in temp and make node->right=node->left. Insert temp in first node NULL on right of node by node=node->right. Repeat until it is converted to linked list.

Flatten operation: convert from BT to Linked list
Inorder printing of the BT allws to have the flatted BT elements in increasing order

```
void flatten(Node * root)
{
    if(root == NULL || root->left == NULL && root->right == NULL)
        return; 
    if(root->left != NULL)
    {
        //Move the left subtree in the right subtree
        if(root->left != NULL)
        {
            flatten(root->left);

            Node * tempraryRight = root->right;
            root->right = root->left;
            root->left = NULL;

            // Find the position to insert the new node
            Node *t = root->right; 
            while(t->right != NULL)
                t = t->right;
        
            // Insert the value
            t->right = temporaryRight;
        }
        // Call the same function for root->ight
        flatten(root->right);

    }
}
```
## Vertical traversal of Binary Tree
Traverse a Binary Tree vertically means ge the minimum and maximum horizontal distance with respect to root. 
![Vertical Print](../../media/vertical_bt.png)
###### Image provided by Geeks For Geeks
```
// min: min horizonal distance from root
// max: max horizonal distance from root
//  horizontal_distnace: horizonal distance of current from node from root
void findMinMax(Node *root, *min, *max, horizontal_distance)
{
    if(root == NULL)
        return;
    if(horizontal_distance < min) *min = horizontal_distance;
    else if( horizontal_distance > max) *max = horizontal_distance;

    findMinMax(root ->left, min, max, horizontal_distance-1);
    findMinMax(root -> right, min, max, horizontal_distance+1);
}

void printVerticalLine(Nod * root, line_number, horizontal_distance)
{
    if(root == NULL)
        return; 
    if(horizontal_distance == line_numnber)
        cout << root -> data; <<endl;
    printVerticalLine(root->left, line_number, horizontal_distance-1);
    printVerticalLine(root->right, line_number, horizontal_distance+1);
}
// The main function that prints a given binary tree in 
// vertical order
void verticalOrder(Node *root)
{
    // Get min and max distance respect to the root
    int min = 0,  max =0;
    findMinMax(root, &min, &max, 0);

    /* Iterate all possible vertical lines starting from the leftmost and print
     line by line */
     for(int line_number = min, line_number <= max; line_number++)
     {
         printVerticalLine(root, line_number, 0);
         cout <<endl;
     }
}

```

[Find distance between root and a given node](https://www.youtube.com/watch?v=pavbfn1FHrs&feature=emb_rel_end)

## Binary Indexed Tree or Fenwick tre

Binary Index Tree is repesents as an array. 
Each node of the BIT stores the sum of some element of the input array and of course, the size of the BIT si equal to the size of the input array. 

For find sum of first i elements & update value of a specific element, it takes 0(Log n).

BI Tree for an arrays arr[] has the following operations:
* update(): updates BI tree for operation arr[index] += val
* getSum(): returns sum of arr[0..index]

#### How to we create it?
1. We first initialize all values in BITree[] as 0.
2. We call update() operation for all indexes to insert values according to given array. 


## Delete node from BST

If we have 3 cases:
1. Node is a leaf node:  it does not violate any BST property if we delete it. 
2. Node has 1 child: the child node must be moved in the parent node. 
3. Node has 3 children: we need to move all the subtree.





## Practice with Binary Tree

Perfect, above you have find all the definition that you will need to know before to solve the following exercises. 
* Get the Height of a Binary Tree
* Minimum elment in BST
* Clone a Binary Tree
* Size of a Binary Tree
* Inorder, postorder, preorder traversal
* Maximum Node Level
* Remove Heal Nodes
* K distance from root
* Sum of Binary Tree
* Sum of Leaf Nodes
* Sum of right Leaf Nodes
* Count Non-leaf Nodes
* Minimum Depth of a Binary Tree
* Make a Binary Tree from Linked List
* Determine if two Trees are identical
* Perfect Binary Tree
* Vertical Sum

[More exercises](https://practice.geeksforgeeks.org/explore/?category%5B%5D=Tree&page=1)

