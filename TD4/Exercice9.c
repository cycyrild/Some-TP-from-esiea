#include <stdio.h>
int main()
{
	int lineNumber;
	int columnNumber;
	scanf("%d", &lineNumber);
	scanf("%d", &columnNumber);

	for (int i = 1; i <= lineNumber + 1; i++)
	{
		printf("*");
	}
	for (int e = 1; e < columnNumber; e++)
	{
		printf("\n");
		for (int i = 0; i <= lineNumber; i++)
		{

			if (i == 0 || i == lineNumber || i == lineNumber - e || i ==  e)
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

	for (int i = 1; i <= lineNumber + 1; i++)
	{
		printf("*");
	}

	printf("\n");

	return 0;

}