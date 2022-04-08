#include <stdio.h>
int main()
{
	int lineNumber;
	int columnNumber;
	scanf("%d", &lineNumber);
	scanf("%d", &columnNumber);
	for (int e = 0; e < columnNumber; e++)
	{
		for (int i = 1; i < lineNumber; i++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}