/* 
Given an integer n, return the largest number that contains exactly n digits.
https://app.codesignal.com/arcade/code-arcade/intro-gates/SZB5XypsMokGusDhX/solutions
*/
int solution(int n) {
    string number = "";
    for(int i=0; i< n; i++){
        number += '9';
    }
    return stoi(number);
}
