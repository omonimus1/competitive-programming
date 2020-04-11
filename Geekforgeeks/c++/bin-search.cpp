
int bin_search(int A[], int left, int right, int k)
{
    for(int i =left; i <= right; i++)
    {
         // If the element of the array is equals to the target, returns its index
        if(A[i] == k)
            return i; 
    }
    // The target has not been found
    return -1;
}