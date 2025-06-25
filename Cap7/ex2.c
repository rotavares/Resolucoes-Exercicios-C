#include <stdio.h>

int main()
{
    char string[25];
    fgets(string, 5, stdin);
    fputs(string, stdout);
    return 0;
}