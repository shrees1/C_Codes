#include<stdio.h>

int fiboitr(int);

void main()
{
 int n,res;
 printf("Enter the No. :");
 scanf("%d", &n);

 res=fiboitr(n);
 printf("Result is : %d", res);
}

int fiboitr(int x)
{
 int sum=0,i;
 if(x==1)
     return 1;
  else
  {
   for(i=1;i<=x;i++)
   {
    sum=sum+i;
   }
   return sum;
  }
}
