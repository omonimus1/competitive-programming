# https://leetcode.com/problems/sum-of-elements-with-frequency-divisible-by-k/description/?envType=problem-list-v2&envId=hash-table
class Solution:
    def sumDivisibleByK(self, nums: List[int], k: int) -> int:
        frequency = {}
        for number in nums:
            if number not in frequency:
                frequency[number] = 1
            else:
                frequency[number] +=1

        result = 0
        for key, value in frequency.items():
            print('key: ', key, ' value', value)
            if value % k == 0:
                result += value * key
        return result
