#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"

int main (int argc, char *argv[])
{
    int pid=0;
    int id;
    double x=0.0;

    if (argc < 2) {
        id=1;
    }
    else {
        id=atoi(argv[1]);
    }
    if(id<0 || id>63){
        id=2;
    }
    for (int i=0; i<id; i++)
    {
        pid=fork();
        if(pid<0){
            printf(1, "fork failed\n");
            exit();
        }
        else if(pid>0){
            printf(1, "Parent %d created child %d\n", getpid(), pid);
            wait();
        }
        else {
            printf(1, "Child %d created\n", getpid());
            for (int j=0; j<999999999; j++)
            {
                x=x+9.9*9.74;
            }
            break;
        }
    }
}