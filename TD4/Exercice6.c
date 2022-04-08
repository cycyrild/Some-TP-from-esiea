#include <stdio.h>
int main()
{
	int lineNumber;
	int columnNumber;
	scanf("%d", &lineNumber);
	scanf("%d", &columnNumber);

	for (int i = 1; i < lineNumber; i++)
	{
		printf("*");
	}
	for (int e = 1; e < columnNumber-1; e++)
	{
		printf("\n");
		for (int i = 1; i < lineNumber; i++)
		{
			if (i == 1 || i == lineNumber -1)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
	}
	printf("\n");

	for (int i = 1; i < lineNumber; i++)
	{
		printf("*");
	}
	printf("\n");


	return 0;
}