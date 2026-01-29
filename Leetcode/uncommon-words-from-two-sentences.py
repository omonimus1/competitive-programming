# https://leetcode.com/problems/uncommon-words-from-two-sentences/?envType=problem-list-v2&envId=string

from collections import Counter
class Solution:
    def uncommonFromSentences(self, s1: str, s2: str) -> List[str]:
        sentence_1 = list(map(str, s1.split()))
        freq1 = Counter(sentence_1)

        sentence_2 = list(map(str, s2.split()))
        freq2 = Counter(sentence_2)

        uncommon = []
        for word in sentence_1:
            if freq1.get(word) == 1 and freq2.get(word, 0) == 0: # freq2.get(word, 0) == 0: means no element found
                uncommon.append(word)
        for word in sentence_2:
            if freq2.get(word) == 1 and freq1.get(word, 0) == 0:
                uncommon.append(word)

        return uncommon

