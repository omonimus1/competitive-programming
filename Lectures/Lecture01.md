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

## What IDE to I use?

I use Visual studio Code but it does not really matter.  
The most important thing is that you feel comfortable with your coding evironment, so if you are actually using something else, it's fine (as long you use at least a dark theme). 

## Code template

It is useless write the same lines of code more than once, so if you can, avoid to do it. 
My template code for my training exercises is:
```
#include <bits/stdc++.h>
using namespace std; 

// Core of the program 
void solve_test()
{
    // My solution; 
} 

int main()
{
    // To have low I/O operations time cost
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    unsigned int t; // t: used to store the number of test cases  
    cin >> t; 
    while(t--)
    {
        solve_test();
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





 

