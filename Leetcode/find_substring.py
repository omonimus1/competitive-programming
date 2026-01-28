# https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/?envType=problem-list-v2&envId=string&
class Solution:
    def strStr(self, haystack: str, needle: str) -> int:
        # result = haystack.index(needle, 0, len(haystack))
        # return haystack.find(needle) # reutrn -1 if not found, otherwise, index of first instance.
        # without find() method - builin method;    
        # ---------------
        if needle == haystack:
            return 0 # return 0, as fist index because the strings are the same.
        lenght_of_sub_string = len(needle)
        lenght_of_haystack = len(haystack)

        if lenght_of_haystack < lenght_of_sub_string:
            return -1 # it cannot be a sub string, is smaller.

        for index in range(0, lenght_of_haystack-lenght_of_sub_string):
            end_target = index+lenght_of_sub_string
            print('end_target', end_target, ' index', index)
            substring = haystack
            print(substring[index:end_target]) # python slicing string[start : stop : step]

            print('checking the midle')
            if substring[index:end_target] == needle:
                print('result found', index)
                return index
        
        print('checking last')
        if haystack[lenght_of_haystack-lenght_of_sub_string: lenght_of_haystack] == needle:
            return lenght_of_haystack-lenght_of_sub_string
        return -1




