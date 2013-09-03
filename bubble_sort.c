#include<stdio.h>
#define MAX 100

void main()
{
 int a[MAX],i,j,l,min,temp;

 printf("Enter the lenght of array: ");
 scanf("%d", &l);

 printf("Enter the values in array -\n");
 for(i=0; i<l; i++)
 {
  printf("Enter values :");
  scanf("%d", &a[i]);
 }

 printf("Printing unsorted array");
 for(i=0;i<l;i++)
 {
  printf("\n%6d", a[i]);
 }

 for(i=0; i<l-1; i++)
 {
   for(j=i+1; j<l; j++)
   {
    if (a[i] > a[j])
     {
       temp = a[j];
       a[j] = a[i];
       a[i] = temp;
     }
   }
 }

 printf("\n\nThe sorted array:");
 for(i=0; i<l; i++)
 {
  printf("\n%6d", a[i]);
 }
}
