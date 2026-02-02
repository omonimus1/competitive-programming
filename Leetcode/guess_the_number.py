https://leetcode.com/problems/guess-number-higher-or-lower/

# The guess API is already defined for you.
# @param num, your guess
# @return -1 if num is higher than the picked number
#          1 if num is lower than the picked number
#          otherwise return 0
# def guess(num: int) -> int:

class Solution:
    def guessNumber(self, n: int) -> int:
        # the one below times out - is a binary search.
        # while guess(n) != 0:
        #     result = guess(n)
        #     if result == 1:
        #         n+=1
        #     elif result == -1:
        #         n-=1
        #     else: 
        #         return n
        # return n
        left = 1 
        right = n 
        while left<right: 
            mid = (left+right)//2 
            if guess(mid)==0: 
                return mid 
            elif guess(mid)==-1: 
                right = mid - 1 
            else: left = mid+1 
        return left
