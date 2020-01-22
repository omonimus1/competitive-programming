/*      PalindromarrayApplication.cpp
	Summary: Console Application that verify if a vector is Palindrome or Not. 
	Author: Davide Pollicino
	Date: 31/12/2019
*/
#include <iostream>
#include<vector>
using namespace std; 

bool isTheArrayPalindrome( vector<int> myDynamicArray); 
void print_result(bool result);


int main()
{
	bool resultPalindromeElaboration = false; 
	vector<int> myDinamicArray;

	// Test 1 -> The array is Palindrome
	myDinamicArray = { 1, 2 , 3 , 2 ,1 };
	resultPalindromeElaboration = isTheArrayPalindrome(myDinamicArray);
	print_result(resultPalindromeElaboration);

	// Test 2 -> The vector is NOT Palindrom
	myDinamicArray = { 1, 2 , 3 , 2 ,4 };
	resultPalindromeElaboration = isTheArrayPalindrome(myDinamicArray);
	print_result(resultPalindromeElaboration);
}


bool isTheArrayPalindrome(vector<int> myDynamicArray)
{	
	for (int i = 0; i < myDynamicArray.size() / 2; i++)
	{
		if (myDynamicArray[i] != myDynamicArray[myDynamicArray.size() - i - 1])
			return false; 
	}
	return true;	
}


void print_result(bool result)
{
	if (result)
		cout << "Palindrome" << endl; 
	else
		cout << "Not Palindrome" << endl; 
}
