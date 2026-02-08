# 1876. Substrings of Size Three with Distinct Characters
# https://leetcode.com/problems/substrings-of-size-three-with-distinct-characters/description/?envType=problem-list-v2&envId=sliding-window
# A string is good if there are no repeated characters.
# Given a string s​​​​​, return the number of good substrings of length three in s​​​​​​.

class Solution:
    def countGoodSubstrings(self, s: str) -> int:
        # leght 3
        # good string => The sub string (window slicing) os size 3, has all unique characters
        # "xyzzaz"
        #  012345
        # 012
        # 123
        # 234
        # 345
        k_size = 3
        result = 0
        for index in range(len(s) - 2): # generate the substring
            substring = s[index:index+k_size]
            print(substring)
            string_set = set()
            for character in substring:
                string_set.add(character)
            if len(string_set) == len(substring):
                result+=1
        return result




        
