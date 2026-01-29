# https://leetcode.com/problems/delete-the-middle-node-of-a-linked-list/?envType=problem-list-v2&envId=linked-list&
# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def deleteMiddle(self, head: Optional[ListNode]) -> Optional[ListNode]:
        if head is None:
            return head
        if head.next is None:
            del(head)
            return None
        original_head = head
        count_nodes = 0 # we have at least one node here
        while original_head.next is not None:
            count_nodes+=1
            original_head  = original_head.next
        print('count_nodes', count_nodes)
        stop_before_middle_position = (count_nodes // 2)
        if count_nodes % 2 == 0: # even number of indexes, so we have an odds list of elements
            stop_before_middle_position -=1
        print('stop_before_middle_position', stop_before_middle_position)
        original_head = head # reset head 

        while original_head.next is not None and stop_before_middle_position >0:
            original_head  = original_head.next
            stop_before_middle_position -=1
        print('value when we stopped', original_head.val)
        next_pointer = original_head.next.next
        del(original_head.next)
        original_head.next = next_pointer
        return head
