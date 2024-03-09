#include <stdio.h>

#define N 20

void input_dig(int a[])
{
    puts("Put in elements in array:\n");
    for(int i = 0; i < N; i++)
    {
        scanf("%d", &a[i]);
    }
    puts("\narray is:\n");
    for(int i = 0; i < N; i++)
    {
        printf("%d ", a[i]);
    }
}

void sort_even_odd(int n, int a[])
{
    for(int k = 1; k < n; k++)
        for(int i = 0;i < n-k;i++)
            if(a[i]%2 > a[i + 1]%2)
            {
               int temp = a[i];
               a[i] = a[i + 1];
               a[i + 1] = temp;
            }

    puts("\n\nResult:\n");
    for(int i = 0;i < n;i++)
        printf("%d ", a[i]);
}

int main()
{
    int a[N] = {0};
    input_dig(a);
    sort_even_odd(N, a);
    return 0;
}





