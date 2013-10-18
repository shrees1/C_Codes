#include<stdio.h>
#include<string.h>

void main()
{
 int i,j,n,m;
 char str1[50],str2[30],res[50];
 printf("Enter the string :");
 gets(str1);
 n=strlen(str1);

 printf("Enter the second string :");
 gets(str2);
 m=strlen(str2);

/* for(i=0;i<n;i++)
 {
  res[i]=str1[i];
 }
 for(i=n,j=0;i<=(n+m-1),j<=m-1;i++,j++)
 {
  res[i]=str2[j];
 }*/

 for(i=n,j=0;i<=n+m+1,j<=(m-1);i++,j++)
 {
     str1[i]=str2[j];
 }

 puts(str1);
}
