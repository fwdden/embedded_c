#include <stdio.h>

int k, l, m;
float sr;

int main()
{
    printf("Input 3 digits:\n");
    scanf("%d %d %d", &k, &l, &m);
    sr = (k + l + m) / 3.0;
    printf("%.2f\n", sr);

    return 0;
}