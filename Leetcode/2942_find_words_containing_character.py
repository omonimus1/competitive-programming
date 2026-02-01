# https://leetcode.com/problems/find-words-containing-character/?envType=problem-list-v2&envId=string
class Solution:
    def findWordsContaining(self, words: List[str], x: str) -> List[int]:
        results = []
        for index in range(0, len(words)):
            print(words[index])
            if x in words[index]:
                results.append(index)
        return results
