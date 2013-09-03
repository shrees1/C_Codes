#include<stdio.h>
#include<string.h>

//void main()
main()
{
 char name[30];
 printf("Enter your name :");
 gets(name);
 printf("You have entered :%s\n",name);
 int i=0;
/* while(name[i]!=0)
 {
  char str[2]=".";
  strcat(name,str);
  i++;
 }*/
//int i=0;
while(name[i]!=0)
{
 if(name[i]==" ")
 {
  printf("%s.",name);
 }
 i++;
}
printf("%d\n",i);
//printf("%c\n",name[5]);
//strcat(name,".");
puts(name);

//return 1;
//return 1;
return 'A';
}
