# https://leetcode.com/problems/smallest-missing-multiple-of-k/description/?envType=problem-list-v2&envId=hash-table
class Solution:
    def missingMultiple(self, nums: List[int], k: int) -> int:
        counter = 1 # start from zero 
        while True:
            if counter * k not in nums: # 1 *K, 2*k, 3*k, 4*k, 5*k, 6*k, 7*k etc...
                return counter * k
            counter+=1
