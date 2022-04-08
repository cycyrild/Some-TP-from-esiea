#include<stdio.h>
#include<stdlib.h>

void printStar(int nbStar)
{
	for (int j = 1; j < nbStar; j++)
	{
		printf("*");
	}
}

void printSpace(int nbSpace)
{
	for (int k = 0; k < nbSpace; k++)
	{
		printf(" ");
	}
}

int getIntegerGreaterThan(int threshold)
{
	int lenght;
	printf("Height in lines of the pyramid ? \n");
	do
	{
		printf("Please enter a value greater than %d\n", threshold);
		int code = scanf("%d", &lenght);

		if (code != 1)
		{
			printf("Input error\n");
			exit(-1);
		}
	} while (lenght <= threshold);
	return lenght;
}

void pyramid(int lenght)
{
	for (int i = lenght; i > 0; i--)
	{
		printSpace(lenght-i);
		printStar(i * 2);
		printf("\n");
	}
}

void main()
{
	int threshold = 0;
	pyramid(getIntegerGreaterThan(threshold));
}
/*	int lenght;
	do
	{
		printf("Height in lines of the pyramid ? \n");
		int code = scanf("%d", &lenght);

		if (code != 1)
		{
			printf("Input error\n");
			exit(-1);
		}
	} while (lenght < 0 || !getIntegerGreaterThan(lenght, threshold));*/