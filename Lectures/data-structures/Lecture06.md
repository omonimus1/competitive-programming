## Stings

* trim(): allows to remove the whitespaces in a string
* string to int()
* int / float to string: ```string word = to_string(variable_to_convert);```

* **Naive Pattern Searching:** we slide the pattern over text one by one and check for a match. If a match is found, then slides by 1 again to check for subsequent matches.

### How to search substring
```
void search(string word, string  subword)
{
    int M = word.size();
    int N = subword.size();
    int frequency = 0;

    /* A loop to slide pat[] one by one */
    for (int i = 0; i <= N - M; i++) {
        int j;

        /* For current index i, check for pattern match */
        for (j = 0; j < M; j++)
            if (txt[i + j] != pat[j])
                break;
        // if pat[0...M-1] = txt[i, i+1, ...i+M-1]
        if (j == M)
        {
            cout << "Pattern found at index "<< i << endl;
            frequency++;
        }
    }
    cout << "We found the substring exatcly " << frequency << " times"<<endl;
}
```


### Longest Common Subsequence


### Hamming distance problem

Find the number of different chars between equa-length strins.


String Alignment  problem definition: 

#### Needleman-Wunsch’s algorithm

### Longest Palindrome substring


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
