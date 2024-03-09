#include <stdio.h>

#define N 10

void SwappArr(int arr[], int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

int Input (int arr[], int n)
{
    int i;
    puts("Put in elements of array: ");
    for (i = 0; i < n; i++)
        scanf ("%d", &arr[i]);
    return i;
}

void print(int arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}

int main(void)
{
    int arr[N];
    Input(arr, N);

    for(int j = 0; j < N/4; j++)
    {
       SwappArr(arr, j, N/2 - 1 - j);
    }

    for(int k = 0; k <= N/4; k++)
    {
       SwappArr(arr, N/2+k, N - 1 - k);
    }
    
    puts("\n");

    print(arr, N);
    return 0;
}
