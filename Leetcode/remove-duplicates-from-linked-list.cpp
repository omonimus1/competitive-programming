// https://leetcode.com/problems/remove-duplicates-from-sorted-list/submissions/
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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *current = head;
        if(current == NULL || current->next == NULL)
                return current; 
        
        while(current!= NULL)
        {
            while(current->next != NULL && current->val == current->next->val)
            {
                ListNode *next = current->next->next;
                delete(current->next);
                current->next = next;
            }
            current = current->next;
        }
        
        return head; 
    }
};