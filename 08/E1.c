#include <stdio.h>

#define N 5

void Input(int arr[], int size)
{
    puts("Put in elements of array: ");
    for(int i = 0; i < size; i++)
        scanf("%d", &arr[i]);
}

void average(int arr[], int n)
{
    double summ = 0;
    for(int j = 0; j < n; j++)
    {
        summ += arr[j];
    }
    printf("Average is - %.3lf\n", summ/n);
}

int main(void)
{
    int arr[N];
    Input(arr, N);
    average(arr, N);
    return 0;
}
