#include<stdio.h>
#define MAX 100

void main()
{
 int a[MAX],i,j,l,k,min,temp;

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
   for(j=0,k=j+1; j<l-1,k<l; j++,k++)
   {
     if(a[j] > a[k])
     {
       temp = a[j];
       a[j] = a[k];
       a[k] = temp;
     }
   }
 }

 printf("The sorted array is-");
 for(i=0; i<l; i++)
  {
   printf("\n%d", a[i]);
  }
}


