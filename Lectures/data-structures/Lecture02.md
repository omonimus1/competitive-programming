## Comparison between two algorithm

 We say that an algorithm X is asymptotically more efficient than Y when X will always be a better choise for large inputs

![Complexity](../images/complexity.png)
![bigOComplexity](../images/bigocomplexity.png)
Both pictures taken from bigocheatsheet.com


### Complexity notations

* Big Oh gives the upper bound
* Big Ω (Omega) gives the lower bound
* There is Big Ɵ (Theta) notation to asymptotically bound the growth to within constant factors above and below

Each notation can be used to reason about the best, worst & average case of performance. 

### An algorithm can run in 

* **Constant time** ```O(1)```:  if it requires the same amount of time regardless of input size.
* **Linear time** ```O(n)```: if the time it takes to execute a specific set of instructins, is directly proportional to the size of the input. An example could be: check if our ArrayList, or Queue contains a specific element x. 
* **Quasilinear time** ```O(n log n)```
* **Logarithmic time**```O(logN)```: the time is proportuioanl to the logarithm of the input size. An example could be the Binary Search algorithm. 
* **Quadratic time**  ```O(n^2)```: the execution time is proportional to the square of the input size. 
* **Cubic** ```O(n^3)```: we have 3 nested loop
* **Exponential time** ```O(2^n)```: 
* **Factorial time** ```O(n!)```: for example: generate all the permutation of a list of elements. 
* **Polynomial time**:if its time complexity is at most O(n^k), where K is a constant. 

### Big O notations

Big referes to the order associated wih the perfomance, (degree of complexity), so o(N) si read "The order of n". 
A function Big O notation is generally determined by how it responds to different inputs. 

### Turing machine

The turing's machine is a tape of infinite lenght (though like memory with each cell laid out next to the other in a long line),
with a state register and a finite table of instructions to execute. 

The machine follows do the following  steps: read tape, decode information, execute any instructuons and repeat. 

* **Computability:** a mathematical problem is computable if it can be solved in priciple by a computing device. 

Big O notation is used to give the maximum upper bound for running time.This means that the algorithm will not take time greater than the binding function. Let's analyze each of these 
Which of the following is not O(n^2)?
A)  (15^10) * n + 12099   In this polynomial we can safely ignore the constant part 12099, this leaves us with (15^10)*n. Now here too we can ignore (15^10) because it also a constant. This gives us a bound of Theta(n).This Theta (n) will always be bound by O(n^2).

B) n^1.8 will also always be bound by O(n^2).

C) n^3/(sqrt(n))= n^3/ n^0.5= n^2.5, You can clearly see that n^2.5 cannot be bound by n^2. This will increase much faster than n^2. Hence this cannot be O(n^2).

D) (2^20)*n, Similar to the first case this is linear in input as well. Hence it will also be bound by O(n^2).

Answer is C because the order of growth of option c is n2.5 which is higher than n2.

## Worst, average and best scenario

While Analalizing the time complexity of an algorithm, you should be able to recognize its:
* Worst case scenario(usually done): we calculate the upper bound on running time of an algoritm. 
* Average case scenario(something done): we take all the possible inputs and calculate the computing time for all of them.
* Best case scenario: we calculate the lower bound on running time of an algorithm. 

Most of the times, we consider the worst case analysis to analyze an algoriths.

### Rule 1 : Analize polinomial expression of time complexities
If we have a polinomial expressio, like ``` T(n) = 5n^3 + 3n^2 + 4n + 2```, we have to 
* Drop all the lower order terms
* Drop all the constant multipiers
After applying these rules, the result of the polinomial expression above will be: ```T(n) = O(n^3)```


### Rule 2: Runnint time of all fragments
```
// O(1)
int a;
a = 5;
a++;
------------------------------
// O(n)
int a=0;
for(int i =0; i < n; i++)
{
    cout<< a+1 << " "<<endl;
}
------------------------------
// Nested loop - T(n) =  O(n^2)
for(int i =0; i<n; i++)
{
    for(int j=0; j<n; j++)
        // Simple statemente
}
------------------------------
// O(Log N)
for(int i =1; i<=n; i *=c)
{
// O(1) expressions
}
// OR
for(int i =n; i >0; i /=c)
{
// O(1) expressions
}
----------------------------
// O(LogLog N)
for (int i = 2; i <=n; i = pow(i, c)) {
    // some O(1) expressions
}
```
## Rule 3: Complexity in Conditional statement

Having a block of code like a function, with multiple conditional statement, for rule, we assume that the time complexity of the program is going to be equal to the time complexituy of the worst case scanarion.
```
function()
{
    if(some condition)
    {
        // T(n) = O(n)
        for(int i =0; i < n; i++)
        {
            // Some  simple statement
        }  
    }
    else
    {
        T(n) = O(n^2)
        for(int i =0; i<n; i++)
        {
            for(int j=0; j<n; j++)
                // Simple statemente
        }  
    }
}
```
Becuase the preview example, the worst case scenario was to run the else statement, which has a O(n^2) time complexity, we will say that in this case, the time compleixity of my function is O(n^2).

## Space complexity

Space complexity is a mesure of how efficient your code is in in terms of memory used. 
```
vector<int> vett;
for (int i = 0; i < number_of_element; i++) vett.push_back(i);
```
The space complexity of the above example is O(N). 

```
    // Assume that rand() is O(1) time, O(1) space function.
    int a = 0, b = 0;    
    for (i = 0; i < N; i++) {
        a = a + rand();  
    }
    for (j = 0; j < M; j++) {
        b = b + rand();
    }
    // T(n) = O(N + M) time, O(1) space
```

