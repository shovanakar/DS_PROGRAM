//C Program to Print Prime Numbers From 1 to N 
#include<stdio.h>
void main(){
   int i, num, n, count;
   printf("Enter the range: ");
   scanf("%d", &n);
   printf("The prime numbers:",n);
   for(num = 1;num<=n;num++){
      count = 0;
      for(i=2;i<=num/2;i++){
         if(num%i==0){
            count++;
         break;
      }
   }
   if(count==0 && num!= 1)
      printf("%d ",num);
   }
}