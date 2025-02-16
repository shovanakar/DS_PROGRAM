//C Program to Find Largest Number Among Three Numbers
#include <stdio.h>

int main()
{
    int a,b,c;
    printf("enter the first number:");
    scanf("%d" ,&a);
    printf("enter the second number:");
    scanf("%d" ,&b);
    printf("enter the third number:");
    scanf("%d" ,&c);

    if (a >= b) {
        if (a >= c)
            printf("%d is the largest number.", a);
        else
            printf("%d is the largest number.", c);
    }
    else {
        if (b >= c)
            printf("%d is the largest number.", b);
        else
            printf("%d is the largest number.", c);
    }

    return 0;
}
