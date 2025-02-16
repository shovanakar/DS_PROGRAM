//C Program for Area And Perimeter Of Rectangle 
#include <stdio.h>

int main()
{

	int l,b;
    printf("enter the lenth:");
    scanf("%d",&l);
    printf("enter the breadth:");
    scanf("%d",&b);
    
	int A, P;
	A = l * b;
	P = 2 * (l + b);
	printf("Area of rectangle is : %d", A);
	printf("\nPerimeter of rectangle is : %d", P);
	return 0;
}
