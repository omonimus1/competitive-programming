/*

https://app.codesignal.com/arcade/code-arcade/at-the-crossroads/sgDWKCFQHHi5D3Szj/solutions
third number
You're given three integers, a, b and c. It is guaranteed that two of these integers are equal to each other. What is the value of the third integer?

Example

For a = 2, b = 7, and c = 2, the output should be
solution(a, b, c) = 7.

The two equal numbers are a and c. The third number (b) equals 7, which is the answer.


*/

int solution(int a, int b, int c) {
    if(a == b)
        return c;
    else if(a == c)
        return b;
    else
        return a;
}
