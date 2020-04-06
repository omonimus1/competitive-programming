// https://practice.geeksforgeeks.org/problems/queue-designer/1
// Functions of the solution
queue<int>_push(int arr[],int n)
{
    // Create a queue
    queue<int>my_queue;
    // Push(insert) every element of the array inside the queue
    for(int i =0; i< n; i++)
        my_queue.push(arr[i]);
        
    return my_queue; 
    
}

void _pop(queue<int>s)
{
    //print front and dequeue for each element until it becomes empty
    while(!s.empty())
    {
        //Print front(first)element of the queue
        cout <<s.front() << " ";
        // Remove first element of the queue
        s.pop(); 
    }
} 