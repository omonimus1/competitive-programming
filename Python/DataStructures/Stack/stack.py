'''
Author: Davide Pollicino 
Date: 05/02/2020

Summary: Implement a stack in Python using a list
'''

# Create an empty List that is going to be used as Stack 
stack = []

# Add (push()) value inside our stack 
stack.append('1')
stack.append('2')
stack.append('3')
stack.append('4')
stack.append('5')

# Print the content of the stack 
print('\nStack: ')
print(stack)

# Pop elements from the stack
print('\nstart of pop operations: ')
print(stack.pop())
print(stack.pop())
print(stack.pop())
print(stack.pop())

print('\nStack after the pop operations: ')
print(stack)

# Get the size of the stack => Number of elements inside the list 
print('Size of the stack:', len(stack))
