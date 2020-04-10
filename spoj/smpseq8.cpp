// https://www.spoj.com/BSCPROG/problems/SMPSEQ8/
#include <iostream>
using namespace std;


void print_list(int arr[] , int size)
{
	for(int i =0; i< size; i++)
		cout << arr[i] << " ";
}

int main() {
	
	int n , m, sum_of_n = 0, sum_of_m=0;
	cin >>  n;
	int list_n[n];
	int e=1;
	
	for(int i =0; i< n; i++)
	{
		cin >> e;
		list_n[i] = e;
		sum_of_n += e;
	}
	cin >> m;
	int list_m[m];
	for(int i =0; i< m; i++)
	{
		cin >> e;
		list_m[i] = e;
		sum_of_m += e;
	}
	
	if(sum_of_n > sum_of_m)
		print_list(list_n , n);
	else
		print_list(list_m , m);

	return 0;
}