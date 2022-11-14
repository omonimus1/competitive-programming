# https://leetcode.com/problems/count-odd-numbers-in-an-interval-range/submissions/843465020/?envType=study-plan&id=programming-skills-i
class Solution(object):
    def countOdds(self, low, high):
        """
        :type low: int
        :type high: int
        :rtype: int
        """
        if low % 2 == 0:
            return (high-low+1)//2
        return (high-low)//2 + 1