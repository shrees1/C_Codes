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
   min = i;
   for(j=i+1; j<l; j++)
   {
       if(a[min] > a[j])
       {
         min = j;
         //printf("\n\n%d", a[min]);
       }

       if(i != min)
       {
           temp = a[i];
           a[i] = a[min];
           a[min] = temp;
       }
   }
  }

  printf("\nThe sorted array is -");
  for(i=0; i<l; i++)
  {
      printf("\n%6d", a[i]);
  }

}
