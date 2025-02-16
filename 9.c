//C Program to Calculate Fahrenheit to Celsius
#include<stdio.h>
int main() {
    float fahrenheit,celsius;
    printf("enter temperature in farhenheit:");
    scanf("%f" , &fahrenheit);
    celsius = ( fahrenheit- 32) * 5/9 ;
    printf("temperature in celsius :%f" ,celsius);

    return 0;
}