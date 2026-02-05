# https://leetcode.com/problems/first-letter-to-appear-twice/?envType=problem-list-v2&envId=hash-table
class Solution:
    def repeatedCharacter(self, s: str) -> str:
        frequency = {}
        for character in s:
            print(str(character))
            if character not in frequency:
                # print('added: ', str(character))
                frequency[character] = 0
            else:
                frequency[character] = frequency[character]+1
                print('increased: ', str(frequency[character]))
                return character
        return '-1'
