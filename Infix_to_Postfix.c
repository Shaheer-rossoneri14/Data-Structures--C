#include <stdio.h>
#define MAX 30

int top == -1;
char stack[MAX];

//Function to insert element into the stack
void push(char element)
{
//Check for overflow
  if (top == MAX-1)
  {
    printf("Stack Overflow!\n");
    return;
  }

  top++;
  stack[top] = element;
}

//Function to delete element from the stack
char pop()
{
  char del;
//Check for underflow
  if (top == -1)
  {
    printf("Stack Underflow!\n");
    return;
  }

  del = stack[top];
  top--;
  return del;
}

//Function to check precedence
int priority(char c)
{
  if (c == '#')
    return 0;
  else if (c == '(')
    return 1;
  else if (c == '+' || c == '-')
    return 2;
  else if (c == '*' || c == '/' || c == '%')
    return 3;
  else
    return 4;
}

int main()
{
  //Code
  return 0;
}
