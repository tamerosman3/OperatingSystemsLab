#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"

int main(int argc, char *argv[]){


int arr[argc];
int temp =0;
int sign = 1; 

if(argc < 3) // if no arguments are passed
{
printf(1, "Not enough arguments passed\n");
exit();
}

for (int i=1; i<argc; i++) // skip first argument (program name)
{
    if (argv[i][0] == '-') {sign = -1; argv[i][0]='0';}
    else {sign = 1;}

    arr[i] = atoi(argv[i]); //* sign;
        arr[i] = arr[i] * sign; 
        //printf(1, "%d\n",arr[i]);
}

for (int i = 1; i < argc; i++) {    
        for (int j = i+1; j < argc; j++) {    
           if(arr[i] > arr[j]) {    
               temp = arr[i];    
               arr[i] = arr[j];    
               arr[j] = temp;    
           }    
        }    
    }    

printf(1, "Sorted array is: \n");
for (int i=1; i<argc; i++)
{
printf(1, "%d\n",arr[i]);
}
}