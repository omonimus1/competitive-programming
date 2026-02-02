# sum of unique elements:
# https://leetcode.com/problems/sum-of-unique-elements/description/?envType=problem-list-v2&envId=hash-table
class Solution:
    def sumOfUnique(self, nums: List[int]) -> int:
        frequency = {}
        for number in nums:
            if number not in frequency:
                frequency[number] = 1
            else:
                frequency[number] +=1
        
        result = 0
        for key, count in frequency.items():
            if count == 1:
                result += key
        return result
