// https://practice.geeksforgeeks.org/problems/two-dimensional-world/1
//Function Solution
void twoDimensional(int **mat,int N){
    // Loop to iterate through matrix
    for(int i = 0;i<N;i++){
        for(int j = 0;j<N;j++){
            cout<<mat[i][j] << " ";
        }
        cout << endl;
    }
}