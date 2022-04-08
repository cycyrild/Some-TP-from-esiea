#include<stdio.h>
void main()
{
	int var = 7;
	int tmp;
	int* p_var = &var;
	printf("var = %d, (*p_var) = %d\n", var, (*p_var));

	tmp = (*p_var) + 5;
	//La variable integer tmp est �gale � la valeur associ�e � l'adresse m�moire de p_var + 5
	
	printf("var = %d, (*p_var) = %d, tmp = %d\n", var, (*p_var), tmp);

	(*p_var) = tmp;
	//On �crase la valeur associ�e � l'adresse m�moire de p_var.
	//C'est-�-dire la variable var. Elle est d�sormais �gale � tmp.
	//Cette instruction est �quivalente � 'var = tmp'.

	printf("var = %d, (*p_var) = %d, tmp = %d\n", var, (*p_var), tmp);
	//On remarque donc que var = (*p_var) = tmp
}