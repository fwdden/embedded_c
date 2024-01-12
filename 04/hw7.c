/*
	Ввести пять чисел и  вывести наибольшее из них
	Нужно напечатать наибольшее число
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

	printf("%d\n", max);

	return 0;
}
