#include "math.h"
#include "types.h"
#include "stat.h"	
#include "user.h"
#include "fcntl.h"


int main()
{
    // calculate square root
    float a=sqrt(25);
    printf (1, "sqrt(25) = ");
    printfloat(1, a);
    printf(1, "\n");
    exit();
}