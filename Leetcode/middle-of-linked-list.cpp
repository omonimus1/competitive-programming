// https://leetcode.com/problems/middle-of-the-linked-list/submissions/
class Solution {
public:
    int nodesCounter(ListNode* head)
    {
        if(head == NULL)
            return 0;
        int counter = 0;
        while(head!= NULL)
        {
            counter++;
            head = head->next;
        }
        return counter;
    }
    
    ListNode* middleNode(ListNode* head) {
        if(head->next == NULL)
            return head;
        ListNode* current = head;
        int number_of_nodes = nodesCounter(current);
        
        current = head;
        number_of_nodes = (number_of_nodes/2)+1;
        
        while(current != NULL && number_of_nodes>1)
        {
            number_of_nodes--;
            current = current->next;
        }
        return current; 
    }
};