/*
Given an array of strings, return another array containing
all of its longest strings.

Example
  For inputArray = ["aba", "aa", "ad", "vcd", "aba"], the output should be
  solution(inputArray) = ["aba", "vcd", "aba"]
*/

vector<string> solution(vector<string> inputArray) {
    // get the size of the longest string
    int longest_size = 0;
    int size = inputArray.size();
    
    for(int i =0; i< size; i++)
    {
        if (longest_size < inputArray[i].size()){
            longest_size = inputArray[i].size();
        }
    }
    
    vector<string> solution;
    for(int i =0; i< size; i++)
    {
        if (longest_size == inputArray[i].size()){
            solution.push_back(inputArray[i]);
        }
    }
    return solution;
}
