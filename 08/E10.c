#include <stdio.h>

#define N 12

void shiftArray(int arr[], int size, int shift)
{
    for (int i = 0; i < shift; i++)
    {
        int temp = arr[size -1];
        for (int j = size -1; j > 0; j--)
        {
            arr[j] = arr[j - 1];
        }
        arr[0] = temp;
    }
}

int Input(int arr[], int n)
{
    int i;
    puts("Put in elements of array: ");
    for (i = 0; i < n; i++)
        scanf ("%d", &arr[i]);
    return i;
}

void print(int arr[], int n)
{
    puts("\n");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}

int main(void)
{
    int arr[N];
    Input(arr, N);

    int shift = 4;
    shiftArray(arr, N, shift);
    
    print(arr, N);
    return 0;
}



