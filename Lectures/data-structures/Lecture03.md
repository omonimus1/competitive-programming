## Sorting and Searching

* **Sorting:** arranging the elements of a list or collection in creaseing or decreasing order of some property. 

## Sort in 

![Sorting Complexituy](../../images/complexity-sort.png)

##  Sorting Algorith classification
We classify the sorting algorithm considering five characteristics:

1. **Time complexity**
2. **Space complexity**
3. **Stability:** If we will have two equals elements in the list, the same order of the two equals elements in the sorted list will be respected. Think about a set of cards where we have two versions of the same number, in a black card or red card, we have 2(black), 6 (red), 6 (black), 1(black). The sorteed list will be 1(black), 2(black), 6(red) and 6(black) 
4. **Internal or Extenral sort:** In interal sorts all element to sort are in the main memory (RAM), external sort, we have to fetch the data to sort from external resources, like the Hard Disk. 
5. **Nature of the algorithm:** Recursive or Non-recursive algorithm.  

Time complexity of the most popular sorting algorithms:
![time-complexity](../../images/sorting-complexity.png)
###### Source: interviewBit.com


* **Inversion**: Numbers of step necesesary to sort a list.

* **Order stastics**: The ith order statistic of a set of n numbers is the ith smallest number in the set. 


## Insertion Sort

Insertion sort is a simple sorting algorithm that works the way we litterally sort playing cards in our hands
* Best case time complexity: O(N)
* Worst case time complexity: 0(N^2)
* Space complexity: O(1)

Applying binary search to calculate the position of the data to be inserted doesn't reduce the time complexity of insertion sort. This is because insertion of a data at an appropriate position involves two steps:
1. Calculate the position.
2. Shift the data from the position calculated in step #1 one step right to create a gap where the data will be inserted.

Using binary search reduces the time complexity in step #1 from O(N) to O(logN). But, the time complexity in step #2 still remains O(N). So, overall complexity remains O(N^2).

