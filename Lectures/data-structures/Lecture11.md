# Set, bitset, map

## Set

Is an associative container in which each element has to be unique because the value of the element identifies itself. 

```
//  https://practice.geeksforgeeks.org/problems/set-operations/1
set<int> setInsert(int arr[],int n)
{
    set<int>s;
    
    for(int i=0; i< n; i++)
        s.insert(arr[i]);
    
    return s;
}

void setDisplay(set<int>s)
{
    //Your code here to display elements of s
    set <int> :: iterator itr;
    for(itr = s.begin(); itr!= s.end(); itr++)
        cout << *itr << " ";
    cout<<endl;

    /*
        Second version
        for(auto x : s)
            cotu << x << " ";
        cout <<endl;
    */
}

void setErase(set<int>&s,int x)
{
   //write if condition here
   if(s.erase(x))
   {
       s.erase(x);
       cout<<"erased "<<x<<endl;

   }
    else
        cout<<"not found"<<endl;
}      
```

Every time we add a new element in the set using the insert() method, the set will be sorted in asceding order (Es: 2,5,7,13,999...). If we want the the set will automaticcally order the elements in desceding order, we will need to declare our set in the following way: ``` set<int, greater<int>> set_name; ```

As all the other STL Containers(vector, stack, queue, map etc), also the set has an emplace method, that allows to insert a new value.

### Verify if an element exists in a set
```
    // count(): retrun 1 if x exists, 0 otherwise
    mySet.count(x); 
```

### Difference between emplace and insert in C++ STL

Both emplace and insert are used to insert a new element in the container, the main difference is that emplace avoids an unnessary copy of the object. 

Emplace insert an element using in-placce construction strategy.  It increases the size of the container by 1 and return a pointer of pair, where the first element of the pair is an iterator pointing to the position of the inserted element, 2nd returns a bollena variable indicating an already present or newly created element.

For primitive data types(int, char etc), it does not matter which one we use, but in case we use vectors sets or any other container of objects, the use of emplace is preffered for efficiency reasons. 

