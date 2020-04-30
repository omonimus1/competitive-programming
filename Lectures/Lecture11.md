## Set

Is an associative container in which each element has to be unique because the value of the element identifies itself. 

```
set <int, greater <int>> my_set;         

```

Every time we add a new element in the set using the insert() method, the set will be sorted.

As all the other STL Containers(vector, stack, queue, map etc), also the set has an emplace method, that allows to insert a new value.

### Difference between emplace and insert in C++ STL

Both emplace and insert are used to insert a new element in the container, the main difference is that emplace avoids an unnessary copy of the object. 

Emplace insert an element using in-placce construction strategy.  It increases the size of the container by 1 and return a pointer of pair, where the first element of the pair is an iterator pointing to the position of the inserted element, 2nd returns a bollena variable indicating an already present or newly created element.

For primitive data types(int, char etc), it does not matter which one we use, but in case we use vectors sets or any other container of objects, the use of emplace is preffered for efficiency reasons. 

[Set in GeekForGeeks](https://www.geeksforgeeks.org/set-in-cpp-stl/)
[Set in C++ reference](https://en.cppreference.com/w/cpp/container/set)

## Unordered set

The unordered set is a  data-structure impkemented using an has table, where keys are hasjed into indiced of the hash table ot that the insertion is always randomized. 

All the operation in an onodered takes takes O(1) time or O(n) in the worst case senario.

The unordered_set cna contain key of any type.

```
// declaring set for storing  
unordered_set <string> stringSet ;
```
[Unordered Set in GeekForGeeks](https://www.geeksforgeeks.org/unordered_set-in-cpp-stl/)
[Unordered Set in C++ reference](https://en.cppreference.com/w/cpp/container/unordered_set)

## Unordered multiset

An issue with the unordered set is that is not possible to store dupliace entries in that data structure.

TO handle any duplication, we can use instead unordered_multiset.

```    unordered_multiset<int> ums1;
```

## Map

Map is an associative container where every value is associated with ONE and just ONE key. 

```map<int, int> my_map;```
[!mapVideo](https://youtu.be/kDwXAmLz47w)
[MAP - from GeekForGeeks](https://www.geeksforgeeks.org/map-associative-containers-the-c-standard-template-library-stl/)
[MAP- c++ Reference](http://www.cplusplus.com/reference/map/map/)


Basic functions associated with Map:
* begin() - Returns an iterator to the first element in the map
end() - Returns an iterator to the theoretical element that follows last element in the map
* size() - Returns the number of elements in the map
* max_size() - Returns the maximum number of elements that the map can hold
* empty() - Returns whether the map is empty
* insert(keyvalue, mapvalue) - Adds a new element to the map
* erase(iterator position) - R emoves the element at the position pointed by the iterator
erase(const g)- Removes the key value 'g' from the map
* clear() - Removes all the elements from the map


## Unordered map

The unordered map is an associated contaier that stores elememns formed by combination of key valye and a mapped value, as dicionaries. 

```
unordered_map<string, int> umap;
// inserting values by using [] operator
umap["my_id"] = 1023232;
umap["Practice"] = 200;
umap["Contribute"] = 100;

// Traversing an unordered map
for (auto x : umap)
    cout << x.first << " " << x.second << endl;

```

## Unordered_map vs unordered_set 
In unordered_set, we have only key, no value, these are mainly used to see presence/absence in a set. For example, consider the problem of counting frequencies of individual words. We can’t use unordered_set (or set) as we can’t store counts.

The unordered map is implemend using Hash Table, the key provided to the map are hashed into indices of hashtable and this is why performance of data structured dependes on hash functions. 
However, in most cases search, insert and delete operation from an hashtable are O(1).

