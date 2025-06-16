#include <stdio.h>

int main()
{
    int A[5][5] = {{4, 7, 1, 2, 5}, {5, 9, 4, 6, 2}, {7, 2, 1, 6, 1}, {4, 9, 3, 7, 5}, {2, 1, 3, 1, 4}};
    int B[5][5];
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%3d ", A[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            B[i][j] = (A[i][j] * A[i][j]);
            printf("%3d ", B[i][j]);
        }
        printf("\n");
    }
    return 0;
}