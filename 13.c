//C Program to Find Simple Interest
#include<stdio.h>
int main() {
    float p,t,r,i;
    printf("enter the principal amount:");
    scanf("%f" ,&p);
    printf("enter the time:");
    scanf("%f" ,&t);
    printf("enter the rate of intrest:");
    scanf("%f" ,&r);

    i=(p*t*r)/100;
    printf("the intrest is:%f" ,i);

    return 0;
}