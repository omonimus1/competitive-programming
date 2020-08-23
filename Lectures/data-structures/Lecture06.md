## Stings

* trim(): allows to remove the whitespaces in a string
* string to int()
* int / float to string: ```string word = to_string(variable_to_convert);```

## Check for Anagram 

Given two strings, check if these two strings are anagrams of each other. This means that nay characters present in the string1, with a frequency F, must be present also in the string string2 with the same frequency F. 

```
bool are_anagrams(string s1, string s2)
{
    if(s1.size() != s2.size())
        return false;

    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    return (s1==s2);
}
```

## Leftmost repearting character

```
int index_leftmost_repeating_char(string s)
{
    unordered_map<char, int>mp;
    int i, len = s.size();
    for(i=0; i < len; i++)
        mp[s[i]]++;

    // Return index of the most left repating char 
    for(i=0; i < s; i++)
    {
        if(mp[s[i] > 1])
            return i; 
    }
    // All elements are unique
    return -1; 
}
```

## OR, NAIVE APPROACH
```
int index_leftmost_repeating_char(string s)
{
    int len = s.size();
    for(int i=0; i < len-1; i++)
    {
        for(int j = i+1; j< len; j++)
        {
            if(s[i] == s[j])
                return i; 
        }
    }
    return -1; 
}
```

## Check if two string are the rotation of each other

```
/* Function checks if passed strings (str1 
   and str2) are rotations of each other */
bool areRotations(string str1, string str2) 
{ 
   /* Check if sizes of two strings are same */
   if (str1.length() != str2.length()) 
        return false; 
  
   string temp = str1 + str1;  
  return (temp.find(str2) != string::npos); 
} 

```


* **Naive Pattern Searching:** we slide the pattern over text one by one and check for a match. If a match is found, then slides by 1 again to check for subsequent matches.


## How to search substring - Target search approaches

n: length of the biggest string
m: length of the substring to search

There are many algorithms for pattern search, few of them are:
* Naive: O((n-m+1)*m). In Naive approach, there is no backtracking.
```
// The vector will contains the first index of where a valid pattern is found
vector<int> search_with_naive(string word, string sub)
{
    int n = word.size();
    int m = sub.sizea();
    vector<int>solution; 
    int j, i;
    for(i =0; i  <= n-m; i++)
    { 
        for(j=0; j < m; j++)
        {
            if(word[i+j] != sub[j])
            { 
                break; 
            }
        }
        if(j==m)
            solution.push_back(i);
    }
    return solution; 
}
```
We can actually optimize the Native solution to O(N) int he follwing way:
```
// The vector will contains the first index of where a valid pattern is found

// THIS IS PSEUDOCODE
vector<int> search_with_naive(string word, string sub)
{
    int n = word.size();
    int m = sub.sizea();
    vector<int>solution; 
    int j, i;
    for(i =0; i  <= n-m; i++)
    { 
        // We manage the increment
        for(j=0; j < m;)
        {
            if(word[i+j] != sub[j])
            { 
                break; 
            }
        }
        if(j==m)
            solution.push_back(i);
        // We increment I in according with with the match ror non-match of the pattern
        if(j==0)
            i+=1;
        else 
            i += i+j; 
    }
    return solution; 
}
```

* Rabin karp: same time complexity of the Naive Pattern search, but easier to implement. It uses the idea or rolling hash to optimize the algorithm. 

It's worst case is N^2, but in general, Rabin Karp is faster than Naive search and allows us to save lots of tiem when we have a long sentence and a long substring to compare, too see if there  will be one or more occurrency of the same pattern.

With Rabin Karp, we do not compare the characters one by one, we instead wait compare the has values betweent the currenct window(text slice) and the pattern. 

 If the two hashes values matches, we compare the characteres otherwise, we simply skip to the next window. 

 It actually looks like that it has the same time complexity of Naive but it doesn't, because we save up time to calculate the has of a window string using also the past hashes (this is the concept of roll hashing).



* KMP : O(n). It is one of the most popular algorithm in computer Science.
* Suffix tree : O(m). Suffix tree is not an algorithms but a data-structure. 



### Longest substring with all distinct characters

* If the string is empty, the result is 0;
* If all the characters are equals, the answer is going to be 1.

For this problem, I will provide you different solutions with different time complexity but same Space complexity. 

## Time complexity

Considering that the longest_distinct function has a time complexity O(n^2), and it is calling the function are_distinct(), that has O(N) complexity, the total total time complexity of this Naive approach is: O(N^3). 
```

bool are_distinct(string word, int i, int j)
{
    // Create a visited vector of bools
    vector<bool>visited(256);
    for(int k = i; k <=j; k++)
    {
        if(visited[str[i] == true)
            return false;
         visited[str[i]] = true; 
    }
    return true; 
}

// Return the length of the longest substring with all differnt characters

int longest_distinct(string word)
{
    int len = word.size();
    int result = 0; 
    // Iterate thought all the possible substrings
    for(int i =0; i < len; i++)
    {
        for(int j=0; j < len; j++)
        {
            if(are_distinct(word, i, j))
                result = max(result, j-i+1);
        }
    }

    return result; 
}

```

### Second Solution with Just O(N^2) complexity 

Let's see a faster approach to search the lenght of the longest string with different characters.
```
int longestDistinct(string sentence)
{
    int i, j, result = 0;
    int len = sentence.size();
    for(int i =0; i < len ; i++)
    {
        vector<bool>visited(256);
        for(int j=i; j < len; j++)
        {
            if(visited[sentence[j]] == true)
                break; 
            else
            {
                result = max(result, j-i+1);
                visited[sentence[j]] = true;
            }
         }
    }
    return result; 
}
```
## Lexicographic Rank of a string 



## Hamming distance problem

Find the number of different chars between equa-length strins.


String Alignment  problem definition: 

## Needleman-Wunsch’s algorithm

## Longest Palindrome substring


### Suffix Array

Suffix array is a Data Structure created by Udi MAnber in 1991. Udi Manber is now one of the Google vice presidents of enginnering.

The suffix Array has similar functionalties to the Suffix Tree but much simpler to implement and even faster.
Suffix Tree has O(N) construction time while Suffix Array construction time is O(n log n).

### Suffix Tree

Suffix Tree:

Applications:

## Knuth Morris Pratt's (KMP) Algorithm


### Find The longest Repated Substring 


### Find the Longest Common substring



### Other string Matchin ALgorithm

BOye-Moore's

### Rabin-Karp Algorithnm for Pattern Searching 

* We have a string a and a pattern b to search in a;
* We know that a.siz() > b.size();
* Rabin-arp matched the has val;ues pf the pattern with the has value of current substring of text. If the has values match then only it start matching indiviidual characters. 


### KMP (Knuth Morris Pratt) Pattern Searching

* Naive pattern search is not fast enough when we have many matching characters followed by mismatching characters (false alarms).

* With the KMP algorithm, we can have a worst case time complexity of O(N).

* The optimization of KMP stands in the number of n characters that are skipped for the pattern search. A foundamental question is, how many characters do we need to skip to guarantee that a correct check is done? 
To get this answer, we pre-process pattern and prepare an integer array 
lps[] that tells us the count of characters to be skipped

* Size of lps(temp array) is = to the size of the pattern. 

![Lps example](../../images/lps/png)
##### Souce: Geeks for geeks
## Just mind that 

We can use C++ STL map<string, int> to keep track the frequency
of each word. Every time we encounter a new token (which is a string), we increase the
corresponding frequency of that token by one. Finally, we scan through all tokens and
determine the one with the highest frequency.
