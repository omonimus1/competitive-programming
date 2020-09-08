// https://www.hackerearth.com/practice/algorithms/searching/linear-search/practice-problems/algorithm/repeated-k-times/submissions/
#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;

int main() {
	int n;
	cin >> n;
	
	int arr[n];
	for(int i =0; i < n; i++)
		cin >> arr[i];

	int frequency;
	cin >> frequency; 

	sort(arr, arr+n);
	unordered_map<int, int>mp; 
	for(int i=0; i < n; i++)
		mp[arr[i]]++;

	for(int i =0; i < n; i++)
	{
		if(mp[arr[i]] ==  frequency)
		{
			cout << arr[i]<<endl;
			break;  
		}
	}
	return 0; 
}


