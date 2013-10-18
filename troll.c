#include<stdio.h>
//#include<conio.h>
int main()
{
//clrscr();
int a,n,i,num=0;
printf("How many numbers do you want to enter.\n");
scanf("%d", &n);
for(i=n-1;i>=0;i--)
{
printf("Enter the digit \n");
scanf("%d", &a);
num=num+a*(pow(10,i));
}
printf("The number is %d\t", num);
//getch();
return 0;
}
