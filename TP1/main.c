#include <stdio.h>
#define NmbreDor 1.61803398
#define ConstanteDeNeper 2.71828182
#define NmbrePi 3.14159265
#define VitesseLumiere 299792458
#define AccelerationPesanteur 9.80665
int main_()
{
	printf("Hello\n");
	printf("\tMy name is HAL\n");
	/*Q2: On obtient :
	Hello
		My name is HAL

	*/


	printf("Hello\n \tMy name is HAL\n");
	/*Q3: On obtient;
	Hello
		My name is HAL

	*/
	printf("\n Hello\n\tMy name is HAL");
	/*Q4: On obtient:
	
	Hello
		My name is HAL*/

	//EX4:	
	/*Pour afficher du texte à l'utilisateur il faut utiliser la fonction printf.
	Avec "return 0;". Le programme n'affiche rien à l'utilisateur.*/

	printf("Hello World!\n");
	/*EXERCICE 5:
	Après execution on peut comfirmer nos affirmations théoriques.*/

	//QUESTION 5:
	/*
	[type] [nomDeLaVariable];
	Nombre d'élèves: integer (int)
	Prix d'un livre: flottant (float)
	Numéro d'un mois: integer (int)
	Première lettre d'un mois: character (char)*/

	//EXRCICE 6:
	int Integer = 2;
	float FloatingPoint = 4.5;
	char Character = 'a';

	//EXERCICE 7:
	int anInteger = 12;
	char aLetter = 'b';
	float aFloatingPoint = 3.5;
	int anotherInteger = 43;
	printf("anInteger: %d\naLetter: %c\naFloatingPoint: %f\nanotherInteger: %d\n",
		anInteger, aLetter, aFloatingPoint, anotherInteger);

	//EXERCICE 8:
	/*La variable est déjà déclaré. Cela est impossible.*/

	//QUESTION 6:
	/*Cela produit une erreur*/

	//EXERCICE 9:
	//float anotherInteger = 5.0;
	

	//QUESTION 7:
	/*Non cela est impossible même si elle est de type différebte.
	La variable est déjà déclaré*/

	//EXERCICE 11:
	//anInteger = anotherInteger;
	//anotherInteger = anInteger;

	//QUESTION 8:
	/* [anInteger] prend la valeur de[anotherInteger] qui est de 43;
	[anInteger] est donc écrasé
	[anotherInteger] prend la valeur de [anInteger] qui a était écrasé auparavant*/

	//QUESTION 9:
	/*int tmpInt;
	anInteger = tmpInt;
	anInteger = anotherInteger;
	anotherInteger = tmpInt;*/

	//EXERCICE 12:
	printf("Etat initial:\nanInteger:%d\tanotherInteger:%d\n", anInteger, anotherInteger);
	int tmpInt = 0;
	tmpInt = anInteger;
	anInteger = anotherInteger;
	anotherInteger = tmpInt;
	printf("Etat finale:\nanInteger:%d\tanotherInteger:%d\n", anInteger, anotherInteger);


	//QUESTION 10:
	//Nombre d'or:
	printf("\n\nNombre d'or:");
	printf("\nType int: %d\n", (int)NmbreDor);
	printf("Type float: %f\n", (float)NmbreDor);
	printf("Type double: %lf\n", (double)NmbreDor);

	//Constante de Neper:
	printf("\n\nConstante de Nepler:\n");
	printf("Type int: %d\n", (int)ConstanteDeNeper);
	printf("Type float: %f\n", (float)ConstanteDeNeper);
	printf("Type double: %lf\n", (double)ConstanteDeNeper);

	//Nombre Pi:
	printf("\n\nNombre Pi:\n");
	printf("Type int: %d\n", (int)NmbrePi);
	printf("Type float: %f\n", (float)NmbrePi);
	printf("Type double: %lf\n", (double)NmbrePi);

	//Vitesse lumière:
	printf("\n\nVitesse lumiere:\n");
	printf("Type int: %d\n", (int)VitesseLumiere);
	printf("Type float: %f\n", (float)VitesseLumiere);
	printf("Type double: %lf\n", (double)VitesseLumiere);

	//Acceleration de pesanteur:
	printf("\n\nAcceleration de pesanteur:\n");
	printf("Type int: %d\n", (int)AccelerationPesanteur);
	printf("Type float: %f\n", (float)AccelerationPesanteur);
	printf("Type double: %lf\n", (double)AccelerationPesanteur);

	printf("\n\nQuestion bonus:\n");

	//Question 4.1
	printf("╔══════════════════════════════════════╗\n");
	printf("║ Bonjour tout le monde                ║\n");
	printf("╠══════════════════════════════════════╣\n");
	printf("║J'ai eu 19 ans le 20/12/2017          ║\n");
	printf("╠══════════════════════════════════════╣\n");
	printf("║Je suis cool, souriant, ...           ║\n");
	printf("╠══════════════════════════════════════╣\n");
	printf("║J'adore jouer au foot                 ║\n");
	printf("╠══════════════════════════════════════╣\n");
	printf("║Mon rêve est de gagner la C1          ║\n");
	printf("╠══════════════════════════════════════╣\n");
	printf("║Qui suis-je ?                         ║\n");
	printf("╚══════════════════════════════════════╝\n");



	//Question 4.2
	char var; unsigned int A, B, C; float F; int retour;
	printf("Saisir un caractere: ");
	retour = scanf("%c", &var);
	printf("Saisir les valeurs de A B C et F: ");
	retour = retour + scanf("%u %u %u %f", &A, &B, &C, &F);
	printf("%d elements ont ete correctement saisis \n", retour);
	printf("Valeurs saisies: %c %u %u %u %.2f\n", var, A, B, C, F);


	return 0;
}