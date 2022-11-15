#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool check(int r,int c,vector<vector<char>>& board,char val){
        // check for row
        for(int i=0;i<9;i++) if(board[i][c]==val) return false;
        
        // check for column
        for(int i=0;i<9;i++) if(board[r][i]==val) return false;
        
        // check inside the box;
        
        // this can be derived from given corrdinates;
        // these are the box startting coordinates so as to check for val
        int box_row=r-r%3,box_col=c-c%3;
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                if(board[box_row+i][box_col+j]==val) return false;
            }
        }
        return true;
        
    }
    bool rec(int level,int col,vector<vector<char>>& board){
        // bases cases are imp here
        //1. BC: if u reach the level==n, thats came out of the board, then u have succesfully solved the sudoku
        if(level==9) return true;
        
        // 2.bc if u have filled the entire row i.e col==n,then got to next row
        // here go to next row and col as 0
        if(col==9) return rec(level+1,0,board);
        
        // 3.BC : if u have already have a val in the cur cell i.e its not empty, then go to next right cell
        if(board[level][col]!='.') return rec(level,col+1,board);
        
        // now choices
        for(char c='1';c<='9';c++){
            // validation of the choices
            if(check(level,col,board,c)){
                // if its valid : fill the cell with c val
                board[level][col]=c;
                // here we have to check if from this next move are we done solving or not,
                // orelse it goes to an heaper buffer exceeded case
                if(rec(level,col+1,board)) return true;
                board[level][col]='.';
            }
        }
        return false;
    }
    void solveSudoku(vector<vector<char>>& board) {
        
        // here the level is 0,0
        // here the choices we have is 1 to 9
        // and checks are same rol and col and sub box/matrix
        // at each i,j check if its empty:
            // if yes, check whether that particular cell caan be filled from 1 to 9
                // if can have a val fro 1 to 9, then ok place it and go for next column
                // here observe carefully if any cell is filed,"go to its right"
                
                // after placing in the cell, move to next right cell
                // then revert back
        rec(0,0,board); // this rec will place an ele in this cell if its empty for thr current row and moves to next col along the same row
        // if the row is filled , plz go and place the remaining rows from cur row to N-1 row
    }
};