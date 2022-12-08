/*
https://app.codesignal.com/arcade/intro/level-3/JKKuHJknZNj4YGL32/solutions
Given two strings, find the number of common characters between them.

Example

For s1 = "aabcc" and s2 = "adcaa", the output should be
solution(s1, s2) = 3.

Strings have 3 common characters - 2 "a"s and 1 "c".

*/

int solution(std::string s1, std::string s2) {
  unordered_map<char, int> m1;
  unordered_map<char, int>m2;
   
    int length_first_string = s1.size();
   int length_second_string = s2.size();
   
   int solution = 0; 
   
    for(int i =0; i< length_first_string; i++)
        m1[s1[i]] += 1;
    
    for(int i =0; i < length_second_string; i++)
        m2[s2[i]] += 1;
    
    for(auto x : m1){
        if(m2.count(x.first))
        {
            if(m2[x.first] == m1[x.first]) 
            {
              solution += m2[x.first];
            }
            else if(m2[x.first] > m1[x.first]) 
            {
              solution += m1[x.first]; 
            }
            else {
               solution += m2[x.first]; 
            }      
        }
    }
    return solution; 
}
