#include <stdio.h>
float eurToFr(float euroPrice)
{
	return euroPrice * 6.56;
}
void main()
{
	float initialPrice;
	printf("Saisir votre montant en euros: ");
	scanf("%f", &initialPrice);
	printf("%f euros = %f francs", initialPrice, eurToFr(initialPrice));
}