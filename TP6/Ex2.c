#include<stdio.h>
void main()
{
	int var = 4;
	int* p_var = NULL;
	p_var = &var;

	printf("var = %d, (*p_var) = %d\n", var, (*p_var));
	var++;
	printf("var = %d, (*p_var) = %d\n", var, (*p_var));
	/*On remarque que (*p_var) est �quivalent � var.
	En effet (*p_var) va r�cup�rer la valeur associ�e � l'adresse m�moire sp�cifi�e dans la variable p_var*/

}