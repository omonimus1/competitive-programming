# https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/description/?envType=problem-list-v2&envId=array&

class Solution:
    def searchRange(self, nums: List[int], target: int) -> List[int]:
        # case 1: empty array:
        result = [-1, -1]
        if(len(nums)) == 0:
            return result

        last_index_of_the_array = len(nums)-1
        # Case1: all the arrays are just filled with the same values

        left = 0
        right = last_index_of_the_array
        first_hit_index = -1
        while left <= right:
            middle = (left + right) // 2
            if nums[middle] < target:
                left = middle + 1
            elif nums[middle] > target:
                right = middle - 1
            if nums[middle] == target:
                first_hit_index = middle
                break
        print('first hit index:', str(first_hit_index))


        if first_hit_index == -1:
            return result # target not found
        else:
            # identify the last element of the array containing the target value
            if nums[last_index_of_the_array] == target:
                result[1] = last_index_of_the_array
            else:
                highest_index = first_hit_index
                while nums[highest_index] == target and highest_index < last_index_of_the_array:
                    highest_index +=1
                    print('highest_index: ', highest_index, ' highest_index:', highest_index)
                result[1] = highest_index-1
            # find first element of the array containign this change:
            if nums[0] == target:
                result[0] = 0 
            else:
                lowest_index = first_hit_index
                while nums[lowest_index] == target and lowest_index >=0:
                    lowest_index-=1
                if lowest_index == first_hit_index:
                    result[0] = first_hit_index
                else:
                    result[0] = lowest_index + 1

            return result
        
