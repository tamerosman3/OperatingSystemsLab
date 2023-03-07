#include "types.h"
#include "stat.h"	
#include "user.h"
#include "fcntl.h"

int main(int argc, char *argv[]){

//calculate standard deviation

int arr[argc];
int temp =0;

if(argc < 3) // if no arguments are passed
{
    printf(1, "Not enough arguments passed

");
    exit();
}

for (int i=1; i<argc; i++) // skip first argument (program name)
{
    arr[i] = atoi(argv[i]);
    //printf(1, "%d ",arr[i]);

    
    
}