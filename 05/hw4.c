#include <stdio.h>
#include <locale.h>

int main()
{
    int a = 0, c;
    puts("Put in variable of value: \n");
    scanf("%d", &a);
    
    while (a)
    {
        c = a % 10;
        a = a / 10;
        if (a % 10 == c)
        {
            printf("YES: The same numbers next to each other\n");
            break;
        }
    }

    if (!a)
    {
        printf("NO: the same numbers next to each other\n");
    }

    return 0;
}
