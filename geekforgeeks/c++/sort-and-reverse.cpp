vector<int> sortVector(vector<int>v)
{
   //Your code here. Use library function
    sort(v.begin(), v.end());
    return v;
}
vector<int> reverseVector(vector<int>v)
{
     // We could also use: reverse(v.begin() , v.end());
     sort(v.begin(), v.end(), greater<int>());
    return v;
}