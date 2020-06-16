//  https://leetcode.com/problems/convert-binary-number-in-a-linked-list-to-integer/submissions/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int numberOfNodes(ListNode* head)
    {
        if(head == NULL)
            return 0;
        int counter = 0;
        while(head != NULL)
        {
            counter++;
            head = head->next;
        }
        return counter;
    }
    
    int getDecimalValue(ListNode* head) {
        if(head== NULL)
            return 0;
        if(head->val == 1 && head->next == NULL)
            return 1;
        if(head->val== 0 && head->next == NULL)
            return 0;
       
        ListNode *current = head;
        int c =numberOfNodes(current);
        
        c-=1;
        current = head;
        
        //int power = 0;
        int result = 0;
        while(current != NULL && c >= 0)
        {
            if(current->val == 1)
            {
                result += pow(2, c);
            }
            c--;
            current = current->next;
        }
        return result; 
    }
};