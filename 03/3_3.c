#include <stdio.h>

int k, l, raz;

int main()
{
    printf("Input 2 digits:\n");
    scanf("%d %d", &k, &l);
    raz = k - l;
    printf("%d - %d = %d\n", k, l, raz);

    return 0;
}