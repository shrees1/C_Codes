#include<stdio.h>
#include<stdlib.h>
#define MAX 1000
void main()
{
int T;
//int ki[]=(int)malloc(sizeof(T*2));
int temp,xchanges;
int ki[MAX];
printf("Enter the Lenght of Sequence: ");
scanf("%d", &T);
printf("You have entered the length of Sequence: %d\n", T);

//int max=(int)malloc(T*sizeof(int));
//printf("%d",max);
//int ki[max];
int i,j,k;
for ( i=0;i<=T-1;i++)
 {
   printf("\nEnter The %d number: ",i+1);
   scanf("%d",&ki[i]);
 }

 for(i=0;i<T-1;i++)
 {
     for(j=0;j<T-1-i;j++)
     {
         if(ki[j]>ki[j+1])
         {
             temp=ki[j];
             ki[j]=ki[j+1];
             ki[j+1]=temp;
             xchanges++;
         }
     }
     if(xchanges==0)
     break;
 }

 printf("The new Sequence is: ");
 for(k=0;k<T;k++)
  {
      printf("%6d",ki[k]);
  }
}
