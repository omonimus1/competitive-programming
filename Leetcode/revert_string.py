# https://leetcode.com/problems/reverse-string/
class Solution:
    def reverseString(self, s: List[str]) -> None:
        """
        Do not return anything, modify s in-place instead.
        """
        size = len(s)
        print(size)
        left = 0
        right = size-1
        while left < right:
            temp = s[left]
            s[left] = s[right]
            s[right] = temp
            left = left +1
            right = right -1

        
