#include <stdio.h>
int main/*EstPair*/()
{
	printf("Hello World\n");
	int anInt = 4;

	switch (anInt%2)
	{
	case 0:
		printf("anInt est pair\n");
		break;
	default:
		printf("anInt est impair\n");
		break;
	}

	//AUTRE METHODE
	/*if (anInt % 0 == 0)
	{
		printf("anInt est pair");
	}
	else
	{
		printf("anInt est impair");
	}*/
	return 0;
}