//https://practice.geeksforgeeks.org/problems/identical-linked-lists/1

/*
 This function returs true if both linked lists are identical else return false, knowing that
 the both linkedlist ARE NOT empty. 
*/
bool areIdentical(struct Node *head1, struct Node *head2)
{
    Node *node1 = head1; 
    Node *node2 = head2; 
    while(node1 != NULL && node2 != NULL)
    {
        if(node1-> data != node2->data)
            return false; 
        node1 = node1->next; 
        node2 = node2->next; 
        
    }
    return true; 
}