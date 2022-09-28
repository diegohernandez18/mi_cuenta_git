#include <stdio.h>

void main(void)
{
	int pix_larg_pant, pix_alt_pant, coord_izqX, coord_izqY, coord_derX, coord_derY;
	float X, Y, perc_alt, perc_larg;

	scanf_s("%i", &pix_alt_pant);
	scanf_s("%i", &pix_larg_pant);
	scanf_s("%f", &X);
	scanf_s("%f", &Y);
	scanf_s("%f", &perc_larg);
	scanf_s("%f", &perc_alt);

	coord_izqX = (int)pix_alt_pant * X;
	coord_izqY = (int)pix_larg_pant * Y;
	coord_derX = (int)pix_alt_pant * perc_larg + coord_izqX;
	coord_derY = (int)pix_larg_pant * perc_alt + coord_izqY;

	printf("%i %i %5.2f %5.2f %5.2f %5.2f %i %i %i %i", pix_alt_pant, pix_larg_pant, X, Y, perc_larg, perc_alt, coord_izqX, coord_izqY, coord_derX, coord_derY);

}