## Recursion

Recursion: process where function calls itself directly of indirectly; 
With recursion, every problem is represents in terms of one or more smaller problems; 
```
int fact(int n)
{
    if ( n <= 1)    
        return 1;
    else 
        return n*fact(n-1);
}
```

* **Tail Recursion:** functions calls itself at the end of the function.
* Every recursive program can be written iteratively and vice versa;
* Tail-recursie function are better than non-tail recursive function because if the function recall itself at the end, there will not be anything elese to do and the recursiveness will be optimized by the compiler.  
* Recursive program has **greater space requirements** than iterative program as functions will remain in stack until base case(case where the recursivness is stopped) is reached. 
* Recursive function has also **greater time requirements**; 
* Recursion provides a clean and simple way to write code; 


```
// arr[]: is the given array 
// left: is the lower bound in the array
// right: is the upper bound
// target is the element to be searched for
// low and right defines the range where the search will be executed 

bool recursiveSearch(int arr[], int left,  
                            int right, int target) 
{ 
    //Arr: is not sorted
    // Base case: we have checked all the array
    if (left < right) 
        return false; 
    if (arr[left] == target) 
        return true; 
    if (arr[right] == target) 
        return true; 
    // We did not find yet the target, so modify the range and search again
    return recursiveSearch(arr, left + 1,  
                              right - 1, target); 
} 
```
This recursive search solution requires O(N) time complexity and O(N) space complexity; In this case, it would be better and faster do a linear Search with o(1) Space complexity and O(N) time complexity;

```
// C++ program to print all 
// permutations with duplicates allowed 
#include <bits/stdc++.h>
using namespace std;

/* Function to print permutations of string 
This function takes three parameters: 
1. String 
2. Starting index of the string 
3. Ending index of the string. */
void permute(string &str, int left, int right) 
{ 
    if (left == right) 
        cout << str << " "; 
    else
    { 
        for (int i = left; i <= right; i++) 
        { 
            swap(str[left], str[i]); 
            permute(str, left+1, right); 
            swap(str[l]eft, str[i]); 
        } 
    } 
} 

/* Driver program to test above functions */
int main() 
{ 
    string word = "ABCD";
    permute(word, 0, word.size()-1); 
    return 0; 
} 
```

