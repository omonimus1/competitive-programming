# https://leetcode.com/problems/sorting-the-sentence/description/?envType=problem-list-v2&envId=string
class Solution:
    def sortSentence(self, s: str) -> str:
        print(s)
        words = list(s.split())
        print('words', words)

        words_sorted = [""] * len(words) # it cannot be words_sorted = words, otherwise we will edit the same string.
        for word in words:
            # print(word)
            index = int(word[-1]) -1 # reduce by 1 the index value to avoid hitting out of index
            print('index: ', str(index), 'word: ', word)
            words_sorted[index] = word

        result = ""
        for word in words_sorted:
            print(word)
            print('word without last character', word[0:len(word)-1:1])
            result += word[0:len(word)-1:1]
            result += ' '
        # remove last extra whitespace 
        return result[0:len(result)-1:1]
