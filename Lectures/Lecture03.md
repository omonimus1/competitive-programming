## Popular basic Patterns

When a started to do C.P. exercises, I found few patterns that were common to many exercises especially in in the basic and medium level. Plenty exercises required to know how to:
* Use the XOR operator and how it works.
* Check if a number is prime.
* Check if a string is a Palindrome.
* Print the reverse of a string
* Find frequencies of an object(number, string, pair) in a list.
* Use use the [Left and Right Shift Operators](https://docs.microsoft.com/en-us/cpp/cpp/left-shift-and-right-shift-operators-input-and-output?view=vs-2019)
* Calculate the factorial of a number
* Represent a given number in binary format
* Use arrays, vectors, vectors of arrays, stack and queues.

##### Note: I am not saying that it is all you need to know to do C.P., what this will help you to don't be stuck after the solutions of 15 easiest exercises that you will find for C.P.

## Fibonacci numbers

0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144

In mathemicatical terms, the sequence of Fibonaccia is created by the following relation:
```Fn = Fn-1 + Fn-2```, where F0 = 0 and F1 = 1; 

[![](http://img.youtube.com/vi/LwZRsM7qhrI/0.jpg)](http://www.youtube.com/watch?v=LwZRsM7qhrI "FibonacciVideo")
###### Source by GeekForGeeks

## Arrays or Vectors , which one to use?

For memory optimization reasons considering that the length of the input can be different in any test case, and because vector has many built-in usefule methods (for example sort()) use [vectors](https://en.cppreference.com/w/cpp/container/vector) is better than use normal arrays.  

 


## XOR operation 

* XOR of a numebr with itself is 0
* XOR of a numbr with 0 is number itself. 

Let's say that we need to check which number is repeated just once in an array, knowing that that
all the other elements of the array are present twice. 

```
int find_single(vector<int> vett)
{
    int result = vett[0];
    for(int i =1; i< vett.size(); i++)
        result = result ^ vett[i];
    return result; 
}
```

###### We note about XOR in practice
Having two numeber and needing to print out their sum without the same the sum, very often we print directly ```cout<<a+b;```.
Well, if you will do ```cout << a^b;``` to print the result of XOR operation between a and b, you will get an error.

For this reason, I would invite you to calculate and print the xor between two numbers in the following way:
```
#include <iostream>
using namespace std;

int get_xor(int a, int b)
{
	return a^b;
}

int main() {
	int a, b;
	// Read two numbers in input
	cin >> a >> b;
	cout <<get_xor(a,b)<<endl;
}
```


###### [Check out the GeekForGeeks bitwise operators](https://www.geeksforgeeks.org/bitwise-operators-in-c-cpp/)


## Binary Representation of a given number
void bin (unsigned int number)
{
    if(number > 1)
        bin(number/2);
    cout<<number%2;
}

* [Brian Kerninghan's ALgorithm](https://www.geeksforgeeks.org/count-set-bits-in-an-integer/)
* [Popular Cisco and Adove interview questions about count set bits of an integer ](https://www.geeksforgeeks.org/count-set-bits-integer-using-lookup-table/)

## Count set bits in an interger

Coming Soon 

## Count total set bits in all number betweeen 1 and n 

Coming Soon

## Subset array sum by generating all the subsets

A very popular C.P. that you can meet in the first rounds of many and many coding challenge is: Given a list of numbers (array / vectors), check whether some array elements can be added to sum to N OR return the subset of the array elements that added bettwen them gives N; 

Input: ```Vett = {1,2,3,-1,3} N=4  ```
* Yes : We can have in this case a valid sub set;
* Result: ```{3,1}``` // 3+1 are both elements of the array and summed between them gives 4(N).


## String or array of chars?

Well, as everything in C.P., depends. Depends by the size of the input and by the max running time allowed. 
Character aray is faster than string but, string contains useful built-in methods that allows us to manipulate it easily:
* append(): add a char at the end of the string
* getinline() : store a stream of characters as enters by the user (including eventually so special chars and white spaces). 
* push_back() : add a char at the end of the string
* pop_back() : delete the last char
* lenght() : return the leghth of the string
* copy(Array of chars, length, position)


