#include<stdio.h>
int main()
{
	//EXERCICE 1:
	int var = 42;
	printf("The value is %d\n", var);
	printf("The adress of var is %p\n", &var);
	printf("The adress of var still %p\n", &var);

	int iVar;
	int* p_iVar = NULL;

	double fVar = 5.0; //On d�clare puis assigne une variable type flottant
	double* p_fVar = &fVar; //On d�clare puis assigne un pointeur vers l'adresse m�moire de f_var

	printf("The value of &iVar is %p and p_iVar is %p.\n", &iVar, p_iVar); //Retourne l'adresse de iVar. Retourne rien pour p_iVar, pas d'adresse associ� au pointeur. 
	p_iVar = &iVar;
	printf("The value of &iVar is %p and p_iVar is %p.\n", &iVar, p_iVar); //Le pointeur p_iVar est assign� � l'adresse de iVar.
	printf("The value of double pointer p_fVar is: %p | the adress of double fVar is: %p.\n", p_fVar, &fVar);//M�me adresse car p_fVar pointe vers l'adresse m�moire de fVar

	char cVar = 'c';
	char* p_cVar = &cVar;
	printf("The value of char pointer p_cVar is: %p | the adress of char cVar is %p .\n", p_cVar, &cVar);


	return 0;
}