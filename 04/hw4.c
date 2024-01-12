/*
	Напечатать сумму максимума и минимума.
*/

#include "stdio.h"

int main(void)
{
	int a, b, c, d, f;

	scanf("%d%d%d%d%d", &a, &b, &c, &d, &f);

	int max = (a > b) && (a > c) ? a : (b > c) ? b
											   : c;
	max = (max > d) && (max > f) ? max : (d > f) ? d
												 : f;
	int min = (a < b) && (a < c) ? a : (b < c) ? b
											   : c;
	min = (min < d) && (min < f) ? min : (d < f) ? d
												 : f;

	printf("%d\n", max + min);

	return 0;
}
