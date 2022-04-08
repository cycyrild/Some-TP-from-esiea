#include <stdio.h>
#include<stdlib.h>
void swap(int iArray[], int index1, int index2)
{
	int temp = iArray[index1];
	iArray[index1] = iArray[index2];
	iArray[index2] = temp;
}
//EXERCICE 1
void loadArray(int size, int iArray[])
{
	for (int i = 0; i < size; i++)
	{
		int code =scanf("%d", &iArray[i]);

		if (code != 1)
		{
			printf("Input error\n");
			exit(-1);
		}
	}

	//5 2 9 -15 94 5 10 74 9 51
	/*int code = scanf("%d %d %d %d %d %d %d %d %d %d",
		&iArray[0],
		&iArray[1],
		&iArray[2],
		&iArray[3],
		&iArray[4],
		&iArray[5],
		&iArray[6],
		&iArray[7],
		&iArray[8],
		&iArray[9]);
	if (code != size)
	{
		printf("Input error\n");
		exit(-1);
	}*/


	/*for (int i = 0; i < size; i++)
	{
		int value;
		int code = scanf("%d", &value);
		iArray[i] = value;
		if (code != 1)
		{
			printf("Input error\n");
			exit(-1);
		}
	}*/
}

//EXERCICE 2
void showArray(int size, int iArray[])
{
	for (int i = 0; i < size; i++)
	{
		//printf("iArray[%d]=%d\n", i, iArray[i]);
		printf("%d ", iArray[i]);
	}
	printf("\n");
}
