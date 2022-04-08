#include<stdio.h>

void addToInteger1(int integer1, int integer2)
{

	printf("1/ integer1 = %d integer2 = %d\n", integer1, integer2);
	//Etat intial des valeurs inject� dans la proc�dure

	integer1 += integer2;
	//On additionne � integer1, integer2. integer1 = integer1 + integer2

	printf("1/ integer1 = %d integer2 = %d\n", integer1, integer2);
	//Etat finale des variables

	//Ces variables sont isol� du reste du programme
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
	//La valeur associ� � l'adresse m�moire de p_integer1 est �craser
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
	//Ces valeurs n'ont pas chang� car on a pas �crit sur leurs adresses m�moires.

	addToInteger2(var1, var2);

	printf("m/ var1 = %d var2 = %d\n", var1, var2);
	//Etat intial des valeurs.

	addToInteger3(&var1, &var2);
	//La proc�dure va �crire directement sur les adresses m�moires des variables.
	//Connaissant leurs adresses. Elle va directement les �craser.

	printf("m/ var1 = %d var2 = %d\n", var1, var2);
	//var1 a �tait modifi� car on inject� son adresse m�moire et la valeur associ�
	//� celle-ci � �tait �cras�.
	
}