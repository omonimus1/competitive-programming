# https://leetcode.com/problems/plus-one-linked-list/?envType=problem-list-v2&envId=linked-list
# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def plusOne(self, head: ListNode) -> ListNode:
        result = "" # str to store the elements of the linkedin list, number by number
        original_head = head # original reference to the head, to be returned at the end of the program.
        while head is not None: # store the integers values present in the linkedin list
            result+= str(head.val) 
            head = head.next
        print(result)
        integer_value_from_the_linked_list = int(result)+1 # calculate the integer value of the linkedin list
        print(integer_value_from_the_linked_list)
        # iterate throw each element of the string, from the first index
        # and start of the linkedin list.
        # check for the node presence of the linkedin list => if we reached the end, keep creating new nodes of the linked list.
        head = original_head
        number_of_characters = len(str(integer_value_from_the_linked_list))
        for number in str(integer_value_from_the_linked_list):
            print(type(number), number)
            print('number to add', str(number))
            number_of_characters-=1
            head.val = str(number)
            if head.next is None:
                # check if we have reached the last character before adding a '0' Node
                if number_of_characters >=1:
                    newNode = ListNode(0,None)
                    head.next = newNode
            head = head.next  # go to the next node of the linkedin list.
        return original_head
