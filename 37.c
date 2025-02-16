//C program to  Sum of Fibonacci Numbers at Even Indexes up to N Terms 
#include <stdio.h>

int main() {
    int n = 5;

    for (int i = 0; i < n; i++) {


        for (int j = 0; j <= i; j++)
            printf("* ");
        printf("\n");
    }
    return 0;
}
