// https://practice.geeksforgeeks.org/problems/nth-node-from-end-of-linked-list/1

// Return the size of the list
int get_list_size(Node *head)
{
    Node *list_element = head;
    if(list_element == NULL)
        return 0;
    unsigned long int counter = 0; 
    while(list_element != NULL)
    {
        counter++;
        list_element = list_element ->next; 
    }
    return counter; 
}


int getNthFromLast(Node *head, int n)
{
    Node *list_element = head; 
    if(list_element == NULL)
        return -1; 
    unsigned long int list_size = get_list_size(list_element);
    if(n > list_size)
        return -1;
    unsigned long int position = 0;
    // Set the n-th node from the end
    list_size -= n;
    while(list_element != NULL)
    {
        
        if(position == list_size)
            return list_element->data;
        position++;
        list_element = list_element->next; 
    }
}