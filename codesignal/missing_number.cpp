// https://app.codesignal.com/interview-practice/task/PLCrGrJmBxQdj8QKX/
int missingNumber(std::vector<int> arr) {
    sort(arr.begin(), arr.end());
    int len = arr.size();
    for(int i =0; i < len; i++)
    {
        if(arr[i] != i)
            return i; 
    }
    
    return 1+arr[len-1];
}
