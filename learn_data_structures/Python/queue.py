'''
Author: Davide Pollicino 
Date: 05/02/2020

Summary: Implement a queue in Python using a list
'''
# Create an empty list that we will be used a queue
queue = []

# Add elements in the queue
queue.append(1)
queue.append(2)
queue.append(3)
queue.append(4)

# Print the content of the queue
print(queue)

# Pop elements from the list 
print('Elements popped from the queue')
print(queue.pop(0))
print(queue.pop(0))
print(queue.pop(0))

# Print the content of the queue
print('Content of the list: ')
print(queue)