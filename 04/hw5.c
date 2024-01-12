/*
	Определить уравнение прямой по координатам двух точек.
	Уравнение вида y=k*x+b
*/

#include "stdio.h"

int main(void)
{
	int X1, Y1, X2, Y2;

	scanf("%d%d%d%d", &X1, &Y1, &X2, &Y2);
	float k = (float)(Y1 - Y2) / (X1 - X2);
	float b = Y2 - k * X2;
	printf("%.2f %.2f\n", k, b);

	return 0;
}
