// https://leetcode.com/problems/self-dividing-numbers/submissions/
class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int>solution;
        bool is_self_divising;
        int single_digit, number;
        for(int i =left; i<= right; i++)
        {
            number = i;
            is_self_divising = true; 
            while(number > 0)
            {
                single_digit = number % 10;
                number /=10;
                if(single_digit == 0 ||i % single_digit != 0 )
                {
                    is_self_divising = false;
                    break; 
                }
            }
            if(is_self_divising)
                solution.push_back(i);
                
        }
        
        return solution; 
    }
};