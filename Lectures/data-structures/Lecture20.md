## Bitwise

* **Bitwise algorithms:** used to perform operatiosn at bit-level. 

## Bitwise Operatos

* &(bitwise AND): takes two numbers as operands: Takes two numbers as operands and does AND on every bit of two numbers. The result of AND is 1 only if both bits are 1. Suppose A = 5 and B = 3, therefore A & B = 1.
* |(bitwise OR): Takes two numbers as operands and does OR on every bit of two numbers. The result of OR is 1 if any of the two bits is 1. Suppose A = 5 and B = 3, therefore A | B = 7.
* ^ (bitwise XOR): takes to numbers and return the XOR results of the them 
* << (left shift): left shift the bits of the first operand, the second indicates the number of places to shif.
* >> (right shift): right shift the bits of the first operand, the second indicates the number of places to shif.
* ~ (bitwise NOT): it inverts all the bits. (Es: A = 4; ~A = 3)

## 'XOR' operator.
1^1 = 0
0^0 = 0
1^0 = 1
0^1 = 1

## Even and Odd

* Even: has first bit (from right hand side):set to 0;
* Odd: has first bit (from right hand side): set to 1; 

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


* Given a number N, the task is to check whether the given number is a power of 2 or not
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
    
    return number && (!(number&(number-1)));  
} 
```