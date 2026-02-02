# https://leetcode.com/problems/second-largest-digit-in-a-string/description/?envType=problem-list-v2&envId=hash-table
class Solution:
    def secondHighest(self, s: str) -> int:
        highest = -111111111111
        second_largest = -111111111111

        for digit in s:
            # check if we have a number or not:
            if digit.isdigit():
                print(digit)
                number = int(digit)
                if number > highest:
                    second_largest = highest
                    highest = number
                if number < highest and number > second_largest:
                    second_largest = number
        if highest == second_largest:
            return -1
        if second_largest == -111111111111:
            return -1
        return second_largest
