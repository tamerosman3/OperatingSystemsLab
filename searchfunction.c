#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"
int main(int argc, char *argv[]) // the arguments are passed as an array of
// strings and they are the number we are searching for and the list of numbers to search in
{
//int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
int array[argc-2]; // array of size argc
if(argc < 2) // if no arguments are passed
{
printf(1, "Not enough arguments passed\n");
exit();
}
int sign=1;
int search=0;
if (argv[1][0]=='-')
{
    argv[1][0] = '0';
    search=atoi(argv[1]);   
    search=search*-1;
}
else {search=atoi(argv[1]);}

//int search = atoi(argv[1]);
for (int i=1; i<argc; i++) // skip first argument (program name) and the second argument (search)
{
    if(argv[i+1][0]=='-')
    {argv[i+1][0] = '0';sign=-1;}
    else {sign=1;}

    array[i-1] = atoi(argv[i+1]);
    array[i-1] = array[i-1]*sign;
//printf(1, "%d\n",arr[i]);
}    
int l;
int index = -1;
for (l = 0; l < argc-2; l++)
{  
    if (array[l] == search)
    {
        index = l+1;
        break;
    }
}
for (l = 0; l < argc-2; l++)
{
    printf(1, " %d)\n", array[l]);
}
printf(1, "The index of the first occurrence of %d in the array is %d)\n", search, index);
exit();
}