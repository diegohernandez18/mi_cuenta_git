#include <stdio.h>

int main()
{
	int peso_a;
	int primer_p;
	int pesoh;
	int primerh;
	int cero1;
	int cero2;

	cero1 = 0000;

	cero2 = 0000;

	scanf_s("%i", &peso_a);
	scanf_s("%i", &primer_p);

	pesoh = peso_a;
	primerh = primer_p;

	printf("%c%c%08X%04i%04i%08X", 66, 77, pesoh, cero1, cero2, primerh);
	return 0;
}