#include <iostream>
using namespace std;

int main()
{
    int test_cases=1;
    string word= "rotor";
    bool is_lapin;
    // cin >> test_cases;
    while(test_cases--)
    {
       // cin >> word;
        is_lapin = true;
        int end_first_half;
        // If the size of the string is odd, ignore the middle element  
        int word_size = word.size();
        if(word_size % 2 == 0)
        {
            end_first_half = word_size /2;        }
        else
        {
            (end_first_half = word_size /2) -1;
        }
        
        int start_second_half = end_first_half;
        for(int i =0; i<  end_first_half; i++)
        {
            cout <<"first half "<<word[i] << "second half "<<word[start_second_half]<<endl;
            cout << "end point is: " <<start_second_half;
            cout << "index first half is "<< i<<endl; 
            if(word[i] !=  word[start_second_half])
            {
                is_lapin =  false;
                cout<<"No"<<endl;
                break;  
            }
            start_second_half++;
        }
        if(is_lapin)
            cout<<"Yes"<<endl;
    }
    return 0;
}