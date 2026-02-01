# https://leetcode.com/problems/remove-element/?envType=problem-list-v2&envId=array&
# Given an integer array nums and an integer val, remove all occurrences of val in nums in-place. The order of the elements may be changed. Then return the number of elements in nums which are not equal to val.

# Consider the number of elements in nums which are not equal to val be k, to get accepted, you need to do the following things:

# Change the array nums such that the first k elements of nums contain the elements which are not equal to val. The remaining elements of nums are not important as well as the size of nums.
# Return k.
# Input: nums = [0,1,2,2,3,0,4,2], val = 2
# Output: 5, nums = [0,1,4,0,3,_,_,_]
class Solution:
    def removeElement(self, nums: List[int], val: int) -> int:
        lenght = len(nums)
        writer = 0 # second pointer to the last index where to write a value != val

        for reader in range(0, lenght):
            if nums[reader] != val:
                nums[writer] = nums[reader]
                writer+=1

        return writer

        
