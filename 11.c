//C Program to Add Two Complex Numbers 
#include <stdio.h>
 
struct complex
{
   int real, img;
}a,b,c;
 
int main()
{
    printf("-Please enter first complex number-\n");
    printf("Enter Real part of the 1st complex number:\n");
    scanf("%d", &a.real);
    printf("Enter Imaginary part of the 1st complex number without i:\n");
    scanf("%d", &a.img);
    
    printf("-Please enter second complex number-\n");
    printf("Enter Real part of the 2nd complex number:\n");
    scanf("%d", &b.real);
    printf("Enter Imaginary part of the 2nd complex number without i:\n");
    scanf("%d", &b.img);
    
   c.real = a.real + b.real;
   c.img = a.img + b.img;
 
   printf("Sum of the complex numbers: (%d) + (%di)\n", c.real, c.img);
 
   return 0;
}
