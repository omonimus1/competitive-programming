# https://leetcode.com/problems/intersection-of-two-arrays/description/?envType=problem-list-v2&envId=array&
class Solution:
    def intersect(self, nums1: List[int], nums2: List[int]) -> List[int]:
        result = []
        frequency1 = {}
        frequency2 = {}
        for number in nums1:
            if number not in frequency1:
                frequency1[number] = 1
            else:
                frequency1[number] +=1
        for number in nums2:
            if number not in frequency2:
                frequency2[number] = 1
            else:
                frequency2[number] +=1

        for key, value in frequency1.items():
            if key in frequency2:
                # get the common number of tiems this value is present across the arrays;
                for frequency in range(0, min(frequency1[key], frequency2[key])):
                    result.append(key)
        return result
