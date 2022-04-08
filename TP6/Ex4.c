#include<stdio.h>
void main()
{
	int* p_var;
	p_var = NULL;
	(*p_var) = 10;
	
	//le pointeur p_var pointe vers une adresse mémoire arbitraire.
	//il est donc impossible d'écraser la valeur associée à cette adresse mémoire
}