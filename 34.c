//C Program to Display Prime Numbers Between Intervals
#include <stdio.h>
int main()
{
  int a,b,c,d;
  printf("enter a number:");
  scanf("%d",&a);
  b=a%10;
  c=a/10;
  d=b+c;
  if(a==d) {
       printf("%d is a neon number",a);
    } else {
       printf("not a neon number");
    }
    return 0;
}
