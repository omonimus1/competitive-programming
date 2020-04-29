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
