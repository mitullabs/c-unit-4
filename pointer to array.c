//Pointer to an array 
#include<stdio.h>
int main()
{
    int arr[5]={10, 20, 30, 40, 50};
    int (*ptr)[5];    //pointer to an array of 5 integers
    ptr = &arr;      //ptr references the whole array
    printf("Address of the array = %p\n",ptr);
    printf("Address of the first element in the array = %p\n", *ptr);
    printf("Value of the first element = %d\n",**ptr);
    ptr = &arr[1]; 
    printf("Address of the second element in the array = %p\n", *ptr);
    printf("Value of the second element = %d\n",**ptr);
    ptr = &arr[2]; 
    printf("Address of the third element in the array = %p\n", *ptr);
    printf("Value of the third element = %d\n",**ptr);
    ptr = &arr[3]; 
    printf("Address of the fourth element in the array = %p\n", *ptr);
    printf("Value of the fourth element = %d\n",**ptr);
    ptr = &arr[4]; 
    printf("Address of the fifth element in the array = %p\n", *ptr);
    printf("Value of the fifth element = %d\n",**ptr);
    return 0;
}

