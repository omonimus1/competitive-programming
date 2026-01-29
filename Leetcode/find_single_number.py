# https://leetcode.com/problems/single-number/
# Find the number which is present just once, in a list full of duplicate values.
class Solution:
    def singleNumber(self, nums: List[int]) -> int:
        nums.sort()
        print(nums)
        size = len(nums)

        if size == 1:
            return nums[0]

        for index in range(0, size-1, 2):
            if nums[index] != nums[index+1]:
                return nums[index]
        return nums[size-1]
