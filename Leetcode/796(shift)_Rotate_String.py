# https://leetcode.com/problems/rotate-string/description/?envType=company&envId=microsoft&favoriteSlug=microsoft-thirty-days
class Solution:
    def rotateString(self, s: str, goal: str) -> bool:
        print('s', s, ' goal:', goal)
        # example of shifts of the array
        # arr = [1, 2, 3, 4, 5]
        # k = 2
        # shifted = arr[k:] + arr[:k]
        # print(shifted)   # [3, 4, 5, 1, 2]
        k =1
        for k in range(1, len(s) + 1):
            print('= s[k:] + s[:k] -- ', s[k:], ':', s[:k])
            shifted = s[k:] + s[:k]
            if shifted == goal:
                return True
        return False
