#include <stdio.h>
#include <locale.h>

int main()
{
    int a = 0, b = 0, summa = 0;
    setlocale(LC_ALL, "Rus");
    
    printf("Set integers a <= b:\n");
    scanf("%d%d", &a, &b);
    
    if(a <= b)
    {}
    else
        return 0;
    
    for(int i = 0; a <= b; i++, a++)
    {
        summa = summa + a*a;
    }

    printf("%d\n", summa);
    return 0;
}
