//C Program to Check Whether a Number is Positive, Negative, or Zero
#include<stdio.h>
int main() {
    int a;
    printf("enter a number:");
    scanf("%d",&a);
    
    if(a<0) {
        printf("number is negative");
    } else if (a>0) {
        printf("number is positive");
    } else {
        printf("number is zero");
    }

    return 0;

}