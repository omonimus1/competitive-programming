// https://leetcode.com/problems/maximum-69-number/submissions/
class Solution {
public:
    int maximum69Number (int num) {
        string number = to_string(num);
        for(int i =0; i < number.size(); i++)
        {
            if(number[i] == '6')
            {
                number[i] = '9';
                return stoi(number);
            }
        }
        return num;
    }
};