# https://leetcode.com/problems/string-matching-in-an-array/
class Solution:
    def stringMatching(self, words: List[str]) -> List[str]:
        result = []
        for index in range(0, len(words)):
            for j in range(index, len(words)):
                if words[index] == words[j]:
                    continue
                if words[index] in words[j] and words[index] not in result:
                    result.append(words[index])
                if words[j] in words[index] and words[j] not in result:
                    result.append(words[j])
        return result
