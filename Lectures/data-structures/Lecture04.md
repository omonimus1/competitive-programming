## Math 


## Reverse a given integer
```
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

```


## Find number of digits in a number in O(1)

Rule:  ```number of digits in N = log10(N) + 1.``

* **floor()** function returns the largest possible integer value which is <= to the given argument.
Es: floor(34.5) = 33
eS: floor(-34.5) = 35
```
// C++ solutions
#include <cmath>
number_of_digits = floor(log10(N) + 1)
```

* **initial term**: first number of a arithmetic progresion
* **Common difference**: vale by which consecutive terms increases or decrease is called the common difference. 

Calculate directly nth element of the AP: 
```
// AP: {2,4,6,8,10}
/*
Suppose that we want to calculate the 5th element (10)
a1 = 2 (first element of the list)
d = 2 (constant different)
an = will be 10 (value of the 5th element)
*/
an = a1 + (n-1) * d;
```
a: first element in the AP. 
* nth term of an AP = a + (n-1)*d.
* Arithmetic Mean = Sum of all terms in the AP / Number of terms in the AP.
* Sum of ‘n’ terms of an AP = 0.5 n (first term + last term) = 0.5 n [ 2a + (n-1) d ].

## Geometric Progression

* Geomtric Progression: sequene of numbers where the ratio o fany two consecutive terms is always same. 
* Initial term: first number of the G.P.
* Common ration: The ratio between a term in the sequence and the term before

The behaviour of a geometric sequence depends on the value of the common ratio. If the common ratio is:
Positive, the terms will all be the same sign as the initial term.
Negative, the terms will alternate between positive and negative.
Greater than 1, there will be exponential growth towards positive or negative infinity (depending on the sign of the initial term).

If ‘a’ is the first term and ‘r’ is the common ratio:
nth term of a GP = a*rn-1.
Geometric Mean = nth root of product of n terms in the GP.
Sum of ‘n’ terms of a GP (r < 1) = [a (1 – rn)] / [1 – r].
Sum of ‘n’ terms of a GP (r > 1) = [a (rn – 1)] / [r – 1].
Sum of infinite terms of a GP (r < 1) = (a) / (1 – r).

## Mean and Median

* Mean: average of given set
* Median is the middle value of a set of data. To determine the median value in a sequence of numbers, the numbers must first be arranged in an ascending order.


### Sieve of Eratosthenes

* Sieve of Eratosthenes: most efficient way of generating prime numbers upto a given number N; 
```
// Find Prime numbers from 0 to 50
#include <iostream>
const int len = 50;
int main() {
   int arr[len] = {0};
   for (int i = 2; i < len; i++) {
      for (int j = i * i; j < len; j+=i) {
         arr[j - 1] = 1;
      }
   }
   for (int i = 1; i < len; i++) {
      if (arr[i - 1] == 0)
         std::cout << i << "\t";
   }
}
```


## Arithmetic Progression

* Sequence: is said Arithmetic Progression and the different between any of two consecutive terms is always the same. The next number in the series is calculated by adding a fixed number to the prevoups number in the series. 



* **Arithmetic Progression**: difference bet

### Hottest topics

1. Greatest Commond Divisor (GCD)
2. Catalan Numbers
3. Prime numbers: Optimized Prime checher, Sieve of Eratosthenes: Generating List of Prime Numbers, Larghest Prime Divisor.
4. Fibonacci number(base exerices for dynamic programming).


[Math for Competitive Programming -> list created by a google competitive coder](https://www.quora.com/How-do-I-get-good-at-math-for-competitive-programming/answer/Sameer-Gulati-3?ch=10&share=e1c30b08&srid=oeMh)

### Key Concepts

* **Number theory:** branch of math that studies integers. 
A number 'a' is called factor or divisor of a number 'b' if a divides b. If a is a facotr of b, we write a|b. 
* A number n >1 is  **prime** if it only positive factors are 1 and n.
* Intersection between two sets: consists of elements that are both in A and B. 
* **Union:** consistes of elements that are in A OR in B. 
* **Complement:** Suppose to have the universal set = {1,2,3,4,5,6,7,8,9,10}, the complement A' of the set A={1,2,3,4,5}, will be {6,7,8,9,10} (The universal set without the elements of our original source set).
* **Difference:** consts of elements that are in A but not in B and elements that are in B but in A. 
* **Cartesian Product:** In mathematics, specifically set theory, the Cartesian product of two sets A and B, denoted A × B, is the set of all ordered pairs (a, b) where a is in A and b is in B.

### Fibonacci Numbers

### Some code example

An efficient way to check if a number is prie is to check all its factors from 2 to sqrt(n).
```
bool prime(int n)
{
    if (n < 2) return false;
    for(int i = 2; i*i <= n; i++)
    {
        if(n % i == o) return false; 
    }
    return true; 
}
```

### Greatest Commond Divisor (GCD) and Least Commond Multiple

* **Factors and Multiples** : All numbers that divide a number completely, i.e., without leaving any remainder, are called factors of that number.

* **Greates commond divisor**: the greates commond divisor of two or more integers which are not all zero, is the larghest posiibe integer that divides each integers. For example, the gcd fo 8 and 12 is 4. 

```
int gcd(int a, int b) { return b==0 ? a : gdc(b, a%b); }
int lcm(int a, int b) {  return a * (b/gcd(a,b)); }
```

## Modular Arithmetic and Modular inverse

Modulari arithmetic rules:
1. (a + b) mod M = ((a mod M) + (b mod M)) mod M.
2. (a - b) mod M = ((a mod M) - (b mod M)) mod M.
3. (a * b) mod M = ((a mod M) * (b mod M)) mod M.

Modular inverse: 

### Fibonacci Number

f(0) = 0 
f(1) = 1
f(n) = f(n-1) + f(n-2)


## Generate permutations#

A permutation is each one fo the N! possible arrengements the elementws can take (where N is the number of elements in the range). Different permutation can be ordered according to how they compare lexicographicaly to each other; 

### Important Rules
* 0! =  1!  = 1;

```
#include <algorithm>    // std::next_permutation, std::sort
```

Classical problem: generate all permutations of  aset of n elements.
A = {1,2,3}  -- Permutations = [{0,1,2}, {0,2,1}, {1,0,2}, {1,2,0}, {2,0,1} , {2,1,0}].

A simple way to genera permutation is to begin with the permutation {0,1... n-1} and use a function that construct the next permutation in increasing order. 

```
#include <bits/stdc++.h> 
using namespace std; 
  
