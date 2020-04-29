## Comparison between two algorithm

 We say that an algorithm X is asymptotically more efficient than Y when X will always be a better choise for large inputs

## Time complexity analysis - some general rules

We analyzie time complexity for:
1. Very large input-size
2. Worst case scenario. 

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

## Space complexity

If our algorithm does not uses extra memory space while performing an operation, it is said that it execute the operations ```in  place```. An example could be the sorting of an array using insertion sort, bubble sort etc.

When the operation is executed in place, the Space complexity of the algorithm is: O(1)