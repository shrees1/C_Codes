#include<stdio.h>

void main()
{
 int *p;
int a=10;

p=&a;
printf("%u\n",&p);
printf("%d\n",*p);
//printf("%d\n",p);
}
