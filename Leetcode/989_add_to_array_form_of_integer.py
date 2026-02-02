# https://leetcode.com/problems/add-to-array-form-of-integer/description/
import sys
sys.set_int_max_str_digits(10000000)  # increase number of characters of a string where we can convert to integer
# otherwise it will fail.
class Solution:
    def addToArrayForm(self, num: List[int], k: int) -> List[int]:
        value = ""
        for digit in num:
            value += str(digit)
        
        result_of_sum = int(value) +k
        print(type(result_of_sum), " - ", result_of_sum)

        result = [] 
        for digit in str(result_of_sum):
            result.append(int(digit))
        return result
