// C program to print elements of a Three-Dimensional Array
#include <stdio.h>

int main() 
{
    // Create and Initialize the 3-dimensional array
    int arr[2][3][2] = { { { 1, 1 }, { 2, 3 }, { 4, 5 } },
                         { { 6, 7 }, { 8, 9 }, { 10, 11 } } };

    // Loop through the depths
    for (int i = 0; i < 2; ++i) 
    {
        // Loop through the rows
        for (int j = 0; j < 3; ++j) 
        {
            // Loop through the columns
            for (int k = 0; k < 2; ++k)
                printf("arr[%d][%d][%d] = %d   ", i, j, k,
                       arr[i][j][k]);
            printf("\n");
        }
      printf("\n\n");
    }
    return 0;
}

