/*
if an element in an MxN matrix is 0, its entire row and
column are set to 0
*/
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // N: number of rows
    // M: numbers of columns 
    int N=3, M=3;
    int matrix[N][M];
    // Store matrix example


    // Print matrix
    for(int i =0; i < N; i++)
    {
        for(int j=0; i< M; j++)
            cout << matrix[i][j] << " ";
        cout <<endl;
    }
    /*
    int a;
    //set coluns and row of every element =0 to 0
    for(int i =0; i< N; i++)
    {
        for(int j=0; j<M; j++)
        {
            if(matrix[i][j] == 0)
            {
                // Set all the element forward to 0
                for(a = i; a< N; a++)
                    matrix[a][j] = 0;
                // set all the element backford to 0
                for(a= i; a >=0; a--)
                    matrix[a][j] = 0;
                for(a = j; a<M; a++)
                    matrix[i][a] = 0;
                for(a = j; a >=0; a--)
                    matrix[i][j] = 0;
            }
        }
    }

    // Print matrix after operation completed
    for(int i =0; i < N; i++)
    {
        for(int j=0; i< M; j++)
            cout << matrix[i][j] << " ";
        cout <<endl;
    }*/
    return 0; 
}