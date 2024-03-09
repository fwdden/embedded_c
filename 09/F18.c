#include <stdio.h>
#define M 10
#define N 10

void input_dig(int array[])
{
    puts("Put in numbers: \n");
    for(int i = 0; i < M*N; i++)
    {
        scanf("%d", &array[i]);
    }

    puts("\nARRAY is: \n");
    for (int k = 0; k < M; k++)
    {
        for(int j = 0; j< N; j++)
            printf("%d ",  array[M*k + j]);
        printf("\n\n");
    }
}

int max_el_of_str(int array[], int start, int finish)
{
    int max = 0;
    int*ptr = array;
    for(int i = start; i < finish; i++)
    {
        if(*(ptr + i) > max)
        {
            max = *(ptr + i);
        }
    }
    return max;
}

int main()
{
    int max = 0;
    int summa = 0;
    int array[M*N] = {0};
    input_dig(array);

    for(int i = 0; i < 100; i = i+10)
    {
        max = max_el_of_str(array, i, i+10);
        summa = summa + max;
    }
    
    printf("\nSumma is %d", summa);
    return 0;
}
