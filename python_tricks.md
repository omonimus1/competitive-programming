source: https://neetcode.io/courses/lessons/python-for-coding-interviews

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

#### Array slicing unpacking, enumerating, zipping and custom sorting 
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

Enumeration to have both indexes and value:
```
# output:
# 0 2
# 1 4
# 2 6
nums = [2, 4, 6]
# With index and value
for index, number in enumerate(nums):
    print(index, number)
```
**critical zipping**: it prints just in parallel, index by index. If there is a difference in terms of indexes, it stops until there is a 1-1 matching across the two arrays, and and index is still available and valid in both arrays.
```
# output:
# 1 2
# 3 4
# 5 6
nums1 = [1, 3, 5]
nums2 = [2, 4, 6]
for n1, n2 in zip(nums1, nums2):
    print(n1, n2)
```

**custom sorting**: sort by size of string (element n of the array)
```
# sort by lenght of string
arr = ["apple", "kiwi", "banana", "fig", "strawberry"]
arr.sort(key=lambda i: len(i))
print(arr)

# sort by element i
arr = [5, 4, 7, 3, 8]
arr.sort(key=lambda i: i)
print(arr)

# sort by typle -> for example print students based on marks.
# [('Bob', 92), ('Alice', 85), ('Charlie', 78)]
students = [
    ("Alice", 85),
    ("Bob", 92),
    ("Charlie", 78)
]
students.sort(key=lambda x: x[1], reverse=True)
print(students)

# sort elements of hashmaps.
scores = {"Alice": 85, "Bob": 92, "Charlie": 78}
sorted_scores = sorted(scores.items(), key=lambda x: x[1])
print(sorted_scores)

# sort list by calendar dates.
dates = ["2024-01-15", "2023-12-01", "2024-02-03"]
dates.sort(key=lambda x: x.split("-"))
print(dates)

# sort file name:
files = ["file10.txt", "file2.txt", "file1.txt"]
files.sort(key=lambda x: int(x[4:-4]))
print(files)
```
