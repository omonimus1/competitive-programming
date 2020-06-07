# What is Competitive Programming?

Competitive Progranning (C.P.) is a mind sport or e.sport where all the partecipants are called competitive coders and their task iis to solve a specific number of exercises within a specific time. 
 
## Who am I ,Where and When did I start

I am Davide Pollicino, Computer science student at the Edinburgh Napier university. 
My passion for competitive programming started in 2016, during the third year of Secondary High school, where I have partecipated two times to the OIS(Olimpiadi di informatica a squadre / Competitive Programming Olimpics game in Team), being part of the [Hbfs team, 21st position in Italy and 2nd in Sicily](https://squadre.olinfo.it/edition/9/team/sic20)  

Later on, during the COVID19 lookdown, I have decided to publish my solutions write these lectures for all the future Competitive Coders and keep practicing. 

Are you in Italy and you would like to start with a National competition between all the secondary high Schools? I have started from the [OIS](https://squadre.olinfo.it/).


If you are asking yourself which one is the best platform for training, check the [updated list](../README.md).  Every platform has a different set of exercises, a different community and a different approach to the contests and theory so, use all of them to lean as much you can.     


## Remeber, there are two types of people:
```
int main(){                         int main()
                                    {
    return 0;                           return 0; 
}                                   }
```

#  Code settings , how to get you get your IDE ready 

# FAQ

## What IDE should I use?

I use Visual studio Code but it does not really matter.  
The most important thing is that you feel comfortable with your coding evironment, so if you are actually using something else, it's fine (as long you use at least a dark theme). 

# Can you suggest me the best platform for start C.P.?

Use all of them or even more if you know other good platforms for coding practice and interview preparation.


|Platform |My Profile |
|-------|:------:|
|[HackerRank](https://www.hackerrank.com/)|[My Profile](https://www.hackerrank.com/davidepollicino1)|
|[CodeChef](https://www.codechef.com/)|[My Profile](https://www.codechef.com/users/omonimus)|
|[GeeksforGeeks](https://www.geeksforgeeks.org/)|[ My Profile](https://auth.geeksforgeeks.org/user/davidepollicino2015/practice/)|
|[LeetCode](https://leetcode.com/)|[ My Profile](https://leetcode.com/omonimus1)|
|[Interviewbit](https://www.interviewbit.com/)|[ My Profile](https://www.interviewbit.com/profile/omonimus1)|
|[Codebyte (35$ for MONTH!)](https://coderbyte.com/)|[ My Profile](https://coderbyte.com/profile/omonimus1)|
|[Italian Olympiads in Informatics training](https://training.olinfo.it/#/overview)||
|[Spoj.com](https://www.spoj.com/)| |
|[Kattis](https://open.kattis.com/)||
|[TopCoder](https://www.topcoder.com/)||
|[UVA](https://onlinejudge.org/)||

## Code template

It is useless write the same lines of code more than once, so if you can, avoid to do it. 
My template code for my training exercises is:
```
#include <bits/stdc++.h>
using namespace std;

int main() {
    // To have low I/O operations time cost
	ios::sync_with_stdio(0);
    cin.tie(0);

    // Solution

    return 0;
}
```

#### #include <bits/stdc++.h>

Now, first line of code ```#include <bits/stdc++.h>```, it is used usually just with gcc / g++ compilers, so if you run this line of code with other compilers, you will probably get an error. This means that during a competition you shoud just use the standard g++ libraries as:
 ```
 #include <iostream>
 #include <vector>
 #include <utility> // Used for pairs
 // And so on... 
 ``` 

What does it do? It includes all the c++ library. In a contest is a good idea, but if you program must be particular fast and do lots of computation operation, use bits/stdc++ will makes your program a bit slower. 

#### "\n" vs endl; 

* ```endl``` every time will flush the stream so use \n could make your compilation time potentially lower. 

* "\n" is faster that endl;

## Types of input

Sometimes, our input requires to be stored value by values, other times, we need to store all the input by line;

* Read two variables in the same line (separated by space):
```
int a, b;
cin >> a >> b; 
```
* Store all the line(including spaces)
```
string str; 
getline(cin , str);
```
 
## Working with Numbers

Int is the most used data-type in CP.
if we will have to manage integers that are not in the range -2*10^9 and 2*10^9, use the type ``` long long ```;

```
// − 9·10^18 ---  9 ·10^18
long long x = 123456789123456789LL;
```

Usually a long long is enough if CP. Eventually, know that there is also a 128_bit integer.
In according to [Stackoverflow](https://stackoverflow.com/questions/18439520/is-there-a-128-bit-integer-in-c), the 128_bit is supported by clang and g++.
```
#include <boost/multiprecision/cpp_int.hpp>

using namespace boost::multiprecision;

int128_t v = 1;
```

## Type less, be faster

*  **typedef**: give a shorter name to a datatype.
```
typedef long long ll;
// Use it also for more complex data types
typedef pair<int, int> pi;

ll a = 123456789; // Create and initialize a long long variable
```

Useful functions that you will definetely use are:

* floor() : round down to the smallest ingeter; 
* ceil() : round up the biggest integer; 
* trunc() : roun to smallest integer
* round() : round to the nearest integer
* [setprecision()](http://www.cplusplus.com/reference/iomanip/setprecision/) : set decimal precision


## String to integer and reverse

Does not matter which language you are using, make sure that you know how to convert a string to integer and an integer to string, it will be very useful. 
* Int to string  
```  
int i =12;
string conversion = to_string(i);
```
* String to int: 

## Macros

A macro is a certain string in the code that will be changed before the compilation.
In c++, we create one with ```#define```

```
#typedef vector<int> vi;
#define F first
#define PB push_back

// Create Vector of integers
vi list_of_numbers;
// Push back a value in my vector
list_of_numbers.PB(45);
````

## Algorithms key concepts

* **Algorithm:** set of step that toghether solve a problem.

* **Space complexity:** how much memory does it take to wokr

* **Time complexity:** how much time does it take to complete

* **Exact: Algortihm:** gives an exact result

* **Approximate:** try to find an anser that could be correct or partially correct (as face recognition algorithm).


## Types of Algorithm
* Search
* Sorting
* Computational: given one set of data calulcate another.
* Collection algorithm


## GCD of two numbers
GCD, Greatest common diminator: is the biggest number that can be used to divide both numbers a and b where the reminder is 0.
1. Fow two integer a and b, where a > b, divide a by b;
2. If the remainder, r, is 0: the GCD is b;
3. Otherwise, set a to b, b to r, and repeat at step 1 until r is 0; 



## Merge two arrays

In O(n1 + n2) Time and O(n1 + n2) Extra Space)
The idea is to use Merge function of Merge sort.

1. Create an array arr3[] of size n1 + n2.
2. Simultaneously traverse arr1[] and arr2[].
3. Pick smaller of current elements in arr1[] and arr2[], copy this smaller element to next position in arr3[] and move ahead in arr3[] and the array whose element is picked.

```
    int i = 0, j = 0, k = 0; 
  
    // Traverse both array 
    while (i<n1 && j <n2) 
    { 
        // Check if current element of first 
        // array is smaller than current element 
        // of second array. If yes, store first 
        // array element and increment first array 
        // index. Otherwise do same with second array 
        if (arr1[i] < arr2[j]) 
            arr3[k++] = arr1[i++]; 
        else
            arr3[k++] = arr2[j++]; 
    } 
  
    // Store remaining elements of first array 
    while (i < n1) 
        arr3[k++] = arr1[i++]; 
  
    // Store remaining elements of second array 
    while (j < n2) 
        arr3[k++] = arr2[j++];
```


 

