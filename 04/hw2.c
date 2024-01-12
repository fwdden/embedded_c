/*
	Ввести три числа и найти наибольшее из них
*/

#include "stdio.h"

int main(void)
{
	int a, b, c;

	scanf("%d%d%d", &a, &b, &c);

	int max = (a > b) && (a > c) ? a : (b > c) ? b
											   : c;

	printf("%d", max);

	return 0;
}
