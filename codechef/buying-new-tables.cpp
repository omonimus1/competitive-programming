#include <iostream>
#include <vector>
using namespace std;

void solve_test()
{
    int number_options, budjet;
    int width, heigth, price;
    int max_width = 0, max_heiht = 0;
    cin >> number_options >> budjet;
    while (number_options--)
    {
        cin >> width >> heigth >> price;
        if (price > budjet)
            continue;
        else
        {
            // The price is within the budjet
            if ((max_heiht * max_width) < (heigth * width))
            {
                max_width = width;
                max_heiht = heigth;
            }
        }
    }

    if (max_width == 0 && max_heiht == 0)
        cout << "no tablet" << endl;
    else
        cout << max_heiht * max_width << endl;
}

int main() {
    int test_cases;
    cin >> test_cases;

    while (test_cases--)
        solve_test();
    return 0;
}
