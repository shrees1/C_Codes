#include<stdio.h>

int fab(int);
void main()
{
 int a;
 printf("Enter the no:");
 scanf("%d", &a);
 
 printf("Fibonacci series upto %d : %d\n", a,fab(a)); 
}

int fab(int x)
{
 //int sum;
  int sum;
 if (x==1)
 {
  return 1;
 }
 else
 sum= x+fab(x-1);
 return sum; 
}
