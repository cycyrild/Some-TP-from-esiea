#include<stdio.h>
#include<stdlib.h>
#include <string.h>


int getMode(int size, int iArray[])
{
	int count = 0, maxCount = 0, value = 0;
	for (int i = 0; i < size; i++)
	{
		for (int j=0; j<i; j++)
		{
			if (iArray[i] == iArray[j])
			{
				count++;
			}
		}

		if (count > maxCount)
		{
			maxCount = count;
			value = iArray[i];
		}
	}
	return value;
}

double getMean(int size, int iArray[])
{
	double mean = 0;
	for (int i = 0; i < size; i++)
	{
		mean += iArray[i];
	}
	mean = mean / size;
	return mean;
}

void bubbleSort(int size, int array[])
{
	int estTrie;
	do
	{
		estTrie = 1;
		for (int i = 0; i <= size - 2; i++) {

			if (array[i] > array[i + 1]) {

				swap(array, i, i + 1);
				estTrie = 0;
			}
		}
	} while (estTrie == 0);
}


void loadSentance(char sentence[])
{
	if(scanf(" %49[^\n]", sentence) != 1)
	{
		printf("Input error\n");
		exit(-1);
	}
}

void toUpperCase(char sentence[])
{
	int i = 0;
	while (sentence[i]!='\0')
	{
		sentence[i] = (toupper(sentence[i]));
		i++;
	}
}

void toLowerCase(char sentence[])
{
	int i = 0;
	while (sentence[i]!= '\0')
	{
		sentence[i] = (tolower(sentence[i]));
		i++;
	}
}

void loadWord(char word[])
{
	if (scanf("%49s", word) != 1)
	{
		printf("Input error\n");
		exit(-1);
	}
}

int getMedian(int size, int iArray[])
{
	return iArray[size / 2];
}

int TestParite(int intTest)
{
	if (intTest % 2 == 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

void mirror(char sentence[])
{
	char tmpChar;
	int i = 0;
	int f = strlen(sentence) - 1;
	for (int i = 0; i < f; i++)
	{
		tmpChar = sentence[i];
		sentence[i] = sentence[f];
		sentence[f] = tmpChar;
		f--;
	}
}

int main()
{
	/*char* str = "345 3345 35 75 52 386";
	scanf("%s", str);
	char* end = str;
	while (*end) {
		int n = strtol(str, &end, 10);
		printf("%d\n", n);
		while (*end == ' ') {
			end++;
		}
		str = end;
	}*/

#pragma region PART1
	int anArray[9];
	printf("Please enter 10 integers:\n");
	loadArray(10, anArray);
	showArray(10, anArray);
	printf("The mean of the elements equals: %lf\n", getMean(10, anArray));
	printf("The maximum value of the element equals: %d\n", getMax(10, anArray));
	printf("The minimum value of the element equals: %d\n", getMin(10, anArray));
	printf("The (first) max of the elements is at index: %d\n", getMaxIndex(10, anArray));
	printf("The (first) min of the elements is at index: %d\n", getMinIndex(10, anArray));

	//EXERCICE 10:
	printf("The mode of the array equals: %d\n", getMode(10, anArray));
	printf("The mode2: %d\n", getMode(10, anArray));
	bubbleSort(10, anArray);
	showArray(10, anArray);
	printf("The median of the array equals: %d\n", getMedian(10, anArray));
#pragma endregion

	printf("Please enter a word (50 char max):\n");
	char word[50];
	char word2[50];



	//EXERCICE 14:
	loadWord(word);
	printf("You have entered the word:\n%s\n", word);

	//EXERCICE 16
	printf("Please enter a sentence(30 char max) :\n");
	while (getchar() != '\n');

	loadSentance(word2);
	printf("You have entered the sentence:\n%s\n", word2);
	//EXERCICE 16:
	toUpperCase(word2);
	printf("Uppercase: %s\n", word2);

	//EXERCICE 17:
	toLowerCase(word2);
	printf("Lowercase: %s\n", word2);

	//EXERCICE 18:
	mirror(word2);
	printf("Mirroir: %s\n", word2);

	return 0;
}
