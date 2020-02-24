/*
    Date: 24/02/2020
    Author: 40401270 - Davide Pollicino 

    Summary: 
*/
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

# define COLUMNS 7
# define ROWS 6

void  print_menu()
{
    bool answer_acceptable = true; 
    int user_choise; 
   do 
   {
        printf("\nWelcome to my 4 in Line Application");
        printf("\n1. Single User");
        printf("\n2. Two users");
        printf("\n3. Exit");

        scanf("%d" , &user_choise);
        printf("your choise is %d" , user_choise);
        switch (user_choise)
        {
            case 1:
                printf("1"); 
                break;
            case 2:
                printf("2");
                break;
            case 3:
                return; 
            default:
                printf("Wrong Choice, let's try again");
                answer_acceptable = false;
                break;
        }
   }while (!answer_acceptable);
   
}

void print_board(char arr[COLUMNS][ROWS]) 
{ 
    int i, j; 
    for (i = 0; i < COLUMNS; i++) 
    {
      for (j = 0; j <ROWS; j++) 
      {
          
        printf("%c ", arr[i][j]); 
      }
      printf("\n");
    }
} 

void set_board(char arr[COLUMNS][ROWS]) 
{ 
    int i, j; 
    for (i = 0; i < COLUMNS; i++) 
      for (j = 0; j <ROWS; j++) 
         arr[i][j] = 'c'; 
} 
  
int main() 
{ 
    char arr[COLUMNS][ROWS];
    print_menu();
    set_board(arr);
    print_board(arr); 
    return 0; 
} 