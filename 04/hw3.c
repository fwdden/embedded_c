/*
	Дано трехзначное число, напечатать максимальную цифру
*/

#include "stdio.h"

int main(void)
{
	int num;

	scanf("%d", &num);

	int a = num % 10;
	int b = (num / 10) % 10;
	int c = (num / 100) % 10;

	int max = (a > b) && (a > c) ? a : (b > c) ? b
											   : c;

	// printf("a = %d, b = %d, c = %d\n", a, b, c);
	printf("%d", max);

	return 0;
}
