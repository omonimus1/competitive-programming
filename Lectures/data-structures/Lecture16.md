## Dynamic Programming 

Dynamic algorithm approach to solve complex problems easily and save time and number of comparisons by storing the results of past computations. 
It is an optimization over recursion. 

1. Used to solve optimization problems 
2. Breaks down complex problem into simpler subproblems
3. Store all the results of subproblems so that we will avoid to compute the same data from the once. (it's said that we store intermiadate results). 

## Fibonacci Series example

* Every number is calculated a sthe sum of the two previuos numbers.
``` Fibonacci Series example: 0 1 1 2 3 5 8```
```
int fib(int n)
{
    if(n < 0)
        break;
    if(n == 0)
        return 0;
    if(n == 1)
        return 1; 
    sum = fib(n-1)+fib(n-2);
    return su; 
}
```

## Recursive finder of the N-th number Fibonacci number
```
// Exponential
int fib(int number)
{
    if(number <=1 )
        return number;

    return fib(number-1) + fib(number-2);
}
```

There are two ways to implement dynamic programming:
* Memoization 
* 

## main Applications of dynamic programming
1. Bellmasn Ford Algortim
2. LCS: longest common subsequence
3. Resource allocation
4. Floyd washall algoeithm

## Memoization

A memoized program for a problem is similar to the recursive verion with a small modification that it looks into a loopup table before computing solutions. 
```
#define MAX 100 
int lookup[MAX];


void set_array()
{
    for(int i =0; i < MAX; i++)
    loopup[i]= -1;
}


int fib(int number)
{
    if(lookup[number] == -1)
    {
        if(number <=1)
            lookup[number] = number;
        else
            lookup[n] = fib(number-1) + fib(number+2);
    }
     return lookup[number]; 
}
```

## Tabulation

A tabulated program for a given problem builds a table in bottom up fashion and returns the last entry from table. 

```
int fib(int number)
{
    int f[number+1];
    int i;
    f[0] = 0;   f[1] = 1; 
    
    for (i = 2; i <= number; i++)
        f[i] = f[i-1] + f[i-2];

    return f[number];
}
```
* [Video-tutorial on Dynamic Programming](https://www.youtube.com/watch?v=lVR2u9lsxl8&list=PLdo5W4Nhv31aBrJE1WS4MR9LRfbmZrAQu)

## LCS Longest common subsequence

```
// Tabulation approach
// m : size of s1
// n : size of s2
int lcs(string s1, strig s2, int m, int n)
{
    if( m==0  n ==0)
        return 0;

    if(s1[m-1] == s2[n-1])
        return 1 + lcs(s1, s2, m-1, n-1);
    
    else
        max (lcs(s1, s2, m-1m n), lcs(s1, s2, m, n-1));
}
```

```
// memoizatrion approach
// Time complexity: O(m*n)
// 
int lookup[m+1][n+1];

// set lookup to -1;
void set()
{
    for(int i =0; i <= m; i++)
    {
        for(int j =0; j <= n; j++)
            lookup[i][j] = -1;
    }
}

int lcs(string s1, string2, int m, int n)
{
    if(lookup[m][n] != -1)
        return lookup[m][n];


    if(m==0 || n ==0 )
        lookup[m][n] = 0;
    
    else
    {
        if(s[m-1] == s2[n-1])
            lookup[m][n] = 1+ lcs(s1, s2, m-1, n-1);
        else
            lookup = max(lcs(s1, s2, m-1, n) , lcs(s1, s2, m, n-1));
    }
    return lookup[m][n];
}

```

## Coin Change Problem

Given:
* Coins = { 1,2, 5, 10, 20, 50, 100} 
* Given amount of money: w = 5;

Find how many ways I can give the same amount using different numbers and types of notes.



