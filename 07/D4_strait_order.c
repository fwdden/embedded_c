#include <stdio.h>

int dgt_straight(int n)
{
    if (n != 0)
        dgt_straight(n / 10);
    else
        return 0;
    
    printf("%d ", n % 10);
    return 0;
}

int main(void)
{
    int a = 0;
    scanf("%d", &a);
    dgt_straight(a);
    return 0;
}
