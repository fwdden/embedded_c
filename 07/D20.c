#include <stdio.h>

int recurs_power(int n, int p)
{
    if(p == 0)
       return 1;
    
    if(p >= 1)
    {
       return n * recurs_power(n, --p);
    }
    
    return 0;
}



int main(void)
{
    int x, y;
    scanf("%d%d", &x, &y);
    printf("%d raise to a power %d - %d", x, y, recurs_power(x, y));
    return 0;
}
