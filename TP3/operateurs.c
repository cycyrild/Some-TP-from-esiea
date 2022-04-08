#include<stdio.h>
int main/*Operateur*/()
{
	printf("Hello World!\n");

	int valI; float valF;
	valI = 2;
	valF = 3.5;
	valI++;
	printf("valI: %d | valF: %f\n", valI, valF);
	valI--;
	valF += 3;
	printf("valI: %d | valF: %f\n", valI, valF);
	valI *= 2;
	valF *= 2;
	printf("valI: %d | valF: %f\n", valI, valF);
	valI -= (5 % 2);
	valF = valF/ 7;
	printf("valI: %d | valF: %f\n", valI, valF);
	return 0;
}