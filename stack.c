// -----------------------------------make sure you should exit the program with pressing 5 otherwise the while loop is not in control------------------

#include <stdio.h>
#define MAX_SIZE 10

int stack[MAX_SIZE]; // array of stack
int top = -1; // index to indentifying the position of stack element, for use to stack is empty or not
int item, choice; // item variable means the that are used to push in stack and the choice variable is to run the switch case statement 

// push function to push the data in stack
void push(int item)
{
   // here check the stack is full or not with the help of max_size  
   if (top == MAX_SIZE - 1) 
   {
      printf("overflow & choose exit !!");
   }
   else
   {
      stack[++top] = item; // ++top means frist the top is increment and then taken to use  
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


// here display the peak element 
void peak()
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
         peak();
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