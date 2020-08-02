## Bitwise

* **Bitwise algorithms:** used to perform operatiosn at bit-level. 

## Bitwise Operatos

* **&(bitwise AND):** takes two numbers as operands: Takes two numbers as operands and does AND on every bit of two numbers. The result of AND is 1 only if both bits are 1. Suppose A = 5 and B = 3, therefore A & B = 1.
* **|(bitwise OR):** Takes two numbers as operands and does OR on every bit of two numbers. The result of OR is 1 if any of the two bits is 1. Suppose A = 5 and B = 3, therefore A | B = 7.
* **^ (bitwise XOR):** takes to numbers and return the XOR results of the them 
* **<< (left shift operator):** get two paramenters: number to shift and number of times it must be shifted. ```cout << x << 1 << endl;```;
* **>> (right shift):** right shift the bits of the first operand, the second indicates the number of places to shif.
* **~(bitwise NOT):** it **inverts** all the bits. (Es: A = 4; ~A = 3)

## 'XOR' operator.
1^1 = 0
0^0 = 0
1^0 = 1
0^1 = 1

## Count number of set bits

Having a number n, we want to know how many bits are set; 
A first idea could be just convert the integer in binary, storing all the bits in an array and return the frequency of the 1.

Well, there are simpler and more efficient approach to this problem. 

A first approach could be:
* Count with O(1) space
```
int countSetBits(int n)
{
    int counter = 0;
    while(n > 0)
    {
        if(n % 2)
            counter++;
        n /= 2;
    }
    return counter; 
}
```

The last approach could work. It does not require extra space (apart for the simple counter variable) and could be acceptable.

* A faster approach could be use the **Brian and Kerningham Algorithm**. Will I remember this name? Probably not. 
```
// Brian and Kerningham algorithm for counting number of set bits
int countSetBits(int n)
{
    int counter = 0;    
    while(n>0)
    {
        /*
            We are first computing n-1;
            When we subtruct 1 from a number, 
            all the 0s before the set bit become 1
            and the left most bit set becomes 0;

            If every iteration we are just setting to 0 the last set bit. 

            This alborithms runs N times, where N is the number of set bits. 
        */
        n & = (n-1);
        counter++;
    }
    return counter; 
}
```
* The **fastest approach** is tu use the **lookup method.**
It allows us to check in O(1) time to check how many bits are set. 

[See a lookup method implementation](https://ide.geeksforgeeks.org/fdmJUCXVNl)

## Check if a number is power of 2

If a number N is a power of 2, then bitwise-AND(&) of N and N-1 will be zero. 

```
bool isNotPower(int n)
{
    // Returns 0 if it power of 2; 
    return n&n(-1);
}
```
## Find most significant bit in the given number

The log2(N), where N is the number given input, gives the position of the MSB (Most Significan Bit).
```
int log2_calculator(int num)
{
    int counter = 0;
    while( x>>=1 )
        counter++;
    // The number of times that we have applied the shift operator is the log2 of our number  
    return res;
}
```

## Maximum AND value 



## Even and Odd

* Even: has first bit (from right hand side):set to 0;
* Odd: has first bit (from right hand side): set to 1; 
## Check if kth bit is set (with 0 base index)
```
bool checkKthBit(int n, int k){
    return (n>>k)&1;
}
```

## Arithmetic operations:

* Divide by 2:
```
x = 10;
x = x >> 1; // (x is now 5)80
```
* Multiply by 2: 
```
x = 20;
print(x << 1); // x is now 40
print(x << 2); // x is now 80
print(x << 3); // x is now 160

/*
// Ex by: Geeks for geeks
x = 18(00010010)
x << 1 = 36 (00100100)
*/
```

* Find log base of a integer
```
int log2_calculator(int num)
{
    int counter = 0;
    while( x>>=1 )
        counter++;
    // The number of times that we have applied the shift operator is the log2 of our number  
    return res;
}
```

## Bit operations and problems

* Set n'th bit of a number:
We need to shift 1 k times to its left and the perform bitwise OR operation with the number and result of left shift performed just before.
```
// function to set the kth bit 
int setKthBit() 
{ 
    int n = 4; // Integer were we need to set the nth bit
    int k =1; // Starting from the 0-based index at the right hand side, we will set the 
    // bit at the first position (Position k)
    // kth bit of n is being set by this operation 
    
    // The result will not be 6
    // 4 in binary: 1 0 0 
    // After have set the kth bit: 1 1 0
    return ((1 << k) | n); 
} 
```
* Unseat n'th position of a number:
```
     // Do & of n with a number with all set bits except 
    // the k'th bit 
    return (n & ~(1 << (k - 1))); 
```
* Check if a bit at nth position is set (1) or unset(0)

1. Left shift given number 1 by k-1 to create 
   a number that has only set bit as k-th bit.
    temp = 1 << (k-1)
2. If bitwise AND of n and temp is non-zero, 
   then result is SET else result is NOT SET.
```
bool isSet(int number, int position)
{
    if (number & (1 << (position - 1))) 
        return true;
    else
        return false; 
}
```
* Flip bits of a given number
It can be done by a simple way, just simply subtract the number from the value obtained when all the bits are equal to 1 .

* Find most significant set bit in the given number

The most-significant bit in binary representation of a number is the highest ordered bit, that is it is the bit-position with highest value.


## Power of two

* Given a number N, the task is to check whether the given number is a power of 2 or not.
All the powers oftwo have just a single bit set (1);

```
// Function to check if x is power of 2 
bool isPowerOfTwo(int number) 
{ 
   if(number==0) 
   return false; 
  
   return (ceil(log2(number)) == floor(log2(number))); 
} 
```
OR
```
/* Function to check if the given number is power of 2*/
bool isPowerOfTwo (int number)  
{  
    if(n == 0)
        return false;
    // We do the bitwise operation of N with N-1; 
    return number && (!(number&(number-1)));  
} 
```
OR
```
bool isPowerOfTwo(int n)
{
    if(n==0)
        return false;
    while(n != 1)
    {
        if( n % 2 != 0 )
            return false;
        n /= 2;
    }
    return true; 
}
```