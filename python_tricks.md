# source: https://neetcode.io/courses/lessons/python-for-coding-interviews

## array
```
arr = [1, 2, 3]
print(arr)

# Can be used as a stack
arr.append(4)
arr.append(5)
print(arr)

arr.pop()
print(arr)

arr.insert(1, 7) #
print(arr)
```

#### Array slicing unpacking and enumerating
```
# Sublists (aka slicing)
arr = [1, 2, 3, 4]
print(arr[1:3])
```
**Carefull**, we must have N variables for each element of the array.
```
# Unpacking
a, b, c = [1, 2, 3]
print(a, b, c)
```

