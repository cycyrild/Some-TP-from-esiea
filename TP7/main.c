//Cyril DRIMARACCI ESIEA 2021
#include<stdio.h>
#include <math.h> 
#include <stdlib.h>

void decimal_to_binary_power(unsigned int decimal, char strg[])
{
	int i = 0;
	int binary[128];

	while (decimal != 0)
	{
		int rem = decimal % 2;
		int c = (int)pow(10, i);
		if (rem * c == 0)
		{
			binary[i] = 0;
		}
		else
		{
			binary[i] = 1;
		}
		decimal /= 2;
		i++;
	}

	for (int j = i; j > 0; j--)
	{
		strg[j - 1] = binary[i - j] + '0';
	}
	strg[i] = '\0';
}

void decimal_to_octal_horner(unsigned int decimal, char strg[])
{
	int octalNumber[128], i = 0;

	while (decimal != 0)
	{
		octalNumber[i] = decimal % 8;
		decimal = decimal / 8;
		i++;
	}

	for (int j = i; j > 0; j--)
	{
		strg[j - 1] = octalNumber[i - j] + '0';
	}
	strg[i] = '\0';
}

void decimal_to_binary_horner(unsigned int decimal, char strg[])
{
	int r;
	int binary[128];
	int i = 0;

	while (decimal != 0)
	{
		r = decimal % 2;
		decimal = decimal / 2;
		binary[i] = r;
		i++;
	}

	for (int j = i; j > 0; j--)
	{
		strg[j - 1] = binary[i - j] + '0';
	}
	strg[i] = '\0';
}

void decimal_to_octal_power(unsigned int decimal, char strg[])
{
	unsigned int octal_number = 0, remainder, i = 0;

	while (decimal != 0)
	{
		remainder = decimal % 8;
		octal_number = octal_number + remainder * (int)pow(10, i);
		decimal = decimal / 8;
		i++;
	}
	sprintf(strg, "%u", octal_number);
}

void decimal_to_hexa(unsigned int decimal, char hexaStrg[])
{
	unsigned int binary_number, hexadecimal_number = 0, i = 1, remainder;
	char bufferChar[128];
	decimal_to_binary_horner(decimal, bufferChar);
	if (!sscanf(bufferChar, "%u", &binary_number)) { exit(-1); }

	while (binary_number != 0)
	{
		remainder = binary_number % 10;
		hexadecimal_number = hexadecimal_number + remainder * i;
		i = i * 2;
		binary_number = binary_number / 10;
	}
	sprintf(hexaStrg, "%x", hexadecimal_number);
}

void binary_to_decimal(unsigned int* binaryInt)
{
	unsigned int n = *binaryInt, k = 0, sum = 0, rem;

	while (n > 0)
	{
		rem = n % 10;
		sum += (unsigned int)(rem * pow(2, k));
		k++;
		n /= 10;
	}
	(*binaryInt) = sum;
}

void binary_to_hexa(char binaryStrg[], char hexaStrg[])
{
	unsigned int binaryval, hexInt = 0, i = 1, rem;
	if (!sscanf(binaryStrg, "%u", &binaryval)) { exit(-1); }

	while (binaryval != 0)
	{
		rem = binaryval % 10;
		hexInt = hexInt + rem * i;
		i = i * 2;
		binaryval = binaryval / 10;
	}
	sprintf(hexaStrg, "%x", hexInt);
}

void binary_to_octal(char binaryStrg[], char octalStrg[])
{
	unsigned int decimal;
	if (!sscanf(binaryStrg, "%u", &decimal)) { exit(-1); }

	binary_to_decimal(&decimal);
	decimal_to_octal_power(decimal, octalStrg);
}

void octal_to_decimal(char octalStrg[], unsigned int* decimal)
{
	unsigned int numberToConvert;
	*decimal = 0;
	if (!sscanf(octalStrg, "%u", &numberToConvert)) { exit(-1); }
	int p = 0, r;

	while (numberToConvert > 0)
	{
		r = numberToConvert % 10;
		numberToConvert = numberToConvert / 10;
		*decimal = *decimal + r * (unsigned int)pow(8, p);
		p++;
	}
}

void octal_to_binary(char octalStrg[], char binaryStrg[])
{
	unsigned int decimal;
	octal_to_decimal(octalStrg, &decimal);
	decimal_to_binary_horner(decimal, binaryStrg);
}

void octal_to_hexa(char octalStrg[], char hexaStrg[])
{
	unsigned int decimal;
	octal_to_decimal(octalStrg, &decimal);
	decimal_to_hexa(decimal, hexaStrg);
}

void hexa_to_decimal(char hexaStrg[], unsigned int* decimal)
{
	int len = 0;
	int base1 = 1;
	*decimal = 0;

	while (hexaStrg[len] != '\0')
	{
		len++;
	}

	for (int i = len - 1; i >= 0; i--)
	{
		if (hexaStrg[i] >= '0' && hexaStrg[i] <= '9')
		{
			*decimal += (hexaStrg[i] - 48) * base1;
			base1 = base1 * 16;
		}
		else if (hexaStrg[i] >= 'A' && hexaStrg[i] <= 'F')
		{
			*decimal += (hexaStrg[i] - 55) * base1;
			base1 = base1 * 16;
		}
	}
}

