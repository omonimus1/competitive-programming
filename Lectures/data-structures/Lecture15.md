## Counting and Probability

Counting theory tries to answer the question "How many?" without enumaerating all the choices. 

An example could be
* How many differnt n-bit number sare there?
* How many anagrams can we create from this word?

* **Permutations**: **ordered**(main different between permutation and combination), sequence of all the elements of a set S whcih each element appearing exactly one.

Ex: S = {a,b,c}
Permutations:
{abc, acb, bac, cab, cba}

Having N the number of elements of a set, the number of it's permutations are going to tbe N!. 

* **K-permutation**: permutation of K elements that are part of a set S. 
THe number of permutations will be: 
```
N! / ( N-K )!
```

* **k-combinations:**: combination of n elements being part of the set S.
Ex:
S = {a,b,c,d}
N = 2
Combinations: {ab,ac,ad,bc,bd,cd}

Number of combinations of N elements:
```
N! / K! * (N - K)!
```