#include<stdio.h>
#include<string.h>

void main()
{
 int i=0, j=0,c,flag=0,n,k=0;
 char str[50],dw[50],ch[50];

 printf("Enter the String :");
 gets(str);

 c=strlen(str);
 printf("%d\n", c);
 n=c;

for(i=0,j=c-1;i<=c-1,j>=0;i++,j--)
{
    dw[i]=str[j];
}
puts(dw);

/*for(k=n-1; k>=0; k--)
{
    printf("%s", ch[k]);
}
puts(ch);*/

for(i=0;i<=c-1;i++)
{
    if(dw[i]!=str[i])
    {
        flag=1;
        break;
    }
}

if(flag==1)
{
    printf("String is not Palindrome");
}
else
{
    printf("Stining is palindrome");
}

}
