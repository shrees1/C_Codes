#include<stdio.h>
#include<stdlib.h>
#define MAX 20

int stack_arr[MAX];
int top= -1;

//int display();
void push(int item);
int pop();
int isfull();
int isempty();


int main()
{
 int ch,item;
 while(1)
 {
 printf("Enter your Choice : \n");
 printf("1. Push\n2. Pop\n3. Display\n4. Is full\n5. Is Empty\n");
 scanf("%d", &ch);

  switch(ch)
  {
   case 1:
   {
     //int num;
     printf("Enter the element to be pushed :");
     scanf("%d", &item);
     push(item);
     break;
   }

   case 2:
   {
    item=pop();
    printf("Popped element is %d:", item);
    break;
   }

   //case 3:
   //{
    //display();
    //break;
   //}

   case 4:
   {
    exit(0);
   }
  }
 }
   return 0;
   }



  void push(int item)
  {
     isfull();
     {
       printf("Stack Overfall");
       return;
     }
      top=top+1;
      stack_arr[top]=item;
  }

  int pop()
  {
   int item;
   isempty();
   {
     printf("Stack Underflow");
     return;
   }
   item=stack_arr[top];
   top=top-1;
   return item;
  }

  int isfull()
  {
   if(top==MAX-1)
   {
    //printf("Stack Overflow");
    return 1;
    }
    else
    return 0;
   }

  int isempty()
  {
   if(top==-1)
   {
    return 1;
    }
    else
    return 0;
   }


