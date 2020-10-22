//Function to Insert an element in the stack
void push(int item)
{
//Check overflow condition
	if(top == stack_size - 1)
	{
		printf("Stack Overflow!!");
		return;
	}
//Inserting the element in the stack
	top++;
	s[top] = item;
}

//Deleting an element from the stack
int pop()
{
	int item_deleted;
	if (top == -1)
	{
		printf("Stack Underflow!!");
		return 0;
	}
	else
		item_deleted = s[top];
	top--;
	return item_deleted;
}

//Displaying the stack
void display()
{
//Check if stack is empty
	if (top == -1)
	{
		printf("Stack is empty\n");
		return;
	}
//Print the contents of stack
	printf("The contents of stack are: \n");
	for (int i = 0; i < top; i++)
		printf("%d\n", s[i]);
}
