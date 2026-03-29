# https://leetcode.com/problems/count-odd-numbers-in-an-interval-range/description/?envType=study-plan-v2&envId=programming-skills
class Solution:
    def countOdds(self, low: int, high: int) -> int:
        if low % 2 != 0:
            low -=1
        if high % 2 != 0:
            high +=1
        return (high // 2) - (low // 2)

        # 3 - 7 = 3, 5, 7
        # 2 % 2 = 1
        # 8 % 2 = 4
        
        # 8 - 12 = 9, 11
        # 4 - 11 = 5, 7, 9, 11
        
        # 4 % 2 =2
        # 12 % 2 = 6
        
        # 9 - 20 = 9, 11, 13, 15, 17, 19
        # 8 -2 = 4
        # 20 - 10 = 10
        # 10 - 4 = 6
