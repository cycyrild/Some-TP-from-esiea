#include<stdio.h>
void main()
{
	int* p_var;
	p_var = NULL;
	(*p_var) = 10;
	
	//le pointeur p_var pointe vers une adresse m�moire arbitraire.
	//il est donc impossible d'�craser la valeur associ�e � cette adresse m�moire
}