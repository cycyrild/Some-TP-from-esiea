#include<stdio.h>

void Init_tableau(int array[], int lenght)
{
	for (int i = 0; i < lenght; i++)
	{
		array[i] = (rand() % 9);
	}
}

void ShowArray(int anArray[], int ArrayLenght)
{
	for (int i = 0; i < ArrayLenght; i++)
	{
		printf("anArray[%d] = %d\n", i, anArray[i]);
	}
}

void initArrayZeroToTen(int array[])
{
	for (int i = 0; i < 10; i++)
	{
		array[i] = i;
	}
}

void initArrayOneToNine(int array[])
{
	for (int i = 1; i < 9; i++)
	{
		array[i] = i;
	}
}

void initReverse(int array[])
{
	for (int i = 0; i < 10; i++)
	{
		array[i] = 10 - i;
	}
}

int Count(char Chararray[], int ArrayLenght)
{
	int nmbreMajChar = 0;
	int i = 0;
	char currentChar;


	while (Chararray[i] != '\0')
	{
		currentChar = Chararray[i];
		if ((int)currentChar >= 65 && (int)currentChar <= 90)
		{
			nmbreMajChar++;
		}
		i++;
	}
	return nmbreMajChar;
}

int lenght(char strg[])
{
	int i = 0;
	while (strg[i] != '\0')
	{
		i++;
	}
	return i;
}

int espace(char strg[])
{
	
	int i = 0;
	int nmbreSpace = 0;
	while (strg[i] != '\0')
	{
		if (strg[i] == ' ')
		{
			nmbreSpace++;
		}
		i++;
	}
	return nmbreSpace;
}

void reverse(char strg[])
{
	int l = lenght(strg), i = 0, j = l - 1;
	char temp;
	while (i < j)
	{
		temp = strg[i];
		strg[i] = strg[j];
		strg[j] = temp;
		i++;
		j--;
	}
}

int main()
{
	/*char chararrayTest[10] = "BonJour";
	printf("%d", Count(chararrayTest, 10));
	return 0;*/


	//Question 1:
	/*float floatArray[15];
	char chararray[80];*/

	//Question 2:
	/*a)*/	float floatArrayLenght10[10] = { 10.0,9.0,8.0,7.0,6.0,5.0,4.0,3.0,2.0,1.0 };
	/*b)*/	char charArrayLenght6[6] = { 'a','e','i','o','u','y' };

	//Question 3:
	int intArrayLenght10[10];
	//ShowArray(intArrayLenght10,10);

	//Question 4:
	/*initArrayOneToNine(intArrayLenght10);*/
	//ShowArray(intArrayLenght10, 10);

	//initReverse(intArrayLenght10);
	//howArray(intArrayLenght10, 10);

	/*printf("Question 8:\n");
	int myExampleArray[10] = { 9,6,10,7,9,3,5,12,0,8 };
	int seekedElementIndex;
	for (int i = 0; i < 10; i++)
	{
		if (myExampleArray[i] < 0 | i ==9)
		{
			seekedElementIndex = myExampleArray[i];
		}
	}
	printf("%d", seekedElementIndex);*/
	printf("aa: %d", espace("le premier chiffre est 04"));

}



//fgets(word, 20, stdin);
//scanf("%9[^\n], word);
//strlen
//strcat
//strcpy
//strcmp

