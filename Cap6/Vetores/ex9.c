#include <stdio.h>

int main() {
    int a[10], b[10], c[10];
    for (int i = 0; i < 10; i++)
    {
        printf("%d# A: ", i+1);
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d# B: ", i+1);
        scanf("%d", &b[i]);
    }

    printf("C = ");
    for (int i = 0; i < 10; i++)
    {
        c[i] = a[i] - b[i];
        printf("%d ", c[i]);
    }
    
    return 0;
}