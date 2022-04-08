#include<stdio.h>

#pragma region QUESTION
void print3Darray(int nbLine, int nbColumn, int nbProfondeur, int arr[nbLine][nbColumn][nbProfondeur])
{
	for (int i = 0; i < nbLine; i++)
	{
		for (int j = 0; j < nbColumn; j++)
		{
			for (int k = 0; k < nbProfondeur; k++)
			{
				printf("arr[%d][%d][%d] = %d\t", i, j, k, arr[i][j][k]);
				if (k == 2)
				{
					printf("\n");
				}
			}
		}
		printf("\n");
	}
}

void load2Darray(int nbLin, int nbCol, int iArray[nbLin][nbCol])
{
	for (int i = 0; i < nbLin; i++)
	{
		for (int j = 0; j < nbCol; j++)
		{
			iArray[i][j] = 0;
		}
	}
}

/*void loadArray(int* arr, int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			*((arr + i * n) + j) = 0;
		}
	}
}*/

void load3Darray(int nbLine, int nbColumn, int nbProfondeur, float arr[nbLine][nbColumn][nbProfondeur])
{
	for (int i = 0; i < nbLine; i++)
	{
		for (int j = 0; j < nbColumn; j++)
		{
			for (int k = 0; k < nbProfondeur; k++)
			{
				arr[i][j][k] = 1.0;
			}
		}
	}
}
#pragma endregion

int getSumOfFourNeighbors(int nbLin, int nbCol, int iArray[nbLin][nbCol], int eltLin, int eltCol)
{
	int isLeftExists = eltLin - 1 >= 0;
	int isRightExists = eltLin + 1 < nbLin;
	int isTopExists = eltCol + 1 < nbCol;
	int isBottomExists = eltCol - 1 >= 0;
	int summ = 0;
	//summ += iArray[eltLin][eltCol];
	//printf("curr: iArray[%d][%d] = %d\n", eltLin, eltCol, iArray[eltLin][eltCol]);
	if (isLeftExists)
	{
		summ += iArray[eltLin - 1][eltCol];
		printf("iArray[%d][%d] = %d\n", eltLin - 1, eltCol, iArray[eltLin - 1][eltCol]);

	}
	if (isRightExists)
	{
		summ += iArray[eltLin + 1][eltCol];
		printf("iArray[%d][%d] = %d\n", eltLin + 1, eltCol, iArray[eltLin + 1][eltCol]);

	}
	if (isTopExists)
	{
		summ += iArray[eltLin][eltCol + 1];
		printf("iArray[%d][%d] = %d\n", eltLin, eltCol + 1, iArray[eltLin][eltCol + 1]);

	}
	if (isBottomExists)
	{
		summ += iArray[eltLin][eltCol - 1];
		printf("iArray[%d][%d] = %d\n", eltLin, eltCol - 1, iArray[eltLin][eltCol - 1]);

	}
	return summ;
}

void showArray(int nbLin, int nbCol, int iArray[nbLin][nbCol])
{
	for (int i = 0; i < nbLin; i++)
	{
		for (int e = 0; e < nbCol; e++)
		{
			printf("%d\t", /*i, e,*/ iArray[i][e]);
		}
		printf("\n");
	}
}

void initArray(int nbLin, int nbCol, int iArray[nbLin][nbCol])
{
	int anInt = 1;
	for (int i = 0; i < nbLin; i++)
	{
		for (int e = 0; e < nbCol; e++)
		{
			iArray[i][e] = anInt;
			anInt++;
		}
	}
}

void loadArray(int nbLin, int nbCol, int iArray[nbLin][nbCol])
{
	for (int i = 0; i < nbLin; i++)
	{
		for (int e = 0; e < nbCol; e++)
		{
			int value;
			printf("iArray[%d][%d] = ", i, e);
			scanf("%d", &value);
			iArray[i][e] = value;
		}
	}
}

