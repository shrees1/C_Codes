#include<stdio.h>
//#include<ncurses.h>

int palin(int x);
void main()
{
 int a,b;
 printf("Enter the no.:");
 scanf("%d", &a);

 b=palin(a);
 if (a==b)
 {
  printf("Reverse of %d is: %d\nAnd is a Palindrome\n", a,b);
 }
 else
 {
 printf("Not a palindrome\n");
 }
}


int palin(int x)
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

