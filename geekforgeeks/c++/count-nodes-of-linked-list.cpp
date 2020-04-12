//https://practice.geeksforgeeks.org/problems/count-nodes-of-linked-list/1
int getCount(struct Node* head){
    Node * current_node = head; 
    if(current_node == NULL)
        return 0; 
    else
    {
        int counter=0; 
        while(current_node != NULL)
        {
            counter++;
            current_node = current_node -> next; 
        }
        return counter;
    }
}