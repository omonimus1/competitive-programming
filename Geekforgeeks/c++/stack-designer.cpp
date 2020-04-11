// https://practice.geeksforgeeks.org/problems/stack-designer/1
/* _push function to insert elements of array to
   stack
*/
stack<int>_push(int arr[],int n)
{
    stack<int>s;
    for(int i =0; i<n; i++)
        s.push(arr[i]);
    return s; 
   //return a stack with all elements of arr inserted in it
}

/* _pop function to print elements of the stack
   remove as well
*/
void _pop(stack<int>s)
{
    //print top and pop for each element until it becomes empty
    while(!s.empty())
    {
        cout << s.top() << " ";
        s.pop(); 
    }
}