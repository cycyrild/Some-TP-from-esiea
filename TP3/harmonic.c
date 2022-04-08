#include <stdio.h>
int main/*Harmonic*/()
{
	int keyPressed;
	float result = 0;
	do
	{
		printf("Rank of Harmonic serie ?\n");
		int code = scanf("%d", &keyPressed);
		if (code !=1)
		{
			printf("Input error\n");
			return -1;
		}
	} while (keyPressed < 0);



	for (int e = 1; e <= keyPressed-1; e++)
	{
		printf("1/%d + ", e);
	}
	printf("1/%d = ", keyPressed);

	for (int i = 1; i <= keyPressed; i++)
	{
		result = result +  1.0f / i;
	}
	printf("%f\n", result);
	return 0;
}