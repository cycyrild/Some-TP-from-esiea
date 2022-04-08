#include<stdio.h>
void swap(int* item1, int* item2)
{
	int tmp = *item2; //variable tampon
	*item2 = *item1;
	*item1 = tmp;
}
void main()
{
	int var1 = 4, var2 = 6;
	printf("var1: %d | var2: %d\n", var1, var2);

	swap(&var1, &var2);
	//On envoie les adresses mémoire où intervertir les valeurs

	printf("var1: %d | var2: %d\n", var1, var2);

}