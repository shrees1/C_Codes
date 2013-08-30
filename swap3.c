#include<stdio.h>
void main()
{
int a,b,res;
printf("Enter ur 1st no.");
scanf("%d", &a);
printf("Enter ur 1st no.");
scanf("%d", &b);

a=a^b;
b=a^b;
a=a^b;

printf("\nSwapped %d %d",a, b);
}
