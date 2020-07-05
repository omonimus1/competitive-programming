// https://www.codechef.com/JULY20B/submit/CRDGAME
#include <iostream>
using namespace std;

// Returns sum of digits of the card
int get_power_card(int number)
{
    int sum_digits = 0;
    while(number >0)
    {
        sum_digits += number % 10;
        number /=10;
    }
    return sum_digits;
}

void solve_test()
{
    int chef_point =0,  morty_point = 0;
    int chef_strength = 0, morty_strength = 0;
    int n; // number of rounds
    cin >> n; 
    int chef_card, morty_card;
    while(n--)
    {
        cin >> chef_card >> morty_card;
        chef_strength = get_power_card(chef_card);
        morty_strength = get_power_card(morty_card);
    
        if(chef_strength > morty_strength)
            chef_point+=1;
        else if(morty_strength > chef_strength)
            morty_point+=1;
        else if(morty_strength == chef_strength)
        {
            morty_point+=1;
            chef_point +=1;
        }
    }
    
    
    if(chef_point > morty_point)    
        cout << "0 " << chef_point<<endl;
    else if(morty_point > chef_point)
        cout << "1 " << morty_point<<endl;
    else
        cout << "2 " << morty_point <<endl;
}

int main() {
	long int t;
	cin >> t;
	while(t--)
	    solve_test();
	return 0;
}
