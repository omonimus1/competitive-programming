// https://leetcode.com/explore/interview/card/amazon/77/linked-list/513/
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
    ListNode* newNode(int data) 
    { 
        ListNode* new_node = new ListNode(); 
        new_node->val = data; 
        new_node->next = NULL; 
        return new_node; 
    };
    
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        // Store numbers in string
        // Reverse string
        // Convert to integer: sum them and then put the in the result; 
        ListNode * current_1 = l1, *current_2 = l2;
        int number1, number2;
        
        int carry =0, current_sum, last_digit;
        ListNode *result = NULL, *prev, *temp;
        while(current_1 != NULL || current_2 != NULL)
        {
            
            if(current_1 == NULL)
                number1 = 0;
            else
                number1 = current_1->val;
            
            if(current_2 == NULL)
                number2 = 0;
            else
                number2 = current_2->val;
            
            current_sum = number1 + number2 + carry;
            carry = (current_sum > 9) ? 1 : 0;
            
            temp = newNode(current_sum%10); 
            
            if(result == NULL)
                result  = temp;
            else
            {
                prev->next = temp; 
            }
            
            // Set prev for next insertion
            prev = temp;
            if(current_1 != NULL)
                    current_1 = current_1->next;
            if(current_2 != NULL)
                    current_2 = current_2->next;
            
        }
        if(carry >0)
        {
            ListNode *last =newNode(carry);
            temp->next = last;
        }
            
        
        return result; 
    }
};