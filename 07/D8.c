#include <stdio.h>

int num_between_num(int a, int b)
{
     if(a == b)
        printf("%d ", a);

     if(a < b)
     {
        printf("%d ",a);
        num_between_num(++a, b);
     }
     if(a > b)
     {
        printf("%d ",a);
        num_between_num(--a, b);
     }
     return 0;
}

int main()
{
    int A = 0, B = 0;
    scanf("%d%d", &A, &B);

    num_between_num(A, B);
    return 0;
}
