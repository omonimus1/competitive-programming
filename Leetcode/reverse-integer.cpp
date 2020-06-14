// Given a integer, reverse it:
/*
Es: x = -123  res = -321
Es: x = 450   res = 54
*/
class Solution {
public:
    int reverse(int x) {
        long res = 0;
        while (x) {
            // Add digit to an integer
            res = (res * 10) + (x % 10);
            x /= 10;
        }
        return (res < INT_MIN || res > INT_MAX) ? 0 : (int) res;
    }
};