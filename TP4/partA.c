#include<stdio.h>

int maxInt(int var1, int var2)
{
	if (var1 > var2)
	{
		return var1;
	}
	else
	{
		return var2;
	}
}

double maxFloat(double var1, double var2, double var3)
{
	double maxVar = var1;
	if (var2 > maxVar)
	{
		maxVar = var2;
	}
	else if (var3 > maxVar)
	{
		maxVar = var3;
	}
	return maxVar;
}

int isNegative(int anInt)
{
	if (anInt >= 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int isEven(int var1)
{
	if (var1%2 == 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int isAMultiple(int value, int multiple)
{
	if (multiple % value == 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int sumOfNFirstInteger(int rank)
{
	int result=0;
	for (int i = 0; i <= rank; i++)
	{
		result+=i;
	}
	return result;
	//return rank * (rank + 1) / 2;
}

void count(int rank)
{
	while (rank > 0)
	{
		printf("Loop %d\n", rank);
		rank = rank - 1;
	}
}

void main()
{
	printf("isAMultiple %d\n", isAMultiple(10, 10));
	printf("isEven %d\n", isEven(-1));
	printf("isEven %.2lf\n", maxFloat(5.0, 4.2, 9.2));
	printf("maxInt %d\n", maxInt(9,1));
	printf("sumOfNFirstInteger %d\n", sumOfNFirstInteger(10));
	printf("isNegative %d\n", isNegative(-1));

	int times = 5;
	printf("Before: %d\n", times);
	count(times);
	printf("After: %d\n", times);
}