#include <stdio.h>
#include <locale.h>

int main()
{
    int a = 0, count = 0;
    puts("Put in variable of value: \n");
    scanf("%d", &a);

    while(a)
    {
       count += (a%10) == 9;
       a = a/10;
    }

    if(count == 1)
        printf("Yes");
    else
        printf("No");
    
    return 0;
}
