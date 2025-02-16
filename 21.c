//C Program to Print Alphabets From A to Z Using Loop
#include<stdio.h>
int main() {
    char i;
    printf("===character between A to Z===\n");

    for (i = 'A'; i <= 'Z'; i++) {
        printf("%c ", i);
    }
    printf("\n===The Alphabets from a to z ===\n");

    for (i = 'a'; i <= 'z'; i++) {
        printf("%c ", i);
    }
    return 0;
}