```
    // Time complexity is: O(log N)
    int a = 0, i = N;
    while (i > 0) {
        a += i;
        i /= 2;
    }
```
```
// Time complexity in the worst case scenario: O(N)
int searchNumOccurrence(vector<int> &V, int k, int start, int end) {
    if (start > end) return 0;
    int mid = (start + end) / 2;
    if (V[mid] < k) return searchNumOccurrence(V, k, mid + 1, end);
    if (V[mid] > k) return searchNumOccurrence(V, k, start, mid - 1);
    return searchNumOccurrence(V, k, start, mid - 1) + 1 + searchNumOccurrence(V, k, mid + 1, end);
}
```

If our algorithm does not uses extra memory space while performing an operation, it is said that it execute the operations ```in  place```. An example could be the sorting of an array using insertion sort, bubble sort etc.

When the operation is executed in place, the Space complexity of the algorithm is: O(1)
```
// Space complexity is: O(n) as there can be at most O(n) active functions(function call frames) at a time. 
double foo (int n)
{
    int i;
    double sum;
    if (n = = 0) return 1.0;
    else
    {
        sum = 0.0;
        for (i = 0; i < n; i++)
            sum += foo (i);
        return sum;
    }
}

```

## Big O Notation


Big O notatio is the first mathematical ool used to represent the upperbound or order of growth of a function.



## Delete element from an array

* idx: index of the element to remove and len the length of the array. 
```
// Remove index x from the array
for(int i = idx+1; i< len; i++)
    arr[i-1] = arr[i];
len -= 1;
```

### Array rotation (rotate Array by K elements)

* 1st method:
Complexity: O(N), Auxiliary Space: O(K)
1. Store first K elements in a temporary array.
2. Shift rest of the array
3. Push back temporary array in original one. 

* 2nd method: 
Time complexity: O(n*k) - Space complexity: O(1)
* Suppose to rotate an array by 1 position to the left. 
1. store first element in temporary variable 
2. Left shift all the element from second element by 1 position.
3. Initialize arr[N-1] with temp; 

## We use C++, what how do we declare an array in Java
```
    // declares an Array of integers. 
    int[] arr = new int[5]; 
```

 ## Reverse an array

 In many coding solutions I have been using the  ```reverse()``` function.

```
int array[5];
reverse(array, array+5);
vector<int>myVect(3);
reverse(myVect.begin(), myVect.end());
```
But can we implement the reverse() function?

```
int n=5;
int array[n] = {1,2,3,4,5};
int start = 0;
int end = n-1;
int temp;

while(start != end)
{
    /* Swap first and last element, the second and last element and so on... */
    temp = array[start];
    array[start] = array[end];
    array[end] = temp;
    start++;
    end--;
}
```
## What about dynamic arrays?

Checkout out my [Arrays and Vectos problem solutions](https://github.com/omonimus1/geeks-for-geeks-solutions#Array-or-Vector)

## List

* List: sequence containers that allow non-contiupus memory allocation.  
* In C++ SL implments a doubly linked list and not arrays. 
```
#include <list>
list<dataType> name_of_my_list;
```


```
include <list> 
#include <iterator> 
using namespace std; 

//function for printing the elements in a list 
void showlist(list <int> g) 
{ 
    list <int> :: iterator it; 
    for(it = g.begin(); it != g.end(); ++it) 
        cout << '\t' << *it; 
    cout << '\n'; 
} 

int main() 
{ 
    list <int> gqlist1; 

    for (int i = 0; i < 10; ++i)  
        gqlist1.push_back(i * 2); 
    
    cout << "\nList 1 (gqlist1) is : "; 
    showlist(gqlist1); 

    cout << "\ngqlist1.front() : " << gqlist1.front(); 
    cout << "\ngqlist1.back() : " << gqlist1.back(); 

    cout << "\ngqlist1.pop_front() : "; 
    gqlist1.pop_front(); 
    showlist(gqlist1); 

    cout << "\ngqlist1.pop_back() : "; 
    gqlist1.pop_back(); 
    showlist(gqlist1); 

    cout << "\ngqlist1.reverse() : "; 
    gqlist1.reverse(); 
    showlist(gqlist1); 
    return 0; 

} 
```


## Iterators

* Iterator: pointer to a memory address of an STL containers.
* begin(): returns the beginning position of a container
* end(): returns the after end position of the container. 
* inserter() :- This function is used to insert the elements at any position in the container. It accepts 2 arguments, the container and iterator to position where the elements have to be inserted.

```
    vector<int> ar = { 1, 2, 3, 4, 5 };
    vector<int> ar1 = {10, 20, 30}; 

    // copying 1 vector elements in other using inserter()
    // inserts ar1 after 3rd position in ar
    copy(ar1.begin(), ar1.end(), inserter(ar,ptr));
    
    // Displaying new vector elements
    cout << "The new vector after inserting elements is : ";
    for (int &x : ar) 
        cout << x << " ";
```



## Vector in Java
```
// Java code to illustrate Vector 

import java.util.*; 
class Vector_demo { 
    public static void main(String[] arg) 
    { 
        // Create a vector 
        Vector<Integer> v = new Vector<Integer>(); 
    
        // Insert elements in the Vector
        v.add(1); 
        v.add(2); 
        v.add(3); 
        v.add(4); 
        v.add(3); 
    
        // Print the Vector
        System.out.println("Vector is " + v); 
    } 
}
# GeeksForGeeks
```

## Larghest sum subarray
Pseudocode:
```
//n : size of array
int largestsum(arr, n)
{
    max_so_far = INT_MIN
    max_ending_here = 0

    for (i=0 to n-1)
    {
        max_ending_here += arr[i]
        if max_so_far < max_ending_here :
            max_so_far = max_ending_here

        if max_ending_here < 0 :
            max_ending_here = 0
        return max_so_far
    }
}
```
