#include <stdio.h>

#define M 5
#define N 5

void input_dig(int array[]) // input
{
    puts("Put in elements in array:\n");
    for(int i = 0; i < (M * N); i++)
    {
        scanf("%d", &array[i]);
    }
    puts("\narray is:\n");
    for(int i = 0; i < M; i++)
    {
        for(int j = 0; j < N; j++)
            printf("%d ", array[i*N + j]);

        printf("\n");
    }
}

int f_aver_diag_array(int array[])
{
    int summa = 0;
    int aver_diag_array = 0;
    int* ptr = &array[0];

    for(int k = 0; k < 5; k++)
    {
       summa = summa + *(ptr + k * 5);
    }
    
    aver_diag_array = summa/5;
    return aver_diag_array;
}

int main()
{
    int aver = 0;
    int counter = 0;
    int array[M * N] = {0};
    input_dig(array);

    f_aver_diag_array(array);
    aver = f_aver_diag_array(array);
    for(int i = 0; i < M * N; i++)
    {
        if(array[i] > aver)
        {
            counter++;
        }
    }

    printf("\nElements of array larger than average of diagonal array elements is  %d\n", counter);
    return 0;
}





