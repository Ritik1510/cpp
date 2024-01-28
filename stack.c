#include <stdio.h>
#define MAX_SIZE 10
int stack[MAX_SIZE]; // array of stack
int top = -1;
int item, choice;

// push function to push the data in stack
void push(int item)
{
   if (top == MAX_SIZE - 1)
   {
      printf("overflow & choose exit !!");
   }
   else
   {
      stack[++top] = item;
      printf("%d ", stack[top]);
   }
}

// delete/pop the top data from the stack
void pop()
{
   if (top == -1)
   {
      printf("stack is underflow !!");
   }
   else
   {
      item = stack[top--];
      printf("deleted item : %d", item);
   }
}

// display the stack
void display()
{
   if (top == -1)
   {
      printf("stack is empty !!");
   }
   else
   {
      for (int i = 0; i <= top; i++)
      {
         printf("%d  ", stack[i]);
      }
      printf("\n");
   }
}

int main()
{
   while (1)
   {
      switch (1)
      {
      case 1:
         scanf("%d", &item);
         push(item);
         break;
      
      case 2: 
         pop();

      case 3: 
         display(); 

      default :
         break;
      }
   }
   return 0;
}