//C Program to Multiply two Floating-Point Numbers 
#include<stdio.h>
int main() {
    float a,b,mult;
    printf("enter a float point number:");
    scanf("%f" ,&a);
    printf("enter another float point number:");
    scanf("%f" ,&b);
    mult=a*b;
    printf("multiplication is:%f" ,mult);
    return 0;
}
