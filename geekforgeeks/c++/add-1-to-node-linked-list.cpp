// https://practice.geeksforgeeks.org/problems/add-1-to-a-number-represented-as-linked-list/1
// Returns new head of linked List.
Node *addOne(Node *head)
{
   // Your Code here
   Node *list_element = head;
   if(list_element == NULL) 
        return list_element;
    
    else
    {
        int d; 
        while(list_element!= NULL)
        {
            d = list_element->data;
            d++;
            list_element->data = d;
            list_element = list_element ->next; 
        }
        list_element = head;
        return list_element; 
    }
}