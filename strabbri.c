#include<stdio.h>
#include<string.h>
//#include<alloc.h>
#include<stdlib.h>

void main()
{
 int i=0,j=0,count=1;
 char res[20];
 char str[60];
 char temp[1];
 char pt[]={"."};
 char k;
 printf("Enter the string: ");
 gets(str);
 printf("You have entered :");
 puts(str);

 res[0]=str[0];
 strcat(res,pt);
 i++;
 j++;


 while(str[i]!='\0')
 {
  if(str[i]==' ')
  {
      i++;
      printf("%c\n", 'i');
      //temp[0]=str[i];
      k=(char)str[i];
      printf("%c\n",k);
      //puts(temp);
      //temp=(string)k;
      strcat(res,temp);
      puts(res);
      printf("%c\n", res[j]);
      j++;
  }
  printf("%c\n", 'ex');
  i++;
  //j++;
  count++;
 }
 printf("%d", count);
 printf("Output is: ");
 puts(res);
}
