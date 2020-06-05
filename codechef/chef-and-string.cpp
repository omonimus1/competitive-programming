// https://www.codechef.com/JUNE20B/problems/XYSTR
#include<iostream>
#include <string>

using namespace std;
int get_number_of_couples()
{
    string word;
    cin >> word;
    if(word.size()==1)
        return 0;
    else if(word.size()==2)
    {
        if(word[0] == word[1])
            return 0;
        else 
            return 1;
    }
    // There are more than 3 chars in the string
    int counter = 0;
    for(int i=0; i < word.size(); i++)
    {
        if(word[i] == 'x' && word[i+1] == 'y')
        {
            i +=1;
            counter++;
        }
           
        else if(word[i] == 'y' && word[i+1] == 'x')
        {
            i+=1;
            counter++;
        }
           
    }
    return counter;

}
int main()
{
    int t;
    cin >> t;
    while(t--)
        cout << get_number_of_couples()<<endl;

    return 0;
}