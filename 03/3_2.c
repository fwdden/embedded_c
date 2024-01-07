#include <stdio.h>

int k, l, m, sum, p;

int main()
{
    printf("Input 3 digits:\n");
    scanf("%d %d %d", &k, &l, &m);
    sum = k + l + m;
    p = k * l * m;
    printf("%d + %d + %d = %d\n", k, l, m, sum);
    printf("%d * %d * %d = %d\n", k, l, m, p);

    return 0;
}