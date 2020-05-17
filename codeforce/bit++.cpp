// http://codeforces.com/problemset/problem/282/A
#include <iostream>
using namespace std; 

int main()
{
    int number_of_query; 
    int final_result = 0;
    const string POST_INCREMENT = "X++";
    const string PRE_INCREMENT = "++X";
    const string PRE_DECREMENT = "--X";
    const string POST_DECREMENT = "X--";
    string query;
    cin >> number_of_query;
    while(number_of_query--)
    {
        cout << "query:"<<endl;
        cin >> query;
        if(query == POST_INCREMENT || query == PRE_INCREMENT)  
            final_result++;
        else if(query == POST_DECREMENT || query == PRE_INCREMENT)
            final_result--;
    }
    cout <<final_result<<endl;
    return 0; 
}