int getSumOfEightNeighbors(int nbLin, int nbCol, int iArray[nbLin][nbCol], int eltLin, int eltCol)
{
	int isLeftExists = (eltLin - 1) >= 0;
	int isRightExists = (eltLin + 1) < nbLin;
	int isTopExists = (eltCol + 1) < nbCol;
	int isBottomExists = (eltCol - 1) >= 0;
	int summ = 0;
	if (isLeftExists)
	{
		summ += iArray[eltLin - 1][eltCol];
		printf("iArray[%d][%d] = %d\n", eltLin - 1, eltCol, iArray[eltLin - 1][eltCol]);
	}
	if (isRightExists)
	{
		summ += iArray[eltLin + 1][eltCol];
		printf("iArray[%d][%d] = %d\n", eltLin + 1, eltCol, iArray[eltLin + 1][eltCol]);
	}
	if (isTopExists)
	{
		summ += iArray[eltLin][eltCol + 1];
		printf("iArray[%d][%d] = %d\n", eltLin, eltCol + 1, iArray[eltLin][eltCol + 1]);

	}
	if (isBottomExists)
	{
		summ += iArray[eltLin][eltCol - 1];
		printf("iArray[%d][%d] = %d\n", eltLin, eltCol - 1, iArray[eltLin][eltCol - 1]);
	}
	if (isLeftExists && isBottomExists)
	{
		summ += iArray[eltLin - 1][eltCol - 1];
		printf("iArray[%d][%d] = %d\n", eltLin - 1, eltCol - 1, iArray[eltLin - 1][eltCol - 1]);

	}
	if (isLeftExists && isTopExists)
	{
		summ += iArray[eltLin - 1][eltCol + 1];
		printf("iArray[%d][%d] = %d\n", eltLin - 1, eltCol + 1, iArray[eltLin - 1][eltCol + 1]);

	}
	if (isRightExists && isTopExists)
	{
		summ += iArray[eltLin + 1][eltCol + 1];
		printf("iArray[%d][%d] = %d\n", eltLin + 1, eltCol + 1, iArray[eltLin + 1][eltCol + 1]);
	}
	if (isRightExists && isBottomExists)
	{
		summ += iArray[eltLin + 1][eltCol - 1];
		printf("iArray[%d][%d] = %d\n", eltLin + 1, eltCol - 1, iArray[eltLin + 1][eltCol - 1]);
	}

}

int main()
{
	//QUESTION 1:
	/*float floatArray[20][2];
	char charArray[4][50];
	int intArray[4][4][4];
	int fiveDimArray[30][30][30][30][30];*/

	//Question 2:
	/*1)	printf("%d", array[3][4]);
	* 2)	printf("%c", array[10][7]);
	* 3)	array[3][1][4]=3.14;*/

	//QUESTION 3:
	/*1)
	int arr1[3][3] = { {2, 4, 6}, {8, 12, 14}, {16, 18, 20} };
	showArray(3, 3, arr1);*/

	//QUESTION 4:
	/*int arr2[3][3][3] =
	{
						{{10,20,30},{40,50,60},{70,80,90}},//elements of block 1
						{{11,22,33},{44,55,66},{77,88,99}},//elements of block 2
						{{10,20,30},{40,50,60},{70,80,90}},//elements of block 1

	};
	print3Darray(3, 3, 3, arr2);*/

	//QUESTION 5:
	/*int iArray[100][200];
	load2Darray(100, 200, iArray);
	showArray(100, 200, iArray);*/

	//QUESTION 6:
	/*float float3D[50][100][100];
	load3Darray(float3D);*/

	//------------------------------------------

	//Exercice 1:
	int intArray2D[4][5];
	/*int intArray2D[4][4] =
	{
	   {0, 1, 2, 3} ,
	   {4, 5, 6, 7} ,
	   {8, 9, 10, 11},
		{12, 13, 14, 15}
	};*/

	//EXERCICE 2:
	initArray(4, 5, intArray2D);

	//EXERCICE 3:
	showArray(4, 5, intArray2D);

	//EXERCICE 4:
	/*Fait*/

	//EXERCICE 5:
	//loadArray(4, 5, intArray2D);
	//showArray(4, 5, intArray2D);

	//EXERCICE 6:
	printf("Results 0: %d\n", getSumOfFourNeighbors(4, 5, intArray2D, 1, 1));
	printf("\n\n");
	//EXERCICE 7:
	printf("Results 1: %d\n", getSumOfEightNeighbors(4, 5, intArray2D, 1, 1));


}

