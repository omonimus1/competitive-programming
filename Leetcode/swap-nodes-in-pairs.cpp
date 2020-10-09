// https://leetcode.com/problems/swap-nodes-in-pairs/submissions/
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
    ListNode* swapPairs(ListNode* head) {
        if(head == NULL || head->next == NULL)
            return head; 
        
        ListNode *current = head;
        while(current != NULL && current->next != NULL )
        {
            swap(current->val, current->next->val);
            current = current->next->next;
        }
        return head;
    }
};