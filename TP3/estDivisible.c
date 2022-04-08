#include <stdio.h>
int main/*EstDivisible*/()
{

	printf("Hello World!\n");
	int var = 4;
	for (int i = 1; i <= 5; i++)
	{
		switch (var % i)
		{
		case 0:
			printf("Le nombre %u est divisible par %d.\n", var, i);
			break;
		default:
			printf("Le nombre %u n'est pas divisible par %d.\n", var, i);
			break;
		}
		/*Question 1 :
		Boum 1 !
		Boum 2 !
		La valeur de var est entre 0 et 5.*/

		/*Question 2 :
		int anInteger;
		scanf("%d", &anInteger);

		float aFloat;
		scanf("%f", &aFloat);

		char aChar;
		scanf("%c", &aChar);*/



		/*AUTRE METHODE
		if (i % 2 == 0)
		{
			printf("Le nombre %d est divisible par %d\n", var, i);
		}
		else
		{
			printf("Le nombre %u n'est pas divisible par %d.\n", var, i);
		}*/
	}

	return 0;
}