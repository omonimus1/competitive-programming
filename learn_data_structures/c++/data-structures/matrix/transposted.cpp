// Author: Davide Pollicino
// Date: 28/12/2019
/*
    Summary: C++ console application that generate a matrix 3X5 and print it's transposed
*/

#include <iostream>
#include <time.h>
using namespace std;

int main()
{
   int matrix[5][10];
   int transported[10][5];
   srand(time(NULL));

   // Assign pseudo-random value from 0 to 20 to each element of the matrix
   for (unsigned short int a = 0; a < 5; a++)
   {
       for (unsigned short int b = 0; b < 10; b++)
       {
           matrix[a][b] = rand() % 10;
       }
   }

   cout << "\n\n Original Matrix:" << endl;
   // Print original matrix
   for (int a = 0; a < 5; a++)
   {
       for (int b = 0; b < 10; b++)
       {
           cout << (matrix[a][b]) << "  ";
       }
       cout << endl;
   }

    // Generate transported  matrix
   for (unsigned short int a = 0; a < 10; a++)
   {
       for (unsigned short int b = 0; b < 5; b++)
       {
           transported[a][b] = matrix[b][a];
       }
   }


   cout << "\n\n Transported:" << endl;
   // Print transported matrix
   for (int a = 0; a < 10; a++)
   {
       for (int b = 0; b < 5; b++)
       {
           cout << (transported[a][b]) << "  ";
       }
       cout << endl;
   }
}
