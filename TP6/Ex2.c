#include<stdio.h>
void main()
{
	int var = 4;
	int* p_var = NULL;
	p_var = &var;

	printf("var = %d, (*p_var) = %d\n", var, (*p_var));
	var++;
	printf("var = %d, (*p_var) = %d\n", var, (*p_var));
	/*On remarque que (*p_var) est équivalent à var.
	En effet (*p_var) va récupérer la valeur associée à l'adresse mémoire spécifiée dans la variable p_var*/

}