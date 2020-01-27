'''
	Author: Davide Pollicno 
	Date: 27/01/2020
	Summary: Implementation of the most widely used API of python list
'''

# Built-in method: clear() -> It removes all the element from the list 
def clear_method(array):
	del array[:]
	return array

	
def display(array):
	for el in array:
		print(el , end=" ")
	
	
# Built-in method: len() -> returns the length / number of elements in a list 
def length(array):
	counter = 0
	for i in array:
		counter += 1
	return counter
	
# Built-in method: count() -> It returns the number of elements in a list 
def count_method(array):
	return len(array)

	
# Built-in method: append() -> It add a new element at the last position of the list. 
def append_method(array , element_to_add):
	array[len(array):] = [element_to_add]
	
	
# Starting point of the program
def main():
	array = []

	append_method(array , 5)
	append_method(array , 3)
	append_method(array , 450)
	append_method(array , 66)
	append_method(array , 12)

	print("Number of elements in the array: {0}".format(count_method(array)))
	print("Array content: ")
	display(array)

	print("\nLength of the array: {0}".format(length(array)))
	
	clear_method(array)
	print("\nArray content after clear method: ")
	display(array)
	
	
if __name__ == "__main__":
	main()