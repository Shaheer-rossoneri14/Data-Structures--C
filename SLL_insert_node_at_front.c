void insertfront()
{
	node new;
	new = (node)malloc(sizeof(struct SLL));

	printf("Enter the data\n");
	scanf("%d", &new -> data);

	if (start == NULL)
	{
		start = new;
		return;
	}

	new -> link = start
}