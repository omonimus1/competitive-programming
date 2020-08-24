// https://leetcode.com/explore/interview/card/top-interview-questions-easy/102/math/743/
class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string>solution;
        for(int i = 1; i<=n; i++)
        {
            if(i%3 ==0 && i%5 ==0)
            {
                solution.push_back("FizzBuzz");
                continue;
            }    
            if(i%3 == 0)
                solution.push_back("Fizz");
            else if(i%5 == 0)
                solution.push_back("Buzz");
            else
                solution.push_back(to_string(i));
                
        }
        return solution; 
    }
};