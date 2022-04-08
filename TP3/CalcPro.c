#include<stdio.h>
int main/*CalcPro*/()
{
	char operatorCharArray[] = { '+', '-', '*', '/', '%' };
	char selectedOperator;
	int x;
	int y;
	int result;
	printf("SVP entrer l'operateur :\n"
		"+ => addition\n"
		"- => soustraction\n"
		"* => multiplication\n"
		"/ => division\n"
		"%% => modulo\n");
	scanf("%c", &selectedOperator);

	printf("Donner les operandes :\n");
	scanf("%d", &x);
	scanf("%d", &y);

	switch (selectedOperator)
	{
	case '+':
		result = x + y;
		printf("%d + %d = %d\n", x, y, result);
		break;
	case '-':
		result = x - y;
		printf("%d - %d = %d\n", x, y, result);
		break;
	case '*':
		result = x * y;
		printf("%d * %d = %d\n", x, y, result);
		break;
	case '/':
		result = x / y;
		printf("%d / %d = %d\n", x, y, result);
		break;
	case '%':
		result = x % y;
		printf("%d %% %d = %d\n", x, y, result);
		break;
	default:
		break;
	}
	return 0;
}