#include<stdio.h>
void main()
{
	int var = 7;
	int tmp;
	int* p_var = &var;
	printf("var = %d, (*p_var) = %d\n", var, (*p_var));

	tmp = (*p_var) + 5;
	//La variable integer tmp est égale à la valeur associée à l'adresse mémoire de p_var + 5
	
	printf("var = %d, (*p_var) = %d, tmp = %d\n", var, (*p_var), tmp);

	(*p_var) = tmp;
	//On écrase la valeur associée à l'adresse mémoire de p_var.
	//C'est-à-dire la variable var. Elle est désormais égale à tmp.
	//Cette instruction est équivalente à 'var = tmp'.

	printf("var = %d, (*p_var) = %d, tmp = %d\n", var, (*p_var), tmp);
	//On remarque donc que var = (*p_var) = tmp
}