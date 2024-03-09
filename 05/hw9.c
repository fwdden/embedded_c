#include <stdio.h>
#include <locale.h>

int main()
{
    int a = 0, k = 0, count = 0;
    puts("Put in variable of value: \n");
    scanf("%d", &a);

    while(a)
    {
       if((a%10) == 8 || (a%10) == 6 || (a%10) == 4 || (a%10) == 2 || (a%10) == 0)
       {
           count++;
       }
       a = a/10;
       k++;
    }

    printf("Even numbers - %d\nOdd numbers %d", count, k - count);
    
    return 0;
}
