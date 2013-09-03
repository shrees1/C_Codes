#include<stdio.h>
#include<stdlib.h>
#define MAX 10000
void main()
{
    int T,max;
    printf("Enter the Lenght of Sequence: ");
    scanf("%d", &T);
    printf("You have entered the length of Sequence: %d\n", T);

//    max=(int)malloc(T*sizeof(int));
    int ki[MAX];
    int i,k,q,count=0,temp=0;
    static int j;
    for(i=0;i<T;i++)
    {
     printf("Enter the %d number:", i+1);
     scanf("%d",&ki[i]);
    }

    for(j=0;j<T;j++)
    {

        if(ki[j]>ki[j+1])
         {
             count=0;
            // j++;
         }


        if(ki[j]<=ki[j+1])
         {
             count=count+1;
             //temp=count;
             if(count>temp)
             {
                 temp=count;
                 q=j+1;
             }
         }
         //if(temp>count)
         //temp=count;


    }
     //printf("%d\n",q);
    if(temp>count)
    {
      //printf("count:%d\n",temp+1);
      for(k=q-temp;k<=q;k++)
       {

           printf("%5d",ki[k]);
       }
    }

   // printf("%d\n",j);

     //temp=count;

    /* for(k=j-1-temp-1;k<j-1;k++)
     {
         printf("%d",ki[k]);
     }*/


}
