'''
Author: Davide Pollicino
Date: 05/02/2020
Summary: Console application that stores different numbers in a BST (Binary Search Tree) and print the BST in according 
         with the inorder, preorder and postOrder algorithms. 
'''

class Node: 
    def __init__(self, key):
        self.left = None
        self.right = None
        self.val = key


# A utility function to insert a new node with the given key 
def insert(root,node): 
    if root is None: 
        root = node 
    else: 
        if root.val < node.val: 
            if root.right is None: 
                root.right = node 
            else: 
                insert(root.right, node) 
        else: 
            if root.left is None: 
                root.left = node 
            else: 
                insert(root.left, node) 


# Travers our BST using the inorder algorithm 
def inorder(root): 
    if root: 
        inorder(root.left) 
        print(root.val) 
        inorder(root.right) 


# Travers our BST using the preOrder algorithm 
def preoder(root):
    if root: 
        print(root.val)
        preoder(root.left)
        preoder(root.right)

# Travers our BST using the postOrder algorithm 
def postorder(root):
    if root: 
        postorder(root.left)
        postorder(root.right)
        print(root.val)


# drive code for testing purposes 
r = Node(50) 
insert(r,Node(15)) 
insert(r,Node(34)) 
insert(r,Node(56)) 
insert(r,Node(32)) 
insert(r,Node(11)) 
insert(r,Node(99)) 
# Print inoder traversal of the BST
print('Inorder: ') 
inorder(r)
print('Postorder: ')
postorder(r)
print('Preorder: ')
preoder(r)
