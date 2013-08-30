#include<stdio.h>

int facto(int);
void main()
{
 int a;
 printf("Enter the no:");
 scanf("%d", &a);
 
// b=facto(a);
 printf("The factorial of %d is %d\n", a, facto(a));
} 

int facto(int x)
{
int fact=1,i;
 if (x==1 || x==0)
 {
  return 1;
 }
 else
 for(i=1; i<=x; i++)
 {
  fact=fact*i;
 // printf("X times\n");
 }
return fact;
}

