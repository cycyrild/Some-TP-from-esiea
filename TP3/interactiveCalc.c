#include <stdio.h>
int main/*InteractiveCalc*/()
{
	char operatorCharArray[] = {'+', '-', '*', '/', '%' };
	int selectedOperator;
	int x;
	int y;
	int result;
	printf("SVP entrer l'operateur :\n"
		"1 => addition\n"
		"2 => soustraction\n"
		"3 => multiplication\n"
		"4 => division\n"
		"5 => modulo\n");
	int code = scanf("%d", &selectedOperator);
	if (!((selectedOperator) >= 1 && (selectedOperator) <= 5) && code == 1)
	{
		printf("Input error\n");
		return -1;
	}
	printf("Donner les operandes :\n");
	scanf("%d", &x);
	scanf("%d", &y);

	switch (selectedOperator)
	{
	case 1:
		result = x + y;
		break;
	case 2:
		result = x - y;
		break;
	case 3:
		result = x * y;
		break;
	case 4:
		result = x / y;
		break;
	case 5:
		result = x % y;
		break;
	default:
		break;
	}

	printf("%d %c %d = %d\n", x, operatorCharArray[selectedOperator - 1], y, result);

	//QUESTION 3:
	//echo 1 2 3 | ./a.out
	//Cette commande effectue l'addition (1 pour addition) de 2 et 3 (1 2 pour les deux autres paramètres).



	/*AUTRE METHODE
	switch (selectedOperator)
	{
	case 1:
		result = x + y;
		printf("%d + %d = %d\n", x, y, result);
		break;
	case 2:
		result = x - y;
		printf("%d - %d = %d\n", x, y, result);
		break;
	case 3:
		result = x * y;
		printf("%d * %d = %d\n", x, y, result);
		break;
	case 4:
		result = x / y;
		printf("%d / %d = %d\n", x, y, result);
		break;
	case 5:
		result = x % y;
		printf("%d % %d = %d\n", x, y, result);
		break;
	default:
		break;
	}*/
	return 0;
}