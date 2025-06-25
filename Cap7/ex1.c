#include <stdio.h>

int main()
{
    char string[10];
    fgets(string, 10, stdin);
    fputs(string, stdout);
    return 0;
}