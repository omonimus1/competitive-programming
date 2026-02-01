# https://leetcode.com/problems/linked-list-frequency/?envType=problem-list-v2&envId=linked-list
# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def frequenciesOfElements(self, head: Optional[ListNode]) -> Optional[ListNode]:
        hashmap = {} # dicitionary to store frequency
        while head is not None:
            if head.val not in hashmap:
                hashmap[head.val] = 1
            else:
                hashmap[head.val] += 1
            head = head.next
        
        print(hashmap)

        new_head_result = ListNode(0, None) # create NEW linkedin for to store the frequency of each element
        result = new_head_result
        number_of_elements_left = len(hashmap) # number of elements in the hashmap.
        for number in hashmap.values():
            print(number)
            new_head_result.val = number
            new_head_result.next = None
            number_of_elements_left -=1
            if number_of_elements_left >=1: # avoid to add an extra NODE at the end of the linkedin list result
                next_node = ListNode(0, None)
                new_head_result.next = next_node
                new_head_result = new_head_result.next
                del(next_node)
        return result # head of the results
