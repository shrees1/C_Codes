#include<stdio.h>
#include<string.h>


char reverse(char *);

void main()
{
 int i=0, j=0,flag=0,n;
 char str[50],dw[50];

 printf("Enter the String :");
 gets(str);

 n=strlen(str);
 printf("%d\n", n);

 for(i=0;i<=n-1;i++)
  {
   dw[i]=reverse(&str[i]);
  }
 puts(dw);

}

char reverse(char *str)
{
  char rev[30];
  int n,l;
  n=strlen(str);
  static int i=0
//  static int j=5;

  for(i,j;i<=n,j>=0;i++,j--)
  {
      rev[i]=str[j];
      break;
      //return rev[i];
  }

  //for(l=0;l<=n-1;l++)
  //{
      return rev[i];
  //}
  //return rev[n];
}
