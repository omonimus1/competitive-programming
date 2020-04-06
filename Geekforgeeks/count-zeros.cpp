// https://practice.geeksforgeeks.org/problems/count-zeros-in-a-sorted-matrix/1
// Function solutions -> Tag: Amazon - matrix
int countZeroes(int A[MAX][MAX],int N)
{
    int number_of_zeros=0;
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<N; j++)
        {
            if(A[i][j] == 0)
                number_of_zeros++;
        }
    }    
    return number_of_zeros;
}
