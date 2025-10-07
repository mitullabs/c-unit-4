// C Program to illustrate access of array elements
#include <stdio.h>

int main()
{
    // array declaration and initialization
    int arr[5] = { 15, 25, 35, 45, 55 };

    // accessing element at index 2 (third element)
    printf("Element at arr[2]: %d\n", arr[2]);

    // accessing element at index 4 (last element)
    printf("Element at arr[4]: %d\n", arr[4]);

    // accessing element at index 0 (first element)
    printf("Element at arr[0]: %d", arr[0]);

    return 0;
}

