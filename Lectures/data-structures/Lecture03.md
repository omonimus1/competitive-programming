## Sorting

* **Sorting:** arranging the elements of a list or collection in creaseing or decreasing order of some property. 


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

## Merge Sort O(n log n)

Merge sort is one of the most efficient sorting algorithms. It works on the principle of Divide and Conquer. Merge sort repeatedly breaks down a list into several sublists until each sublist consists of a single element and merging those sublists in a manner that results into a sorted list.

Having a subarray [a..b]:
1. If a==b , the subarray is already sorted.
2. Get position of the middle element k [(a+b)/2]
3. Recursively sort the subarray[a..k]
4. Recursively sort the subarray [k+1..b]
5. Merge the sorted subarrays [a..k] and [k+1..b] in a sorted array [a..b].


* [How to implement it](https://www.geeksforgeeks.org/merge-sort/)
![Merge sort](../images/merge-sort.gif)
###### Source: wikipedia.org

## Quick sort

* worst-case time: O(n^2)
* Best case: O(n log n)
* [View the lesson](https://www.geeksforgeeks.org/quick-sort/)
![Quick sort](../images/quick-sort.gif)
###### Source: wikipedia.org

## Selection Sort

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

```
for(int i =0; i < n; i++)
{
	for(int j=0; j < n; j++)
	{
		if(arra[i] > arr[i+1])
			swap(array[j], array[j+1]);
	}
}
```

* [How to implement it](https://www.geeksforgeeks.org/bubble-sort/)
![Bubble sort](../images/bubble-sort.gif)


## Heapsort

Heapsort is a comparison based sorting technique baseed on Binary Heap data structure.
It runs in O(n log n).

Complete Binary Tree: binary tree with all the levels full, expect possibily the last and all nodes are as far left as possible. 

Binary Heap: Complete Binary Tree where the root element can be the smallest (This is called Min Binary Heap) or the biggest one (Max Binary Heap).


Viewing a heap as tree, we define the **height of a node** in a heap to be the number of edges on the longest simple downward path from the node to a lead.

Height of an Heap: Height of the root element. 
###### Source: wikipedia.org


## Binary search O(log n) 

```
int a =0; , b = n-1;
while(a <= b)
{
	int k = (a/b)/2;
	if(arr[k] == target)
		return true; // We found the element
	if(arr[k] > x) b = k-1;
	else a = k+1;
}
// The element does not exists
return false;
```

## Sort using #include<algorithm>
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

