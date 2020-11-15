## Stings

* trim(): allows to remove the whitespaces in a string
* string to int()
* int / float to string: ```string word = to_string(variable_to_convert);```

## Char in C/C++ vs Java
* Char: is a single character
* A char in C/C++ uses 8 bits in memory, because Cand C++ uses the ASCII value;
* Java stores each char in UTF-16 encoding, usign 16 bits to store a single characters.

Create and use a string in C:
```
// Create string in run-time; We cannot create the aeray of chars iwthout initialize and then assign the full string
char str[] = "davide"
cout << str;
cout << sizeof(str); //Output wil be 6 and not 7, because in C, the compiler put a \0 at the end of the string;

cout << strlen(str)<<endl;


// Initialie string after char[] is created (without generate erros)
char surname[10];
strcpy(surname,"pollicino");
```

string in C++ is a class; where a class has a list of methods that are accessible by the '.' (dot) operator.\

### Foundamentals methods adn foreach in strings
* substr():
* find():
* getline() :   getline(cin, full_name); 
Getline Allows to store all the string included whitespaces; We can also use a third optional parameter in the getline used to indicated when the line must be stopped to be read. Suppose that we want to read our line until we do not read the dollar sign '$'; getline(cin, full_name, '$'). By default, the third parameter is the new line. 

for (char letter : full_name)
    cout <<letter;

In the english alphabet there are 26 letters (characters).

## Print values ASCII value of a character
cout << (int)'a';

## Print frequency of each character in a string, in according to the alphabet order

Everytime we heard the word frequency, we automatically think about hashmap. It is correct, 
but in this case, we can simply exploit an array the ASCII value of each caracter to solve this 
problem in O(N) time and O(1) space; We we will see that we will use always in this case a support array
made by 26 elemements in any case, independently from the input size. For this reason we consider it as constant. 

Suppose to have the string  "ddaviideee", the output will be:
a : 1
d : 2
e : 3
i : 2
v : 1
```
string name = "ddaviideee";
// Creat an array of 26 elements and set them to 0. 
int count[26] = {0};
for(int i=0; i < name.size(); i++)
{
    // A will be at the index 0, b at the index 1 and so on
    count[name[i]-'a']++;
}
for(int  i=0; i< 26; i++)
{
    // If the character is present at least once in the string (so has frequency >0)
    if(count[i] >0)
        cout << char(i+'a') << " " << count[i]<<endl; 
}
```



## Check for Anagram 

Given two strings, check if these two strings are anagrams of each other. This means that nay characters present in the string1, with a frequency F, must be present also in the string string2 with the same frequency F. 

```
// O(NlogN) time (time required by the sort function)
bool are_anagrams(string s1, string s2)
{
    if(s1.size() != s2.size())
        return false;

    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    return (s1==s2);
}
```
A secondf **better** solution is the standard counting character approach, comparing the frequencies of 
each character in both string

```
const int CHAR = 256;
bool areAnagram(string &word1, string &word2)
{
    int len1 = word1.size();
    int len2 = word2.size();
    if(len1 != len2)
        return false; 

    int count[CHAR] = {0};
    for(int i =0; i< len1; i++)
    {
        count[word1[i]]++;
        count[word2[i]]--;
    }

    for(int i =0; i < CHAR; i++)
    {
        if(count[i] != 0)
           return false; 
    }
    return true; 
}
// Source: GeeksForGeeks
```

## Leftmost repeating character

Efficient Solution:

```
const int CHAR =256;
int IndexLeftMostRepeatingChar(string word)
{
    bool visite[CHAR] = {false};
    // Default result values is -1: means that there are NO repeating chars;
    int result = -1;
    // we traverse from right to the left, for find the LEFTMOST; 
    for(int i = word.size()-1; i >=0; i--)
    {
        if(visited[word[i]])
            result = i;
        else
            visited[word[i]] = true;
    }
    return result;
}
```

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

## Leftmost NON repeating character

* The **non** repeating character is a character with frequency =1; 

Naive / easy solution; O(N^2)
```
int indexNonRepeatingChar (string word)
{ 
    int len = word.size();
    for(int i =0; i < len; i++)
    {
        bool flag = false; 
        for(int ij = 0; j < len; j++)
        {
            if( i!= j && word[i] == word[j])
            {
                flag = true;
                break; 
            }
        }
        if(flag == false)
            return i; 
    }
    return -1; 
}
```
Optimized Solution: O(N)
```
int GetIndeNonRepeatingChar (string word)
{
    cont int CHAR = 256;
    int counter_frequency[CHAR] = {0};
    int len = word.size(); 

    for(int i =0; i < len; i++)
        counter_frequency[word[i]]++;
    for(int i =0; i < len; i++)
        if(counter_frequency[word[i]] == 1)
            return i; 
    
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

## Reverse words in the string (in space)
This is a quite popular problem, where we have to reverse the order of the words in a sentence, without
actually recerve the order of the characters of any word;
Suppose to have the sentence: "This is Competitive Programming", the output will be: "Programming Competitive is This". Sometimes, you will also find a small variant of this problem, where each word will be divided by a dot '.';

A first/naive approach is:
1. Creat a stack 
2. Iterate the string and push each word in a stack
3. Pop each element from the stack and append it to an initially empty string (adding a whitespace after each pop);
4. Print the result. 

An other approach (more efficient) is to:
1. Reverse all the single words inside the string 
2. Reverse at the end ALL the string (and not just the subwords);
```
void reverse(char word[], int start, int end)
{
    while(start <= end)
    {
        swap(word[start], word[end]);
        start++;
        end--; 
    }
}

void reverseSingleWords(char sentence[], int len)
{
    int start = 0; 
    for(int end =0; end< len; end++)
    {
        if(sentence[end] != ' ')
        {
            reverse(sentence, start, end-1);
            start = end +1;
        }
    }
    // Reverse last word (because it does not have any whitespace)
    reverse(sentence, start, len-1);
    // Reverse ALL the full sentence
    reverse(sentence, 0, len-1);
}
```

### Pattern Searching

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
### Rabin karp Algorithm
* Rabin karp: same time complexity of the Naive Pattern search, but easier to implement. It uses the idea or rolling hash to optimize the algorithm. 

It's worst case is N^2, but in general, Rabin Karp is faster than Naive search and allows us to save lots of tiem when we have a long sentence and a long substring to compare, too see if there  will be one or more occurrency of the same pattern.

Like the Naive algorithm it slide the pattern one by one, but instead to compare each character, the Rabin kARP 
compare the has values of the two string windows, saving lots fo comparison, especially when we have long patterns.
If the two hashes values matches, we compare the characteres otherwise, we skip to the next window. 

* **Spurius hit**: it's when the two substring have same hash value but do not match; 
* **rolling hash**: means that we calculate the current hash value of our window based on the last hashvalue calculated. 

It actually looks like that it has the same time complexity of Naive but it doesn't, because we save up time to calculate the has of a window string using also the past hashes (this is the concept of roll hashing).

* KMP : O(n). It is one of the most popular algorithm in computer Science.
* Suffix tree : O(m). Suffix tree is not an algorithms but a data-structure. 

 RK algorithm is also used not just to find in a specific substring exists in another string, but also used to 
 get all the starting index where all the occurrencies of our pattern exists in the main string;




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
