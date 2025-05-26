#include <stdio.h>

int main() {
    float h;
    int i, num;
    scanf("%d", &num);
    for (i = 1; i <= num; i++)
    {
        if (i == 1)
        {
            h = 1;
            continue;
        }
        h += (float) 1 / (float) i;
    }
    printf("%f\n", h);
    return 0;
}