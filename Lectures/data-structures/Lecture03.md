## Pointers

**Pointer:** variable that store  the memory address of another variable.
[But how do we use them?](https://www.geeksforgeeks.org/pointers-c-examples/)

## Sorting

* **Sorting:** arranging the elements of a list or collection in creaseing or decreasing order of some property. 

##  Sorting Algorith classification
We classify the sorting algorithm considering five characteristics:

1. **Time complexity**
2. **Space complexity**
3. **Stability:** If we will have two equals elements in the list, the same order of the two equals elements in the sorted list will be respected. Think about a set of cards where we have two versions of the same number, in a black card or red card, we have 2(black), 6 (red), 6 (black), 1(black). The sorteed list will be 1(black), 2(black), 6(red) and 6(black) 
4. **Internal or Extenral sort:** In interal sorts all element to sort are in the main memory (RAM), external sort, we have to fetch the data to sort from external resources, like the Hard Disk. 
5. **Nature of the algorithm:** Recursive or Non-recursive algorithm.  

Time complexity of the most popular sorting algorithms:
![time-complexity](../images/sorting-complexity.png)
###### Source: interviewBit.com

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

## Merge Sort

Merge sort is one of the most efficient sorting algorithms. It works on the principle of Divide and Conquer. Merge sort repeatedly breaks down a list into several sublists until each sublist consists of a single element and merging those sublists in a manner that results into a sorted list.

* Average case: O(n log n)
* [How to implement it](https://www.geeksforgeeks.org/merge-sort/)
![Merge sort](../images/merge-sort.gif)
###### Source: wikipedia.org

## Quick sort

* Worst case: O(n^2)
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

* [How to implement it](https://www.geeksforgeeks.org/bubble-sort/)
![Bubble sort](../images/bubble-sort.gif)
###### Source: wikipedia.org