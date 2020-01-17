// sumMatrixFinal.cpp : This file contains the 'main' function. Program execution begins and ends there.

/*
	Author: Davide Pollicino
	Date: 27/12/2019

	Console application that generates two random matrix 10X10 and calculates the sum between them
*/

#include<iostream>
#include <time.h>
using namespace std;

int main();

void print_matrix(int matrix[10][10], int n);

int main()
{	
	int first_matrix[10][10];
	int second_matrix[10][10];
	int sum_matrix[10][10];
	srand(time(NULL));

	// Assign random value to both matrix a value between 0 and 5
	for (int a = 0; a < 10; a++)
	{
		for (int b = 0; b < 10; b++)
		{
			first_matrix[a][b] = rand() % 6;
			second_matrix[a][b] = rand() % 6;
		}
	}

	// Caulcate the sum between the two matrix
	cout << "\n \n Execute sum of between the two matrix" << endl;
	for (int a = 0; a < 10; a++)
	{
		for (int b = 0; b < 10; b++)
		{
			sum_matrix[a][b] = first_matrix[a][b] + second_matrix[a][b];
		}
	}

	// Print the three matrixs
	cout << "\n First matrix: " << endl;
	print_matrix(first_matrix, 10);
	cout << "\n Second matrix: " << endl;
	print_matrix(second_matrix, 10);
	cout << "\n Sum between the two matrix: " << endl;
	print_matrix(sum_matrix, 10);

	return 0;
}


void print_matrix(int matrix[10][10], int n)
{
	cout << "\n \n" << endl;
	for (int a = 0; a < n; a++)
	{
		for (int b = 0; b < n; b++)
		{
			cout << (matrix[a][b]) << "  ";
		}
		cout << endl;
	}
}
