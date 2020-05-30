## Dynamic Programming 

1. Used to solve optimization problems 
2. Breaks down complex problem into simpler subproblems
3. Store all the results of subproblems so that we will avoid to compute the same data from the once. (it's said that we store intermiadate results). 


D.P. is used to find optimal solutions. If a solution do not exists, D.P. will not be useful. 

Keyword: longest and shortest (substring /path), finobacci series.

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

* [Video-tutorial on Dynamic Programming](https://www.youtube.com/watch?v=lVR2u9lsxl8&list=PLdo5W4Nhv31aBrJE1WS4MR9LRfbmZrAQu)

## Coin Change Problem

Given:
* Coins = { 1,2, 5, 10, 20, 50, 100} 
* Given amount of money: w = 5;

Find how many ways I can give the same amount using different numbers and types of notes.



