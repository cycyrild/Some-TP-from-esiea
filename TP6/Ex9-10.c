#include<stdio.h>
#include<stdlib.h>

#pragma region Ex9
void getMean(
	int size /*la taille n'a pas besoin d'être modifié, utilisation inutile du pointeur*/,
	int iArray[] /*un tableau se comporte comme un pointeur*/,
	double* p_Mean /*on utilise un pointeur pour écraser la variable associé à l'adresse mémoire*/);

void getMinMax(int size, int iArray[], int* p_min, int* p_max);

void getMinMaxIndex(int size, int iArray[], int* p_minIndex, int* p_maxIndex);

void getMode(int size, int iArray[], int* p_mode);

void getMedianIndex(int size, int iArray[], int* p_median);

void getMeanModeMedian(int size, int iArray[], int* p_median, int* p_mode, int* p_mean);
#pragma endregion

void getMinMax(int size, int iArray[], int* p_min, int* p_max)
{
	int minValue = iArray[0];
	int maxValue = iArray[0];

	for (int i = 1; i < size; i++)
	{
		if (iArray[i] < minValue)
		{
			minValue = iArray[i];
		}
		if (iArray[i] > maxValue)
		{
			maxValue = iArray[i];
		}
	}

	(*p_min) = minValue;
	(*p_max) = maxValue;
}

void getMinMaxIndex(int size, int iArray[], int* p_minIndex, int* p_maxIndex)
{
	int minValue = iArray[0];
	int maxValue = iArray[0];
	*p_minIndex = 0;
	*p_maxIndex = 0;

	for (int i = 1; i < size; i++)
	{
		if (iArray[i] < minValue)
		{
			minValue = iArray[i];
			*(p_minIndex) = i;
		}
		if (iArray[i] > maxValue)
		{
			maxValue = iArray[i];
			*(p_maxIndex) = i;
		}
	}
}

int getFirstIndexOfValue(int size, int iArray[], int value, int* p_index)
{
	//printf("Search on index: ");
	for (int i = 0; i < size; i++)
	{
		//printf("%d,", i);
		if (iArray[i] == value)
		{
			(*p_index) = i;
			printf("\n");
			return 1;
		}
	}
	//printf("\n");
	return 0;
}

void main()
{
	int maxValue, minValue;
	int maxIndex, minIndex;
	int anIntArray[] = { 35,5,0,1,5,-7 };
	getMinMax(6, anIntArray, &minValue, &maxValue);
	getMinMaxIndex(6, anIntArray, &minIndex, &maxIndex);
	printf("maxIndex = %d, minIndex %d\n", maxIndex, minIndex);
	printf("maxValue = %d, minValue = %d\n", maxValue, minValue);

	int ValueToSearch;
	int indexFound;
	printf("Enter a value to search index:\n");

	if (scanf("%d", &ValueToSearch) != 1)
	{
		exit(-1);
	}

	if (getFirstIndexOfValue(6, anIntArray, ValueToSearch, &indexFound))
	{
		printf("Index found %d\n", indexFound);
	}
	else
	{
		printf("No element found");
	}
}