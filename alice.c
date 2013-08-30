#include<stdio.h>
#include<stdlib.h>
#define MAX 750
//#define Y
void main()
{
int N,K,L;
int Xi[MAX],Yi[MAX];
int i,t,j,m,h,l,k,temp,mincost,maxcost,mincombo,maxcombo,xchanges,profit;

printf("Enter The no. of Friends: ");
scanf("%d", &N);

printf("Enter The no. of combo : ");
scanf("%d", &K);

printf("Enter The amount of money: ");
scanf("%d", &L);

printf("\nNo, of friends ALice have: %d",N);
printf("\nNo, of Combo ALice had: %d",K);
printf("\nTotal money that ALice have: %d\n\n",L);

for(i=1;i<=K;i++)
 {
    printf("Enter the no. of %d combo juices :",i);
    scanf("%d",&Xi[i]);
 }

 for(t=1;t<=K;t++)
  {
      printf("\nEnter the price of %d Combo:", t);
      scanf("%d", &Yi[t]);
  }


  /*for(m=1;m<=K;m++)
  {
      printf("\nThe no. %d combo and price of combo are %d",Xi[m],Yi[m]);
  }*/


 /* for(h=0;h<K-1;i++)
  {
   for(l=0;l<=K-1-i;l++)
   {
      Yi[l]>Yi[l+1];
      temp=Yi[l];
      Yi[l+1]=Yi[l];
      Yi[l]=temp;
      xchanges++;
   }

   if(xchanges==0)
   break;
  }
  printf("The new Sequence is: ");

  for(k=0;k<=K;k++)
  {
      printf("%4d",Yi[k]);
  }*/

  for(i=0;i<K-1;i++)
 {
     for(j=0;j<K-1-i;j++)
     {
         if(Yi[j]>Yi[j+1])
         {
             temp=Yi[j];
             Yi[j]=Yi[j+1];
             Yi[j+1]=temp;
             xchanges++;
         }
     }
     if(xchanges==0)
     break;
 }

 /*printf("The new Sequence is: ");
 for(k=1;k<=K;k++)
  {
      printf("%6d",Yi[k]);
  }*/

  mincost=Yi[1];
  maxcost=Yi[j-1];
  //printf("\n%d %d\n", mincost,maxcost);


  for(i=0;i<K-1;i++)
 {
     for(j=0;j<K-1-i;j++)
     {
         if(Xi[j]>Xi[j+1])
         {
             temp=Xi[j];
             Xi[j]=Xi[j+1];
             Xi[j+1]=temp;
             xchanges++;
         }
     }
     if(xchanges==0)
     break;
 }

 /*printf("The new Sequence is: ");
 for(k=1;k<=K;k++)
  {
      printf("%6d",Xi[k]);
  }*/

  mincombo=Xi[1];
  maxcombo=Xi[j-1];
//  printf("\n%d %d\n", mincombo,maxcombo);

  profit=(L-maxcombo*maxcost-mincombo*mincost);

  if(maxcombo*mincost>L || profit<0)
  {
     printf("\nCALL Bob Urently!!");
     exit(1);
  }

  else
  {
      printf("\nProfit is %d Rs", profit);
  }

//  printf("\n%d %d",min,max);
}

