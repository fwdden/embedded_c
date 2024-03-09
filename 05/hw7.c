#include <stdio.h>
#include <locale.h>

int main()
{
    unsigned a = 0, b = 0, count = 0;
    puts("Put in variable of value: \n");
    scanf("%u", &a);
    puts("\nIn reverse order:");

    while (a)
    {
        b = a % 10;
        a /= 10;
        printf("%u", b);
    }

    return 0;
}
