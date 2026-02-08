# https://leetcode.com/problems/merge-strings-alternately/description/?envType=company&envId=microsoft&favoriteSlug=microsoft-thirty-days
# You are given two strings word1 and word2. 
# Merge the strings by adding letters in alternating order, starting with word1. If a string is longer than the other, append the additional 
# letters onto the end of the merged string.
class Solution:
    def mergeAlternately(self, word1: str, word2: str) -> str:
        result = ""
        size_word_1 = len(word1)
        size_word_2 = len(word2)
        for index in range(0, size_word_1):
            result+= word1[index]
            if index < size_word_2:
                result += word2[index]
        
        # check if there is any word2 character left.
        if size_word_2 > size_word_1:
            print(word2[size_word_1: len(word2)])
            result += word2[size_word_1: len(word2)]

        return result
