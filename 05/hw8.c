#include <stdio.h>
#include <locale.h>

int main()
{
    unsigned a = 0, max = 0, min = 0;
    puts("Put in variable of value: \n");
    scanf("%u", &a);

    for(; a != 0; a /= 10)
    {
        if(a%10 > max)
            max = a % 10;
        else
        {
           min = a % 10;
        }
    }

    printf("min = %u max = %u", min, max);
    
    return 0;
}

