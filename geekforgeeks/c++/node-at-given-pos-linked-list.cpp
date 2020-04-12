// Get the data stored in a specific linked list 
int GetNth(struct node* head, int index){
    int counter  = 0; 
    node *list_element = head; 
    while(list_element != NULL)
    {
        if(counter == index)
            return list_element -> data; 
        list_element = list_element -> next;
        counter++;  
    }
}