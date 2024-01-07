#include <stdio.h>

int k, l, m, sum;

int main()
{
    printf("Input 3 digits:\n");
    scanf("%d %d %d", &k, &l, &m);
    sum = k + l + m;
    printf("%d + %d + %d = %d", k, l, m, sum);

    return 0;
}