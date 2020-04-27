
// https://practice.geeksforgeeks.org/problems/finding-middle-element-in-a-linked-list/1

// Retunrns the number of nodes in the linked list
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

int getMiddle(Node *head)
{
   Node *list_element = head; 
   // If the list is empty, return -1 because there is not middle element
   if(list_element == NULL)
        return -1; 
   unsigned long int position = 0;
   unsigned long int list_size = get_list_size(list_element);
    list_size /= 2;
    list_size++;
    // Set the pointer to the linked list to the 1rst node
    list_element = head; 
    while(list_element != NULL)
    {
        position++;
        if(position == list_size)
            return list_element ->data;
        list_element = list_element ->next; 
    }
}