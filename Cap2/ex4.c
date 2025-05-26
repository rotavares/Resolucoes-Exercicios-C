#include <stdio.h>

int main() {            //.\Ex1_15.c: In function 'main':
    int n = 2025        //.\Ex1_15.c:45:5: error: expected ',' or ';' before 'printf'
    printf("%f", n);    //     printf("%f", n);
    return 0;           //     ^~~~~~
}