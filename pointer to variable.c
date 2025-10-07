// C program to illustrate Pointer to variable
#include <stdio.h>

int main()
{
    int a = 10;
    // declare pointer variable
    int *ptr;
    // note that data type of ptr and var must be same
    ptr = &a;
    // assign the address of a variable to a pointer
    printf("Value at ptr = %p \n", ptr);
    printf("Value at a = %d \n", a);
    printf("Value at *ptr = %d \n", *ptr);
    return 0;
}

