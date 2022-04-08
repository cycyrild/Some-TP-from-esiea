#include<stdio.h>

void affiche_nombres(int start, int end)
{
	for (int i = start; i < end; i++)
	{
		printf("%d\t", i);
	}
	printf("\n");
}

void main()
{
	int startN, endN;
	printf("Saisir la limite gauche et droite: \n");
	scanf("%d %d", &startN, &endN);
	affiche_nombres(startN, endN);
}