#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main/*StarsMatrix*/()
{
	int lines;
	do
	{
		printf("Please, enter a number of lines ? \n");
		int code = scanf("%d", &lines);
		if (code != 1)
		{
			printf("Input error\n");
			return -1;
		}
	} while (lines < 0);
	for (int i = 0; i < lines; i++)
	{
		for (int j = 0; j < 60; j++)
		{
			usleep(50);
			int alea = rand() % 2;
			if (alea == 1)
			{
				printf(" ");
			}	
			else
			{
				printf("*");
			}
		}

	}
	printf("\n");
	return 0;
}