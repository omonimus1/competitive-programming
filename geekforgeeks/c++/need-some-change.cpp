void swapElements(int arr[], int sizeof_array){
    int temp;
    for(int i=0; i< sizeof_array-2; i++)
    {
        temp = arr[i+2];
        arr[i+2] = arr[i];
        arr[i] = temp;
    }
}