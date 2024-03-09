#include <stdio.h>

#define N 10

void Input(int arr[], int size)
{
    puts("Put in elements of array: ");
    for(int i = 0; i < size; i++)
        scanf("%d", &arr[i]);
}

void summa_positiv(int arr[], int n)
{
    int summ = 0;
    for(int j = 0; j < n; j++)
    {
        if(arr[j] > 0)
        {
            summ += arr[j];
        }
    }
    printf("Summary - %d", summ);
}

int main(void)
{
    int arr[N];
    Input(arr, N);
    summa_positiv(arr, N);
    return 0;
}
