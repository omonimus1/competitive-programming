// https://practice.geeksforgeeks.org/problems/step-by-step-condition/1


// N is the input integer
void isDivisibleByPrime(int n){
    // Your code here
    if(n %11 == 0)
        cout<<"Eleven"<<endl;
    else if(n % 3 == 0)
        cout<<"Three"<<endl;
    else if(n % 2 == 0)
        cout<<"Two"<<endl;
    else
        cout<<"-1"<<endl;
}