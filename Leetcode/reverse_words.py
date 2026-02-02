# https://leetcode.com/problems/reverse-words-in-a-string/?envType=problem-list-v2&envId=string&
class Solution:
    def reverseWords(self, s: str) -> str:
        words = list(s.split(' '))
        print(words)
        print('reversing')
        words = words[::-1] 
        print(words) # reversed string
        # stripping all each characters and a string of the words in reverse order concatenated by a single space.
        # the last string must never have the extra white space strings.
        result = ""
        number_of_worlds_split = len(words)
        for index in range(0, number_of_worlds_split):
            if words[index] == "":
                continue
            else:
                # we need to add a new word and space in the string
                result += words[index]
                result += ' '
        # delete last whitespace in the final string.
        result = result[0:len(result)-1:1] # slice = string[start : stop : step]
        return result



