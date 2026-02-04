# https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/description/?envType=problem-list-v2&envId=two-pointers&
class Solution:
    def twoSum(self, numbers: List[int], target: int) -> List[int]:
        # orted in non-decreasing order
        # two numebrs such that tthey add up to a specific target 
        # constant space 
        # 1 indexed array.
        # Return the indices of the two numbers, index1 and index2, added by one as an integer array [index1, index2] 
        # 1 solution only 
        low = 0
        high = len(numbers)-1

        while low < high:
            print('nums[low] = ', str(numbers[low]), ' nums[high]', str(numbers[high]))
            if numbers[low]+numbers[high] == target:
                return [low+1, high+1]
            elif numbers[low]+numbers[high] > target:
                high -=1
            else:
                low+=1
        return []
        
