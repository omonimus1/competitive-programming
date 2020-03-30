#include <stdio.h>
#include <string.h>
#include<stdlib.h>
#include <malloc.h>
#include <stdbool.h>

struct binary_tree_node
{
    struct binary_tree_node *left_child;
    struct binary_tree_node *right_child;
    int data;  
};


void insert(struct binary_tree_node **node, int num)
{
    if(*node == NULL)
    {
        *node = ( struct binary_tree_node *) malloc (sizeof(struct binary_tree_node));
        (*node) ->left_child =  NULL;
        (*node) -> right_child = NULL;
        (*node) -> data = num; 
    }
    else
    {
        {
            if(num < (*node) -> data)
            {
                insert ( &((* node ) -> left_child ) ,num );
            }
            else
            {
                insert ( &((* node ) -> right_child ) , num );
            }
            
        }
    }   
}

void traverse(struct binary_tree_node *node)
{
    if(node != NULL)
    {
        traverse(node -> left_child);
        printf("%d \t" , node ->data);
        traverse(node-> right_child);
    }
}

void search(struct binary_tree_node **root , int num , struct binary_tree_node **parent , struct binary_tree_node **found_node , int *found_status)
{
    struct binary_tree_node *temp; 
    temp =  *root;
    *found_status = false; 
    *parent = NULL;

    while(temp != NULL)
    {
        if (temp -> data == num)
        {
            *found_status = true;
            *found_node = temp; 
            return;
        }
        *parent = temp;
        if(temp -> data > num)
            temp = temp -> left_child;
        else
            temp = temp->right_child;
    }
}



int main(void)
{
    struct binary_tree_node *root; 
    int i =0; 
    int content[] = {11 , 9, 13 , 8, 10 , 12 , 14 , 15 , 7};
    for(int i=0; i<9; i++ )
    {
        insert(&root , content[i]);
    }

    traverse(root);
    printf ("\n") ;


    return 0;
}