// Function to display the array 
void display(int a[], int n) 
{ 
    for (int i = 0; i < n; i++) { 
        cout << a[i] << "  "; 
    } 
    cout << endl; 
} 
  
// Function to find the permutations 
void findPermutations(int a[], int n) 
{ 
    // Sort the given array 
    sort(a, a + n); 
    // Find all possible permutations 
    cout << "Possible permutations are:\n"; 
    do { 
        display(a, n); 
    } while (next_permutation(a, a + n)); 
} 
  
// Driver code 
int main() 
{ 
  
    int a[] = { 10, 20, 30, 40 }; 
  
    int n = sizeof(a) / sizeof(a[0]); 
  
    findPermutations(a, n); 
  
    return 0; 
} 
```
##### Source Geeks for Geeks

**Pollard’s rho algorithm**: used for the calculation of factorization of large numbers. 


###### Practice

The Simpler Ones
1. UVa 10055 - Hashmat the Brave Warrior (absolute function; use long long)
2. UVa 10071 - Back to High School ... (super simple: outputs 2 × v × t)
3. UVa 10281 - Average Speed (distance = speed × time elapsed)
4. UVa 10469 - To Carry or not to Carry (super simple if you use xor)
5. UVa 10773 - Back to Intermediate ... * (several tricky cases)
6. UVa 11614 - Etruscan Warriors Never ... (find roots of a quadratic equation)
7. UVa 11723 - Numbering Road * (simple math)
8. UVa 11805 - Bafana Bafana (very simple O(1) formula exists)
9. UVa 11875 - Brick Game * (get median of a sorted input)
10. UVa 12149 - Feynman (finding the pattern; square numbers)
11. UVa 12502 - Three Families (must understand the ‘wording trick’ first)

Medium

1. UVa 00100 - The 3n + 1 problem (do as asked; note that j can be < i)
2. UVa 00371 - Ackermann Functions (similar to UVa 100)
3. UVa 00382 - Perfection * (do trial division)
4. UVa 00834 - Continued Fractions (do as asked)
5. UVa 00906 - Rational Neighbor (compute c, from d = 1 until ab < d c )
6. UVa 01225 - Digit Counting * (LA 3996, Danang07, N is small)
7. UVa 10035 - Primary Arithmetic (count the number of carry operations)
8. UVa 10346 - Peter’s Smoke * (interesting simulation problem)
9. UVa 10370 - Above Average (compute average, see how many are above it)
10. UVa 10783 - Odd Sum (input range is very small, just brute force it)
11. UVa 10879 - Code Refactoring (just use brute force)
12. UVa 11150 - Cola (similar to UVa 10346, be careful with boundary cases!)
13. UVa 11247 - Income Tax Hazard (brute force around the answer to be safe)
14. UV a 11313 - Gourmet Games (similar to UVa 10346)
15. UVa 11689 - Soda Surpler (similar to UVa 10346)
15. UVa 11877 - The Coco-Cola Store (similar to UVa 10346)
16. UVa 11934 - Magic Formula (just do plain brute-force)
17. UVa 12290 - Counting Game (no ‘-1’ in the answer)
18. UVa 12527 - Different Digits (try all, check repeated digits)