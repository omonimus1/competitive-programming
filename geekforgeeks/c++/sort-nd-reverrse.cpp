// https://practice.geeksforgeeks.org/problems/sort-and-reverse-vector/1
vector<int> sortVector(vector<int>v)
{
   //Your code here. Use library function
   sort(v.begin(), v.end());
    return v;
}
vector<int> reverseVector(vector<int>v)
{
     //Your code here. Use library function
    reverse(v.begin(), v.end());
    return v;
}