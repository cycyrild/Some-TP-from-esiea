#include<stdio.h>

int getMax(int size, int iArray[])
{
	int maxValue = iArray[0];
	for (int i = 1; i < size; i++)
	{
		if (iArray[i] > maxValue)
		{
			maxValue = iArray[i];
		}
	}
	return maxValue;
}

int getMin(int size, int iArray[])
{
	int minValue = iArray[0];
	for (int i = 1; i < size; i++)
	{
		if (iArray[i] < minValue)
		{
			minValue = iArray[i];
		}
	}
	return minValue;
}

int getMaxIndex(int size, int iArray[])
{
	int maxValue = iArray[0];
	int maxIndexValue;
	for (int i = 1; i < size; i++)
	{
		if (iArray[i] > maxValue)
		{
			maxIndexValue = i;
			maxValue = iArray[i];
		}
	}
	return maxIndexValue;
}

int getMinIndex(int size, int iArray[])
{
	int minValue = iArray[0];
	int minIndexValue;
	for (int i = 1; i < size; i++)
	{
		if (iArray[i] < minValue)
		{
			minIndexValue = i;
			minValue = iArray[i];
		}
	}
	return minIndexValue;

}