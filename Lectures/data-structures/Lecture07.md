## Sorting of vectors of pairs

Suppose to have a vector of pairs: ```vector<pair<int, int>> vect;```
When sorting a vector of pairs, we have 4 different cases:
1. **Ascending** sorting in according to the **first** element of the pair.
```sort(vect.begin(), vect.end()); ```
2. **Ascending** sorting in according to the **second** element.
``` 
// Driver function to sort the vector elements 
// by second element of pairs 
bool sortbysec(const pair<int,int> &a, 
              const pair<int,int> &b) 
{ 
    return (a.second < b.second); 
}
sort(vect.begin(), vect.end(), sortBySec);
```
3. **Descending** sorting in according to the **first** element.
``` 
bool inverseSorting(const pair<int, int> &a,
					const pair<int, int > &b)
{
	return (a.first > b.first);
}

// using modified sort() function to sort 
 sort(vect.begin(), vect.end(), inverseSorting);
```
4. **Descending** sorting in according to the **second** element.
``` 
bool sortbysecdesc(const pair<int,int> &a, 
                   const pair<int,int> &b) 
{ 
    if(p1.second > p2.second)
        return true;
    else if(p1.second == p2.second && p1.first < p2.first)
        return true;
    return false;
} 
// using modified sort() function to sort 
sort(vect.begin(), vect.end(), sortbysecdesc); 
```


## Comparison Operators

The function sort requires that a comparison operator is defined for the data type of the element to be sorted. 

User defined structus do not have a comparison operator automatically. 


## Comparison functions

```
// Sort vector of strng primarily by lenht and secondary by alphabetical order
bool comp(string a, string, b)
{
    if(a.size() != b.size()) return a.size() < b.size();
    return a < b;
}
sort(v.begin(), v.end(), comp);
```