![Insertion sort](../images/Insertion-sort-example.gif)
[Insertion sort lecture](https://www.geeksforgeeks.org/insertion-sort/)
###### Source: wikipedia.org
```
INSERTION-SORT(A)
   for i = 1 to n
   	key ← A [i]
    	j ← i – 1
  	 while j > = 0 and A[j] > key
   		A[j+1] ← A[j]
   		j ← j – 1
   	End while 
   	A[j+1] ← key
  End for 
```

## Counting Sort

It counts the number of elements having distinct key values. 


## Merge Sort O(n log n)

It is a Divide and COnque algorithms. It divides the input array in two halves, calls itself for the two halves and then merges the two single sorted half.  

Merge sort repeatedly breaks down a list into several sublists until each sublist consists of a single element and merging those sublists in a manner that results into a sorted list.

Having a subarray [a..b]:
1. If a==b , the subarray is already sorted.
2. Get position of the middle element k [(a+b)/2]
3. Recursively sort the subarray[a..k]
4. Recursively sort the subarray [k+1..b]
5. Merge the sorted subarrays [a..k] and [k+1..b] in a sorted array [a..b].
```
// Merges two subarrays of arr[].
// First subarray is arr[l..m]
// Second subarray is arr[m+1..r]
void merge(int arr[], int left, int middle, int right)
{
    int i, j, k;
    int n1 = middle -left + 1;
    int n2= right - middle; 

    // Creat temporary arrays
    int L[n1] , R[n2];

    // Copy data to temporary arrays L and R
    for(i=0; i < n1; i++)
        L[i] = arr[left+i];

    for(j=0; j < n2; j++)
        R[j] = arr[middle+1+j];

    // Merge temporary arrays in the original one
    i = j = 0;
    k = left;

    while(i < n1 && j < n2)
    {
        if(L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    // Copy remaining element of L in the array
    while(i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }

    while(j < n2)
    {
        arr[k] = R[j];
        j++;
        k++; 
    }
}


void mergeSort(int arr[], int left, int right)
{
    if(left < right)
    {
        int middle = left + (right - left)/2;

        mergeSort(arr, left, middle);
        mergeSort(arr, middle+1, right);

        merge(arr, left, middle, right);
    }
}

```

* [How to implement it](https://www.geeksforgeeks.org/merge-sort/)
![Merge sort](../images/merge-sort.gif)
###### Source: wikipedia.org

## Quick sort

* worst-case time: O(n^2)
* Best case: O(n log n)
* [View the lesson](https://www.geeksforgeeks.org/quick-sort/)
![Quick sort](../images/quick-sort.gif)

It picks an element as pivot and partitions the given array around the picked pivot. There are many different versions of quickSort that pick pivot in different ways.

* Always pick first element as pivot.
* Always pick last element as pivot (implemented below)
* Pick a random element as pivot.
* Pick median as pivot.
###### Source: wikipedia.org
```
/* low  --> Starting index,  high  --> Ending index */
quickSort(arr[], low, high)
{
    if (low < high)
    {
        /* pi is partitioning index, arr[pi] is now
           at right place */
        pi = partition(arr, low, high);

        quickSort(arr, low, pi - 1);  // Before pi
        quickSort(arr, pi + 1, high); // After pi
    }
}
/* This function takes last element as pivot, places
   the pivot element at its correct position in sorted
   array, and places all smaller (smaller than pivot)
   to left of pivot and all greater elements to right
   of pivot */
partition (arr[], low, high)
{
    // pivot (Element to be placed at right position)
    pivot = arr[high];  
 
    i = (low - 1)  // Index of smaller element

    for (j = low; j <= high- 1; j++)
    {
        // If current element is smaller than or
        // equal to pivot
        if (arr[j] <= pivot)
        {
            i++;    // increment index of smaller element
            swap arr[i] and arr[j]
        }
    }

    swap arr[i + 1] and arr[high])
    return (i + 1)
}
#### Source: Geeks for geeks
```
## Selection Sort

* It sorts an array by repeatedly finding the minimum element (considering ascending order) from unsorted part and putting it at the beginning. 
* The algorithm maintains two subarrays in a given array. The subarray which is already sorted. Remaining subarray which is unsorted.

* Average time complexity: O(n^2)
* [How to implement it](https://www.geeksforgeeks.org/selection-sort/)
![Selection sort](../images/selection-sort.gif)
###### Source: wikipedia.org
```
void selectionSort(int arr[], int n)
{
	int i, j, smallest_element_index;
	for(i=0; i< N-1; i++)
	{
		smallest_element_index = 1;
		for(j = i+1; j<N; j++)
		{
			if(arr[j] < arr[smallest_element_index]);
				smallest_element_index = j;
			swap(&arr[smallest_element_index], &arr[i]);
		}
	}
}
```

## Bubble sort
* The simplest in-place algorithm.
* O(N^2)
* Best time complexity: O(N)

```
void bubbleSort(int arr[], int n) 
{ 
   int i, j; 
   for (i = 0; i < n-1; i++)       
  
       // Last i elements are already in place    
       for (j = 0; j < n-i-1; j++)  
           if (arr[j] > arr[j+1]) 
              swap(&arr[j], &arr[j+1]); 
}
```


```
// Time complexity: O(N)
int main()
{   
    int arr[] = {10, 20, 30, 40, 50}, i, j, isSwapped;
    int n = sizeof(arr) / sizeof(*arr);
    isSwapped = 1;
    for(i = 0; i < n - 1 && isSwapped; ++i)
    {
        isSwapped = 0;
        for(j = 0; j < n - i - 1; ++j)
            if (arr[j] > arr[j + 1])
            {
                swap(&arr[j], &arr[j + 1]);
                isSwapped = 1;
            }
    }
    for(i = 0; i < n; ++i)
        printf("%d ", arr[i]);
    return 0;
}
```
* [How to implement it](https://www.geeksforgeeks.org/bubble-sort/)
![Bubble sort](../images/bubble-sort.gif)

## Ternary Search

* Is a divide and Conque algorith,
* It works on sorted array
* Similar to Binary Search but instead two split the array in two, it splits it in three. 

```
int ternarySearch(int start, end, target, int arr[])
{
    if(end >= start)
    {
        // Find mid1 and mid2
        int mid1 = start + (end - start) /3;
        int mid2 = end - (end - start) / 3;

        if(arr[mid1] == target)
            return mid1;
        if(arr[mid2] == target)
            return mid2; 
        // Target is not present, so repeat search process
        if(target < arr[mid1])
            return ternarySearch(mid2+1, end, target, arr);
        else
        {
            // Target can be between mid1 and mid2.
            return ternarySearch(mid1+1, mid2-1, target, array);
        }                
    }
    // We did not find the target
    return -1;
}
```


## Heap sort O(N*LogN)

**Heapsort** is a comparison based sorting technique baseed on Binary Heap data structure.
* It runs in O(n log n).
* O(1) space.



**Binary Heap:** is a complete Binary Tree where the root element can be the smallest (This is called Min Binary Heap) or the biggest one (Max Binary Heap).

Complete Binary Tree: binary tree with all the levels full, expect possibily the last and all nodes are as far left as possible. 

Viewing a heap as tree, we define the **height of a node** in a heap to be the number of edges on the longest simple downward path from the node to a lead.

**Height of an Heap:** Height of the root element. 



## Binary search O(log n) 

```
// Initially,
// l = 0, first index of arr[].
// r = N-1, last index of arr[].
int binarySearch(int arr[], int l, int r, int x) 
{ 
    while (l <= r) { 
        int m = l + (r - l) / 2; 
  
        // Check if x is present at mid 
        if (arr[m] == x) 
            return m; 
  
        // If x greater, ignore left half 
        if (arr[m] < x) 
            l = m + 1; 
  
        // If x is smaller, ignore right half 
        else
            r = m - 1; 
    } 
  
    // if we reach here, then element was 
    // not present 
    return -1; 
}
# Source GeeksForGeeks
```
```
#include<bits/stdc++.h> 
using namespace std; 

int main() 
{     // initializing vector of integers 
    vector<int> vec = {7, 13, 18, 21, 44, 98}; 
    
    // using binary_search to check if 15 exists 
    if (binary_search(vec.begin(), vec.end(), 21)) 
        cout << "21 exists in vector"; 
    else
        cout << "21 does not exist"; 
    
    cout << endl; 
} 
```

## Sort using built-in sort method
```
// Sort string called s
sort(s.begin(), s.end());
// Sort vector called vect
sort(vect.begin(), vect.end());
// Sort array called vett, having it's size n
sort(vect, vect+n);
```

## Merge two to sorted arrays

* [Video-Tutorial](https://www.youtube.com/watch?v=xF3TU-QlhJQ&feature=youtu.be)


# Upper and Lower bounds

**Note:** all the following functions are built in c++ language, they assume that the array is already sorted and all of them work in logarithmic time. 
* lower_bound: return pointer to the first array element whose values is at least x.
* upper_bound: returns pointer to the first array element whose vale is larger than x.
* equal_range: returns both above pointer.


### Find index of first occurrency of an element
```
// array: name of our array
// n: size of the array
// x: target (element to search)
auto k = lower_bound(array, array+n, x)-array;
if( k < n && array[k] == x)
	return k; // Return index of the element found
return -1;

```

### Index of last Occurence in a Sorted array

Suppose that we have a sorted array: ```arr[] = {1,1,2,3,3,3,3,5} ``` and that the target is 3. The index of the last frequency of 3 is 6 (0-based indexing);

To find the index of last Occurence we can use binary Search, solving this problem in O(log N);

```
// Recurisive Solution
int lastOccurrency (int arr[], int low, int high, int x, int n)
{
    if(low > high) return -1;
    int mid = (low + high)/2;

    if(arr[mid] > x)
        return lastOccurency(arr, low, mid-1, n);
    else if(arr[mid] < x)
        return lastOccurency(arr, mid+1, high, n);
    
    else
    {
        // If the we are at the last element or we are at the last occurency of our target, return the index
        if(mid == n-1 || arr[mid] != arr[mid+1])
            return mid; 
        else
            return lastOccurency(arr, mid+1, high, n);
    }
}


// Iterative solution
int lastOccurrency(int arr[], int n, int x)
{
    int low = 0, high = n-1;
    while(low <= high)
    {
        int mid = (low+high)/2;
        if(arr[mid] <x)
            low = mid+1;
        else if(arr[mid] < x)
            high = mid-1;

        else
        {
            if(mid != n-1 || arr[mid] != arr[mid+1])
                return mid; 
            else
                low = mid+1;
        }
    }
    return -1; 

}
```

### Find frequency of a value x
```
auto a = lower_bound(array, array+n, x);
auto b = upper_bound(array, array+n, x);
cout <<"Frequency of " << x << ": " << b-a << endl;
```
**OR**
```
auto r = equal_range(array, array+n, x);
cout <<"Frequency of " << x << ": "  << r.second-r.first << "\n";
```

```
/* An efficient program to print  
subarray with sum as given sum */
#include <iostream> 
using namespace std; 
  
/* Returns true if the there is a subarray of  
arr[] with a sum equal to 'sum' otherwise  
returns false. Also, prints the result */
int subArraySum(int arr[], int n, int sum) 
{ 
    /* Initialize curr_sum as value of  
    first element and starting point as 0 */
    int curr_sum = arr[0], start = 0, i; 
  
    /* Add elements one by one to curr_sum and  
    if the curr_sum exceeds the sum, 
    then remove starting element */
    for (i = 1; i <= n; i++) { 
        // If curr_sum exceeds the sum, 
        // then remove the starting elements 
        while (curr_sum > sum && start < i - 1) { 
            curr_sum = curr_sum - arr[start]; 
            start++; 
        } 
  
        // If curr_sum becomes equal to sum, 
        // then return true 
        if (curr_sum == sum) { 
            cout << "Sum found between indexes "
                 << start << " and " << i - 1; 
            return 1; 
        } 
  
        // Add this element to curr_sum 
        if (i < n) 
            curr_sum = curr_sum + arr[i]; 
    } 
  
    // If we reach here, then no subarray 
    cout << "No subarray found"; 
    return 0; 
} 
  
// Driver Code 
int main() 
{ 
    int arr[] = { 15, 2, 4, 8, 9, 5, 10, 23 }; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    int sum = 23; 
    subArraySum(arr, n, sum); 
    return 0; 
} 
  
// This code is contributed by SHUBHAMSINGH10 

```