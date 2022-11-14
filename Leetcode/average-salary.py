# https://leetcode.com/problems/average-salary-excluding-the-minimum-and-maximum-salary/description/?envType=study-plan&id=programming-skills-i
class Solution:
    def average(self, salary: List[int]) -> float:
	    return ((sum(salary)- max(salary) - min(salary))/ (len(salary)-2) )