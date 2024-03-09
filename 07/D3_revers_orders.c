#include <stdio.h>

int dgt_revers(int n)
{
    if(n < 10)
    {
        printf("%d", n);
        return n;
    }
  
    printf("%d ", n % 10);
    return dgt_revers(n / 10);
}

int main()
{
    int a = 0;
    scanf("%d", &a);
    dgt_revers(a);
    return 0;
}













