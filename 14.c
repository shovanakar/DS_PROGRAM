//C Program to Find Compound Interest
#include<stdio.h>
#include<math.h>
int main() {
    float p,t,r,ci;
    printf("enter the principal amount:");
    scanf("%f" ,&p);
    printf("enter the time:");
    scanf("%f" ,&t);
    printf("enter the rate of intrest:");
    scanf("%f" ,&r);

    ci=  p* (pow((1 + r/ 100),t));
    printf("the intrest is:%f" ,ci);

    return 0;
}