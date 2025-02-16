//C Program to Print the ASCII Value of a Character
#include<stdio.h>
int main() {
    char c;
    printf("enter a character:");
    scanf("%c" ,&c);

    printf("The ASCII value of %c is %d", c, c);
    return 0;
}