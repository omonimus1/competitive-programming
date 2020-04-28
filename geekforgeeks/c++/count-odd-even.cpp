void countOddEven(int arr[], int sizeof_array)
{
    
    // your code here
    unsigned long int odds=0, evens=0;
   for(int i =0; i< sizeof_array; i++)
   {
        if(arr[i] %2 == 0)
            evens++;
        else
            odds++;
   }
    cout<<odds << " " <<evens<<endl;
}