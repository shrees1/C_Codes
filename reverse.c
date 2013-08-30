#include<stdio.h>
//#include<ncurses.h>

int reverse(int x);
void main()
{
 int a,b;
 printf("Enter the no.:");
 scanf("%d", &a);
 
 b=reverse(a);
 printf("Reverse of %d is: %d\n", a,b);
}

int reverse(int x)
{
 int rev=0;
 int p=0;

 while (x>0)
 {
  p=x%10;
  x=x/10;

  rev=rev*10+p;
 }

return rev;
}
