//Complete this function
void isPrime(int n)
{
    // Best case:
    if(n <=1)
    {
        cout<<"No"<<endl;
        return;
    }
    
    for(int i=2;i<=sqrt(n);i++)
    {
        //Write your logic here
        /*n is prime only if it is not divisible by any i. We will not reach till n and 1 is already discarded*/
        
        if(n % i == 0)
        {
            cout <<"No"<<endl;
            return; 
        }
    }
   cout<<"Yes"<<endl;
}