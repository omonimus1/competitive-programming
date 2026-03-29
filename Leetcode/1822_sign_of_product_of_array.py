# https://leetcode.com/problems/sign-of-the-product-of-an-array/?envType=study-plan-v2&envId=programming-skills
class Solution:
    def arraySign(self, nums: List[int]) -> int:
        first_number = nums[0]
        for index in range(1, len(nums)):
            first_number *= nums[index]
        
        if first_number == 0:
            return 0
        elif first_number >= 1:
            return 1
        else: 
            return -1
