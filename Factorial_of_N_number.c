#include <stdio.h>

int fact (int n)
{
	if (n==0)
		return 1;
	else 
		return n*fact(n-1);
}

void main()
{
	int n;
	printf("Enter a number: \n");
	scanf("%d ", n);
	int result = fact(n);
	
} 