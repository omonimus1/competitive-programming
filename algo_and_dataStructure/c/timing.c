
/*
    Author: Davide Pollicino 
    Date: 22/01/2020
    timing.c : C console application that get in input a positive integer N, execute a function f N times, register all 
           the execution times taken to execute the function f and calulcate the average of execution time. 
*/
#include <time.h>
#include <stdio.h>


// print_points : Print 1000 times a "." on output. 
void print_points()
{
    for(int i=0; i<1000;i++)
    {
        printf(".");
    }
    printf ("\n") ;
}


// register_time : Add the last time registered to execute all the code() method , to the sum of the times
void register_time(double time_registered , double *sum_of_times)
{
    *sum_of_times += time_registered;
}


// print_average : Print the averages of all the times registered
void print_average(double average)
{
    printf("The average is: %f ", average);
}


// calculate_average : Calculate the average of the times and give this value to the print_average() method 
void calculate_average(double average , int attempts)
{
    print_average(average/attempts);
}


// get_number_of_attempts : Ask to ther user how many  times the user would like to execute the print_points functions
int get_number_of_attemps()
{
    int  attempts_number = -1;
    while(attempts_number <=0)
    {
        printf("How many times would u like to test the function F to calculate its average runtime?");
        scanf("%d" , &attempts_number);
    }
    return attempts_number; 
}


// run_test : Method that calls N times the print_points function providing in output the execution time for every test 
void run_test(int attempts)
{
    double average = 0 , time_registered;
    double *p_average = &average;
    clock_t t;

    for (int i = 1 ; i <= attempts; i++)
    {
        // Start time of the single test
        printf("test number %d: " , i);
        printf(" start : %d \n", ( int ) ( t= clock () ));
         
        // Run function under test
        print_points();

        // End time of the single test
        printf(" stop : %d \n", (int ) (t = clock () -t));
        printf(" Elapsed : %f seconds \n", ( double ) t / CLOCKS_PER_SEC ) ;

        // Store individual execution time
        time_registered = ( double ) t / CLOCKS_PER_SEC;
        register_time(time_registered , p_average);
        
    }
    calculate_average(average , attempts); 
}


int main()
{
    int attempts;
    attempts = get_number_of_attemps();
    run_test(attempts);
    return 0; 
}