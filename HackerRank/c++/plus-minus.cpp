// https://www.hackerrank.com/challenges/plus-minus/problem
#include <bits/stdc++.h>
#include <ostream>

using namespace std;

vector<string> split_string(string);

// Complete the plusMinus function below.
void plusMinus(vector<int> arr) {
    int number_of_elements = arr.size();
    double positive=0.0, negative=0.0 , zeros =0.0;
    for(int i=0; i< number_of_elements; i++)
    {
        if(arr[i] == 0)
            zeros += 1.0;
        else if (arr[i] > 0)
            positive +=1.0;
        else
            negative+=1.0;
    }
    // Calculate the fractions of the positive, negative numbers and 
    // numbers equals to 0. 
    positive = positive / number_of_elements;
    negative = negative / number_of_elements;
    zeros = zeros / number_of_elements;
    // Print results
    cout << positive << endl;
    cout << negative << endl;
    cout << zeros << endl;

}

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string arr_temp_temp;
    getline(cin, arr_temp_temp);

    vector<string> arr_temp = split_string(arr_temp_temp);

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        int arr_item = stoi(arr_temp[i]);

        arr[i] = arr_item;
    }

    plusMinus(arr);

    return 0;
}

vector<string> split_string(string input_string) {
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}