void hexa_to_binary(char hexaStrg[], char binStrg[])
{
	unsigned int decimal;
	hexa_to_decimal(hexaStrg, &decimal);
	decimal_to_binary_horner(decimal, binStrg);
}

void hexa_to_octal(char hexaStrg[], char octalStrg[])
{
	unsigned int decimal;
	hexa_to_decimal(hexaStrg, &decimal);
	decimal_to_octal_power(decimal, octalStrg);
}

int currentOs()
{
#ifdef _WIN32
	return 0;
#elif __unix || __unix__
	return 1;
#endif
}

void printHeader()
{
	printf
	(
		"	 _______________________________________________________________\n"
		"	|  ____________________________________________________________ |\n"
		"	| |                                                           | |\n"
		"	| | *  B A S E   C O N V E R S I O N   C A L C U L A T O R  * | |\n"
		"	| |___________________________________________________________| |\n"
		"	|_______________________________________________________________|\n"
		"\n"
		"\n"
	);
}

int main()
{
	char strBuffer[128] = { '\0' };
	unsigned int decimalBuffer;
	char strg[128] = { '\0' };
	int selectedOption;
	int c;
	char usrInpRqTmplate[4][64] =
	{
		"Enter the decimal number to convert: ",
		"Enter the binary number to convert: ",
		"Enter the octal number to convert: ",
		"Enter the hexadecimal number to convert: "
	};
	char clearConsole[2][8] =
	{
		"cls",
		"clear"
	};
	char setColor[2][16] =
	{
		"color %s7",
		"tput setab %s"
	};
	char setColorBuff[16];
	snprintf(setColorBuff, sizeof(setColorBuff), setColor[currentOs()], "8");
	system(setColorBuff);

	do
	{
		system(clearConsole[currentOs()]);
		printHeader();

		printf(
			"            __| |____________________________________________| |__\n"
			"           (__   ____________________________________________   __)\n"
			"              | |                                            | |\n"
			"              | |    | PRESS A KEY TO SELECT AN OPTION |     | |\n"
			"              | |                                            | |\n"
			"              | |   [1] > BASE 10 TO BASE B CONVERVSION      | |\n"
			"              | |                                            | |\n"
			"              | |   [2] > BASE 2 TO BASE B CONVERSION        | |\n"
			"              | |                                            | |\n"
			"              | |   [3] > BASE 8 TO BASE B CONVERSION        | |\n"
			"              | |                                            | |\n"
			"              | |   [4] > BASE 16 TO BASE B CONVERSION       | |\n"
			"              | |                                            | |\n"
			"            __| |____________________________________________| |__\n"
			"           (__   ____________________________________________   __)\n"
			"              | |                                            | |\n"
			"\n"
			"\n"
			".--------------------------------.	\n"
			"| C Y R I L  D R I M A R A C C I |	\n"
			"'--------------------------------'	\n"
		);

		selectedOption = getchar() - '0' - 1;
		if (!(selectedOption >= 0 && selectedOption <= 3)) { printf("Invalid input"); exit(-1); }
		system(clearConsole[currentOs()]);
		
		printHeader();

		printf("%s", usrInpRqTmplate[selectedOption]);
		if (!scanf("%s", strg)) { printf("Invalid input\n"); exit(-1); }

		switch (selectedOption)
		{
		case 0:;
			if (!sscanf(strg, "%u", &decimalBuffer)) { printf("Invalid input\n"); exit(-1); }

			decimal_to_binary_horner(decimalBuffer, strBuffer);
			printf("'%u' decimal to binary horner: %s\n", decimalBuffer, strBuffer);

			decimal_to_binary_power(decimalBuffer, strBuffer);
			printf("'%u' decimal to binary power: %s\n", decimalBuffer, strBuffer);

			decimal_to_hexa(decimalBuffer, strBuffer);
			printf("'%u' decimal to hexa: %s\n", decimalBuffer, strBuffer);
			break;

		case 1:;
			if (!sscanf(strg, "%u", &decimalBuffer)) { printf("Invalid input\n"); exit(-1); }

			printf("'%u' binary to decimal:", decimalBuffer);
			binary_to_decimal(&(decimalBuffer));
			printf("%u\n", decimalBuffer);

			binary_to_octal(strg, strBuffer);
			printf("'%s' binary to octal: %s\n", strg, strBuffer);

			binary_to_hexa(strg, strBuffer);
			printf("'%s' binary to hexa: %s\n", strg, strBuffer);
			break;

		case 2:;

			octal_to_decimal(strg, &decimalBuffer);
			printf("'%s' octal to decimal: %u\n", strg, decimalBuffer);

			octal_to_binary(strg, strBuffer);
			printf("'%s' octal to binary: %s\n", strg, strBuffer);
			break;

		case 3:;
			hexa_to_decimal(strg, &decimalBuffer);
			printf("'%s' hex to decimal: %u\n", strg, decimalBuffer);

			hexa_to_binary(strg, strBuffer);
			printf("'%s' hex to binary: %s\n", strg, strBuffer);

			hexa_to_octal(strg, strBuffer);
			printf("'%s' hex to octal: %s\n", strg, strBuffer);
			break;

		default:;
			return 0;
		}
		printf("\nPress enter key to continue");

		do
		{
			c = getchar();
		} while (c != '\n' && c != EOF);
		c = getchar();
	}
	while (c == '\n');

	return 0;
}