[Set in GeekForGeeks](https://www.geeksforgeeks.org/set-in-cpp-stl/)
[Set in C++ reference](https://en.cppreference.com/w/cpp/container/set)

## Count number of distinct element in an array

```
int countDistictElements(int arr[], int n)
{
    unordered_set<int>s;
    for(int i =0; i< n; i++)
    {
        s.inseert(arr[i]);
    }

    return s.size();
}
```

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



## Multiset

Is a set version that allows to have more than one time the same element. 
```
multiset<int>s;
s.insert(5);
s.insert(5);
s.insert(5);
cout << s.count(5) << "\n"; // 3
s.erase(5); // Remove all the 5s present in the multiset
```

## Unordered multiset

An issue with the unordered set is that is not possible to store dupliace entries in that data structure.

TO handle any duplication, we can use instead unordered_multiset.

```   
    //  empty initialization 
    unordered_multiset<int> ums1; 
  
    //  Initialization by intializer list 
    unordered_multiset<int> ums2 ({1, 3, 1, 7, 2, 3, 
                                   4, 1, 6}); 
  
    //  Initialization by assignment 
    ums1 = {2, 7, 2, 5, 0, 3, 7, 5}; 
```

## Bitset

* It is an array whose each values is either 0 or 1.
* It requires less memory that ordinar arrays, because each element ina  bitset only uses one bit of memory. 
```
bitset<3>s;
s[0] = 1;
s[1] = 1;
s[2] = 0;

// It will store from left to right
bitset<10>  myBitSet(string("0010011010"));
cout << myBitSet[4]; // Will print 1
cout << myBitSet[5];; // Will print 0

// Print number of 1s.
cout << "number of set bits: "<< myBitSet.count() <<endl;
```

Having two bitsets, I can directly do the and, or or xor operator between them;
```
bitset<10> a(string("0010110110"));
bitset<10> b(string("1011011000"));
cout << (a&b) << "\n"; // 0010010000
cout << (a|b) << "\n"; // 1011111110
cout << (a^b) << "\n"; // 1001101110
```
##### Source Competitive Programming Handbook

## HASHTABLES / MAP

Hash table (or map) is onE of the most used and useful data stucture in Computer Science. It works on the base of the key-value concept. 

Few of hashtables application :
1. Create a  dictionary
2. Compilers (for keep the mapping between a variable id and its memory address).
3. Routers
4. Caches, especially browser cache. 
5. Keep track of frequencency of elements of our input. 
6. Database indexing
7. Criptography.
8. Retrieve data from a database. 


An Hastable has high performance for search, insert and delete operations, all of them in O(1) time.

Once we have both extremely small and extremely big values, O(log(N)) could be evens slower that O(1) time.
#### source: algo and DS geeskforgeeks course


## Map

Map is an associative container where every value is associated with ONE and just ONE key. 

```
// create sorted_map
map<string, int> my_map;

my_map.insert(pair<string, int>("Davide",15));
my_map.insert(pair<string, int>("Giuseppe",16));


if(my_map.count("Davide"))
    cout << "Davide is present"<<endl;
else
    cout<< "Davide is not present <<endl;

// Print key and values stored in the map 
for (auto x : my_map) 
    cout << x.first << " " << x.second << "\n";

// Remove map element by key
my_map.erase("Giuseppe);

// using clear() to erase all elements in map 
my_map.clear(); 
```

* [MAP - from GeekForGeeks](https://www.geeksforgeeks.org/map-associative-containers-the-c-standard-template-library-stl/)
* [MAP- c++ Reference](http://www.cplusplus.com/reference/map/map/)


Basic functions associated with Map:
* **begin()** - Returns an iterator to the first element in the map
end()**  - Returns an iterator to the theoretical element that follows last element in the map
* **size()**  - Returns the number of elements in the map
* **max_size()**  - Returns the maximum number of elements that the map can hold
* **empty()**  - Returns whether the map is empty
* **insert(keyvalue, mapvalue)**  - Adds a new element to the map
* **erase(iterator position)**  - R emoves the element at the position pointed by the iterator
erase(const g)** - Removes the key value 'g' from the map
* **clear()**  - Removes all the elements from the map

## Direct acess table

We coud potentially reproduce the map using a direct access table.
We could be an array of boolens, that indicates if a specifc key is present or not.
Of couse, the direct acess table does not work with lots of data or big keys; 

As well, it does not work where the key is a sting, because we will be using indexes of our boolean array as keys.

## Collision Handling - Chaingin - Open Adressing

Requirements for this section:
* Know what the meaning of hashing.
* Know what is an hash function.

Birthday paradox says: if there are 23 people are in the same room, there is an high probability that two people will have the same birthday.
If the number of people will go up to 70 people, the probability of having two people with same birthday is going to be 99%. 

If we know in advanced all the keys of our dicitonaty, we can exploit the Perfect hashing rule, an advanced method that guarantees that there will not any collision with the keys stored in our dictionary, or map.

Chaining and open addressing are two methods used in collision handling.
In chaining, we chain of collating iteam, in open addressing, we use an array to manage the key-values relationship, if any slot is busy, we just store this pair somewherelse in the array (in a different slot).

## Chaining

The idea is that we maintain an array of linked list.
Suppose that the hash function hash(key) is: key % 7, and the keys are {50, 21, 58, 17, 15, 49, 22, 23, 25 }.
The size of array of linkest list is usually a prime number greater than N, where N is the operand of the modul operation (7 in this case), but close enough to N, to make sure that we have enough space to manage the possible collisions. 

Why the hash function hash(key) is : key % 7, we can of course use any number instead 7, but in the specific, if the module operand (in this case 7), is a prime number, we can less change to have a collision. 

When a collision happens, we insert a new iteam at the end of the linked list. 

So, let's start to understand how thinks works here:
* We have the first key, 50. 50 % 7 is 1 (remainder), I insert 50 at the index 1 of the array of linked list.
* 21 % 7 is 0, so I put 21 at the index 0 of the array of linked list.
* 58 % 7 is 2, so put 58 at index 2;
* 17 % 7 is 3, so put 17 at index 3;
* 15 % 7 has remainder 1, we see that the slot at index 1 is alrady budy, so we add another node at the linked list present at the index 1, with head 50 (first elemet added at index 1). 
And so on...

Let's analyze the chaining performances. Let's define:
* a : number of slots (7 in this case, from 0 to 6).
* b: number of keys to be inserted/

* The load factor is defined as ``` b/a```; We always hope that the load factor is smaller as possible (this means that we will have just a small number of collisions).

- The expected chain lenght is not predictible. It higly depends from the load factor.
If, the number of slots (prime operand of the module operation) is equals to the number of keys to inders, in that case we could have the following performance:
* Expected time to search: O(1)+ chain lenght (time used to traverse the chain).
* Delete time: O(1 + chaing lenght)

We could also use other datastructure for storing chains, these data-structures could be: linked listy, dynamic sized array (vector), self-balancing BST(AVL tree, RedBlock tree).

###### Source: collision handling, GeeksForGeeks. 

## Open Addressing

Open Addressing, as chaining, a way to manage hashing collisions. 
A pro of open addressing is that it is very chache friendly. 

Open addressing could be implemented with linear proibing or double chaining/



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

