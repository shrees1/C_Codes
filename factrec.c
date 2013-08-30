#include<stdio.h>

int fact(int);  // this line is function  prototype, dekh structure "return_type + name of the function + function symbol i.e () + and in that p                  arenthesis the data-type of parameter if any". What this prototype does is gives user an basic idea of that function name is i                  ts return type, no. of parameters and their data-type. in this example int is the return type of function "fact" fact is the n                  ame of the function and bracket contains the data-type of parameter i.e an int.  //
void main()
{
 int a;
 printf("Enter the no.:");
 scanf("%d", &a);

 int b= fact(a);
 printf("Factorial of %d is %d\n", a,b);
}

int fact(int x)
{
 int fac;
 if(x==1)
 {
  return 1;
 }
 else
 {
  fac= (x*fact(x-1));
 }
return fac;
}
