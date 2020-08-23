//    https://leetcode.com/problems/average-salary-excluding-the-minimum-and-maximum-salary/submissions/
class Solution {
public:
    double average(vector<int>& salary) {
        int len = salary.size();
        sort(salary.begin(), salary.end());
        int sum = 0; 
        for(int i =1; i < len-1; i++)
            sum += salary[i];
        return (double)sum/(len-2);
    }
};