// https://leetcode.com/problems/counting-bits/submissions/
class Solution {
public:
    
    int number_of_set_bit(int n)
    {
        int solution = 0; 
        while(n > 0)
        {
            if (n%2) solution++;
            n/=2;
        }
        return solution; 
    }
    
    vector<int> countBits(int num) {
        vector<int>s;
        for(int i =0; i <= num; i++)
        {
            s.push_back(number_of_set_bit(i));
        }
        return s;
    }
};