//  https://leetcode.com/explore/interview/card/amazon/77/linked-list/2979/
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
    ListNode* reverseList(ListNode* head) {
        if(head == NULL)
            return head; 
        if(head->next == NULL)
            return head; 
        vector<int>temp;
        ListNode *current = head;
        while(current != NULL)
        {
            temp.push_back(current->val);
            current = current->next;
        }
        reverse(temp.begin(), temp.end());
        current = head;
        int i=0; 
        while(current!= NULL)
        {
            current->val = temp[i];
            i+=1;
            current = current->next; 
        }
        return head; 
    }
};