#include <stdio.h>

static unsigned count = 0;

void get_bin_count(int n)
{
    if (n > 1)
        get_bin_count(n / 2);
    
    printf("%d", n % 2);
    
    if (n%2 == 1)
        count++;
}

int main()
{
    int n;
    scanf("%d", &n);

    get_bin_count(n);
    printf("\nNumber of \"1\" is %u\n", count);

    return 0;
}
