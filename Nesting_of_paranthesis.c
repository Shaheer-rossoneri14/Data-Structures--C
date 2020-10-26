#include <stdio.h>
#include <string.h>

#define MAX 10

int top = -1;
int stack[MAX];

void push (char c){
	if (top == (MAX-1))
		printf("Stack Overflow\n");
	else{
		top++;
		stack[top] = c;	
	}
}

char pop(){
	if (top == -1)
		printf("Stack Underflow\n");
	else
		return(stack[top--]);
}

void main()
{
	char exp[MAX], temp;
	int i, flag = 1;
	printf("Enter an expression : \n");
	gets(exp);
	for (i=0;i<strlen(exp);i++)
	{
		if (exp[i]=='(' || exp[i]=='{' || exp[i]=='[')
			push(exp[i]);
		if (exp[i]==')' || exp[i]=='}' || exp[i]==']')
			if (top== -1)
				flag=0;
			else{
				temp=pop();
				if(exp[i]==')' && (temp=='{' || temp=='['))
					flag=0;
 				if(exp[i]=='}' && (temp=='(' || temp=='['))
					flag=0;
 				if(exp[i]==']' && (temp=='(' || temp=='{'))
					flag=0;
			}
	}
	if (top>=0)
		flag=0;
	if(flag==1)
		printf("Valid expression\n");
	else
		printf("Invalid expression\n");

}