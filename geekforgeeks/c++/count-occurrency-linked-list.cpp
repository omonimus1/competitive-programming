// Davide Pollicino - github.com/omonimus1
// 17/04/2020
// https://practice.geeksforgeeks.org/problems/occurence-of-an-integer-in-a-linked-list/1
int count(struct node* head, int search_for)
{
    if(head == NULL)
        return 0;
    else
    {        
        int counter = 0;
        while(head != NULL)
        {
            if(head->data == search_for)
                counter++;
                
            head = head->next;
        }
        return counter;
    }
    
}