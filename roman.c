#include<stdio.h>
#include<string.h>

char con(int);
int n=20;
void main()
{
 int year;
 printf("Enter the year:");
 scanf("%d", &year);
 
 string roman=con(year);
 printf("Roman equivalent of %d is %s", year, roman);
}

char con(int year)
{
 char res[]=(char)malloc(n*sizeof(int));
 while(year>=0)
 {
  if(year%100)
   {
    int m=year/100;
    res="m"
    char n=string(m);
    strcat(res,)
   }
 }
}
