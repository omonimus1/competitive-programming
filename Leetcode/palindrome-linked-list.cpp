// https://leetcode.com/problems/palindrome-linked-list/
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
bool isStringPalindrome(vector<string> list_content)
{
    if(list_content.size() <= 1)
        return true; 
    if(list_content.size() == 2)
    {
        if(list_content[0] == list_content[1])
            return true;
        return false; 
        
    }
    int end_point = list_content.size()-1;
    for(int i =0; i< list_content.size()/2; i++)
    {
        if(list_content[i] != list_content[end_point])
            return false;
        end_point--;
    }
    return true; 
}

bool isPalindrome(ListNode *head)
{
    if(head == NULL)
        return true;
    vector<string> solution;
    ListNode * current = head;
    while(current != NULL)
    {
        solution.push_back(to_string(current->val));
        current = current -> next; 
    }
    return isStringPalindrome(solution);
}
     
};