// still----------pending-------------

#include <stdio.h>
#include <unistd.h>
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
      printf("stack is underflow !! \n");
   }
   else
   {
      item = stack[top--];
      printf("deleted item : %d \n", item);
   }
}

// display the stack
void display()
{
   if (top == -1)
   {
      printf("stack is empty !! \n");
   }
   else
   {
      printf("stack :- ");
      for (int i = 0; i <= top; i++)
      {
         printf("%d  ", stack[i]);
      }
      printf("\n");
   }
}

void peek()
{
   if (top == -1)
   {
      printf("stack is empty !! \n");
   }
   else
   {
      printf("top element of stack is : %d \n", stack[top]);
   }
}

int main()
{
   int timeout_seconds = 15;
   printf("This program will automatically exit within %d seconds !!", timeout_seconds);

   for (int i = 0; i < timeout_seconds; i++)
   {
      printf("time reamining !! %d \n", timeout_seconds - i); 
      sleep(1);
   }
   

   while (1)
   {
      printf("enter your choice ! \n");
      printf("1. Push\n2. Pop\n3. Display\n4. Peek\n5. Exit\n");
      scanf("%d", &choice);

      switch (choice)
      {
      case 1:
         scanf("%d", &item);
         push(item);
         break;

      case 2:
         pop();
         printf("poped element is : %d", item);
         break;

      case 3:
         display();
         break;

      case 4:
         peek();
         printf("peek element %d", item);
         break;
      case 5:
         printf("Exiting the program");
         return 0;

      default:
         printf("Invalid choice !! please try agian later");
         break;
      }
   }
   
   return 0;
}