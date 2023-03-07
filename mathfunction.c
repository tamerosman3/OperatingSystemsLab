// #include <stdio.h>
// #include <stdlib.h>
#include "math.h"
#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"
#define MAXSIZE 10
#define MAXNUM 999999999
#define MINNUM -99999999

// int main(int argc, char **argv)
int main(void)
{
    int argc = 5;
    char argv[6][50] = {"main.c", "4.4", "5.5", "3.3", "1.1", "2.2"};
    
    float min = MAXNUM;
    float max = MINNUM; 
    float median;
    float sum = 0, sum1 = 0;
    float average, variance, std_deviation;
    // int sumi = 0, sum1i =0;
    // int averagei, variancei, std_deviationi; 
    
    int x[argc];   // array of size argc
    
    if(argc < 2) // if no arguments are passed
    {
    	printf(1, "Not enough arguments passed\n");
    	exit();
    }
    
    // copying arguments to a list  
    for (int i=1; i<=argc; i++) // skip first argument (program name) 
    {
        x[i-1] = atoi(argv[i]);
    	// max and min values
    	if (x[i-1] > max) {max = x[i-1];}
    	if (x[i-1] < min) {min = x[i-1];}
    	// sum
    	sum += (float)x[i-1];
    }
    
    
    // printing the list of numbers. 
    for (int i=0; i<argc; i++)
    {printf(1,"%d - ", x[i]);}
    
    // calculating the median of the list of numbers
    if (argc%2==1)
    {median = x[(argc-1)/2];}
    else 
    {median = (x[argc/2]+x[argc/2-1]) / 2;}
    
    
    
 
    /*  Compute the average of all elements */
    average = sum / (float)argc;
    
    // calculate variance and standard deviation
    for (int i=0; i<argc; i++)
    {
    	sum1 += (x[i] - average) * (x[i] - average);
    }
    variance = sum1 / (float)argc;
    std_deviation = sqrt(variance);
    

    // printing all useful data
    printf(1,"\nSummation of all elements =");
    printfloat(1, sum);
    printf(1,"\n");
    printf(1,"Min value = ");
    printfloat(1, min);
    printf(1,"\n");
    printf(1,"Max value = ");
    printfloat(1, max);
    printf(1,"\n");
    printf(1,"median value = ");
    printfloat(1, median);
    printf(1,"\n");
    printf(1,"Average of all elements =");
    printfloat(1, average);
    printf(1,"\n");
    printf(1,"Variance of all elements = ");
    printfloat(1, variance);
    printf(1,"\n");
    printf(1, "Standard Deviation = ");
    printfloat(1, std_deviation);
    printf(1,"\n");
    
    return 0; 
}