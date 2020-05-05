## Binary Tree

### Essentials about Binary Tree

* **Binary Tree:** Each element in the Tree Has at most a left and right child.
* **Applications:** Usually used when we store information that naturally forms a hierarchy or when we need to execute fast search operation.
* **Size**: Number of nodes in the Binary Tree. 

### Height vs Depth

During my first approach to Tree, I swapped the meaning of Height and Depth. 

![Depth vs Height BT](../images/tree-depth.png)
###### Source: Stackoverflow, the bible


### Struct of a node
```
struct node
{
    int data;
    struct node *left;
    struct node *right; 
}
```

### Check if an element exists

Before insert a new node in the BT, we need to be sure that the same element is not already stored, so we need the following function:

```
bool does_element_exists(struct node *root , int target)
{
    // BT is empty, no element to search
    if(root == NULL)
        return false;
    else
    {
        if(root->data == x) return true; 
        else if(x < node->data)
            return does_element_exists(root->left, x);
        return does_element_exists(root->right, x);
    }
}
```

### Create new node
```
struct node *NewNode(int data)
{
    struct node *root = new(struct node);
    node->data = data;
    node->left = node->right = NULL;
}
```

### Insert

Rember that in BT is not allowed to have duplicate elements, for this reason for every insert operation, we need to check first if element exists using the [exists checker function](#Check-if-an-element-exists) and the [create node function](#Create-new-node)




### Traversal
A traversal is a process that visits all the nodes in the tree. Since a tree is a nonlinear data structure, there is no unique traversal. We will consider several traversal algorithms with we group in the following two kinds:

* depth-first traversal
* breadth-first traversal


There are Three types of depth -First-Traversals:

1. Inorder (Left, Root, Right) : 4 2 5 1 3
```
void inorder(struct Node *root)
{
    if(root == NULL)
        return; 
    search(root->left);
    cout <<root->data << " ";
    search(root->right);
}
```
2. Preorder (Root, Left, Right) : 1 2 4 5 3
```
void preoder(struct Node *root)
{
    if(root == NULL)
        return; 
    cout <<root->data << " ";
    search(root->left);
    search(root->right);
}

```
3. Postorder (Left, Right, Root) : 4 5 2 3 1
void inorder(struct Node *root)
{
    if(root == NULL)
        return; 
    search(root->left);
    search(root->right);
    cout <<root->data << " ";
}

There is only one kind of breadth-first-traversal, the Breadth First or Level Order Traversal : 1 2 3 4 5


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

