// https://app.codesignal.com/arcade/code-arcade/intro-gates/DdNKFA3XCX6XN7bNz
/*
n children have got m pieces of candy. They want to eat as much candy as they can, but each child must eat exactly the same amount of candy as any other child. Determine how many pieces of candy will be eaten by all the children together. Individual pieces of candy cannot be split.

Example

For n = 3 and m = 10, the output should be
solution(n, m) = 9.
*/
int solution(int n, int m) {
    return ceil(m/n)*n;
}
