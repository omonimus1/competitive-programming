# https://leetcode.com/problems/intersection-of-two-arrays/?envType=problem-list-v2&envId=hash-table
class Solution:
    def intersection(self, nums1: List[int], nums2: List[int]) -> List[int]:
        result = []
        for number in nums1:
            if number in nums2 and number not in result:
                result.append(number)
        for number in nums2:
            if number in nums1 and number not in result:
                result.append(number)
        return result
