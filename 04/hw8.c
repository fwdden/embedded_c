/*
	Ввести пять чисел и  вывести наименьшее из них
	Нужно напечатать наименьшее число
*/

#include "stdio.h"

int main(void)
{
	int a, b, c, d, f;

	scanf("%d%d%d%d%d", &a, &b, &c, &d, &f);

	int min = (a < b) && (a < c) ? a : (b < c) ? b
											   : c;
	min = (min < d) && (min < f) ? min : (d < f) ? d
												 : f;

	printf("%d\n", min);

	return 0;
}
