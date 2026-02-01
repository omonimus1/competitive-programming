# https://leetcode.com/problems/plus-one/?envType=problem-list-v2&envId=array&
class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        string_number = ""
        for digit in digits:
            string_number += str(digit)
        print(string_number)

        # convert string to number and sum in, then, back to string
        string_number = str(int(string_number) +1)
        # check string number and content post addition
        print(type(string_number), string_number)
        size_of_original_list = len(digits)
        for index in range(0, len(string_number)):
            if size_of_original_list == 0:
                digits.append(int(string_number[index]))
            else:
                digits[index] = int(string_number[index])
            size_of_original_list-=1
        return digits
