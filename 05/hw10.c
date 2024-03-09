#include <stdio.h>
#include <locale.h>

int main()
{
    int a, count = 0;
    puts("Put in variable of value: \n");

    while(a != 0)
    {
       scanf("%d", &a);
       count++;
    }

    printf("Number of numbers in a number sequence :) %d", count - 1);
    
    return 0;
}
