#include<stdio.h>
#include<math.h>

int isprime(int x);

void main()
{
 int num;
 
 printf("Enter the no:");
 scanf("%d", &num);

 if (isprime(*num))
 {
  printf("Num is Prime\n");
 }
 else
 {
  printf("Not a prime no.\n");
 }
}

int isprime(int x)
{
 int i,flag=1;
 for(i=2;i<=x/2;i++)
 {
  if (x%i==0)
  {
   flag=0;
   break;
  }
 }

 return (flag);
}
