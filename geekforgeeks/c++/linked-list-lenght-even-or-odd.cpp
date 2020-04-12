// https://practice.geeksforgeeks.org/problems/linked-list-length-even-or-odd/1
// Function should return 0 is length is even else return 1
int isLengthEvenOrOdd(struct Node* head)
{
     int counter = 0; 
     Node *list_element = head;
     // If the Linked List has 0 elements, its lenght will always be 0 an even number; 
     if(list_element == NULL)
        return 0; 
    else
    {
        while(list_element != NULL)
        {
            counter++;
            list_element = list_element -> next; 
        }
        // If the lenght is even return 0, else return 1
        if(counter %2 == 0)
            return 0;
        else
            return 1; 
    }
}