#include<stdio.h>

void addToInteger1(int integer1, int integer2)
{

	printf("1/ integer1 = %d integer2 = %d\n", integer1, integer2);
	//Etat intial des valeurs injecté dans la procédure

	integer1 += integer2;
	//On additionne à integer1, integer2. integer1 = integer1 + integer2

	printf("1/ integer1 = %d integer2 = %d\n", integer1, integer2);
	//Etat finale des variables

	//Ces variables sont isolé du reste du programme
}

void addToInteger2(int var1, int var2)
{
	printf("2/ var1 = %d var2 = %d\n", var1, var2);
	var1 += var2;
	printf("2/ var1 = %d var2 = %d\n", var1, var2);
}

void addToInteger3(int* p_integer1, int* p_integer2)
{
	printf("3/ (*p_integer1) = %d (*p_integer2) = %d\n",
		(*p_integer1), (*p_integer2));

	(*p_integer1) += (*p_integer2);
	//La valeur associé à l'adresse mémoire de p_integer1 est écraser
	//Donc ici la valeur de var1.

	printf("3/ (*p_integer1) = %d (*p_integer2) = %d\n",
		(*p_integer1), (*p_integer2));

}

void main()
{
	
	int var1, var2;
	var1 = 2;
	var2 = 2;
	
	printf("m/ var1 = %d var2 = %d\n", var1, var2);
	//Etat intial des valeurs

	addToInteger1(var1, var2);

	printf("m/ var1 = %d var2 = %d\n", var1, var2);
	//Etat intial des valeurs.
	//Ces valeurs n'ont pas changé car on a pas écrit sur leurs adresses mémoires.

	addToInteger2(var1, var2);

	printf("m/ var1 = %d var2 = %d\n", var1, var2);
	//Etat intial des valeurs.

	addToInteger3(&var1, &var2);
	//La procédure va écrire directement sur les adresses mémoires des variables.
	//Connaissant leurs adresses. Elle va directement les écraser.

	printf("m/ var1 = %d var2 = %d\n", var1, var2);
	//var1 a était modifié car on injecté son adresse mémoire et la valeur associé
	//à celle-ci à était écrasé.
	
}