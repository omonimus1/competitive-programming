/* Should return data of middle node. If linked list is empty, then  -1*/
int getMiddle(Node *head)
{
   // Get number of elements in the linked list
    Node *e = head; 
    if(e == NULL)
        return -1;
    else
    {
        int counter = 0; 
        while(e!=NULL)
        {
            counter++;
            e = e->next;
        }
    
        // Estabish index of the element to return 
        int index = counter /2; 
    
        counter = 0;
        // Set the e at the start of the linked list
        e = head; 
        while(e!=NULL)
        {
            if(counter == index)
                return e->data;
            e = e->next;
            counter++;
        }
    }
}
