// https://leetcode.com/problems/number-of-1-bits/submissions/
class Solution {
public:
    int hammingWeight(uint32_t n) {
        int solution =0;
        while(n >0)
        {
            if(n % 2) solution++;
            n/=2;
        }
        return solution; 
    }
};