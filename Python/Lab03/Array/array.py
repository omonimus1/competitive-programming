'''
	Author: Davide Pollicino 
	Date: 27/01/2020
	
	Summary: Create an array in python using build it python data structure 
'''


def display(array):
	# Print all the elements of the array in one line
	for element in array:
		print(element , end= " ")
		

		
def main():
	# Create an empty list / array
	list = []
	list.append(5)
	list.append(3)
	list.append(10)
	print("Array created")
	display(list)
	print("\nSize of the list: {0}".format(len(list)))
	print("\nLast element of the array: {0}".format(list.pop()))

if __name__ == "__main__":
	main()