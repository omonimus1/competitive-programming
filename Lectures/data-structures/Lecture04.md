## Math 

1. Greatest Commond Divisor (GCD)
2. Catalan Numbers
3. Optimized Prine Testing
4. Sieve of Eratosthenes: Generating List of Prime Numbers
5. Larghest Prime Divisor

Numbeer theory: branch of math that studies integers. 
A number 'a' is called factor or divisor of a number 'b' if a divides b. If a is a facotr of b, we write a|b. 

A number n >1 is  prime if it only positive factors are 1 and n. 
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


```
// Manage Big INteger in Java
import java.math.BigInterger; 
BigInteger sum = BigInteger.ZERO;
```

### Greatest Commond Divisor (GCD) and Least Commond Multiple

Greates commond divisor: the greates commond divisor of two or more integers which are not all zero, is the larghest posiibe integer that divides each integers. For example, the gcd fo 8 and 12 is 4. 

```
int gcd(int a, int b) { return b==0 ? a : gdc(b, a%b); }
int lcm(int a, int b) {  return a * (b/gcd(a,b)); }
```

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