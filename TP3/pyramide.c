#include <stdio.h>
int main/*Pyramide*/()
{
	int lenght;
	int code;
	do
	{
		printf("Pyramid length: \n");
		code = scanf("%d", &lenght);
		if (code != 1)
		{
			printf("Input error\n");
			return -1;
		}
	}
	while (lenght < 0);
	for (int i = lenght; i > 0; i--)
	{
		for (int k = 0; k < lenght - i; k++)
		{
			printf(" ");
		}
		for (int j = 1; j < i*2; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	return 0;
}