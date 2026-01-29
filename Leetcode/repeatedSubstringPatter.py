# https://leetcode.com/problems/repeated-substring-pattern/
class Solution:
    def repeatedSubstringPattern(self, s: str) -> bool:
        size_of_string = len(s)
        for index in range(1, size_of_string):
            # print('index', index)
            sub_string = s[0:index]
            # print('sub_string', sub_string)
            string_multiplier = int(size_of_string / len(sub_string))
            built_string_combination =  sub_string*string_multiplier
            # print('combined substring',built_string_combination)
            if built_string_combination == s:
                return True
        return False



        
