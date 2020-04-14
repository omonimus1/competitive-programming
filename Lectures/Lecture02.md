#  Code settings , how to get you get your IDE ready 

## What IDE to I use?

I use Visual studio Code, that allows me to code and compile from the built-in terminal. 
The most important thing is that feel comfortable with your coding evironment, so if you are actually using something else, it's fine (as long you use at least a dark theme). 

## Code template

It is useless write the same lines of code more than once, so if you can, avoid to do it. 
My template code for my training exercises is:
```
#include <bits/stdc++.h>
using namespace std; 

// Core of the program 
void solve_test()
{
    // Your code; 
} 

int main()
{
    int t; // t: used to store the number of test cases  
    cin >> t; 
    while(t--)
    {
        solve_test();
        // If every test case out must to be printed in different lines
        cout <<'\n';
    }   
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

#### \n vs endl; 

```endl``` every time will flush the stream so use \n could make your compilation time potentially lower. 

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

## Numbers Management

* floor() : round down to the smallest ingeter; 
* ceil() : round up the biggest integer; 
* trunc() : roun to smallest integer
* round() : round to the nearest integer
* [setprecision()](http://www.cplusplus.com/reference/iomanip/setprecision/) : set decimal precision



###### Images and lectures flow source: C++ reference, Geeks for Geeks, Tutorial Point, Algorithm and Data Structures Lectures at Napier University (created by Dt.Simon Powers, and Dt. Simon Wells).