#include <stdio.h>
#define N 10

void SwapArr(int arr[], int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;

}

void BubbleSort_to_high(int* arr,int n)
{
    int noSwap;
    for (int i = 0; i < n; i++)
    {
        noSwap = 1;
        for (int j = n-1; j > i; j--)
        {
            if(arr[j-1]> arr[j])
            {
                SwapArr(arr,j-1,j);
                noSwap = 0;
            }
        }
        if(noSwap)
            break;
    }
}

void BubbleSort_to_low(int* arr,int n)
{
    int noSwap;
    for (int i = n/2; i < n - 1; i++)
    {
        noSwap = 1;
        for (int j = n-1; j > i; j--)
        {
            if(arr[j-1] <= arr[j])
            {
                SwapArr(arr,j-1,j);
                noSwap = 0;
            }
        }
        if(noSwap)
            break;
    }
}

void Input(int arr[], int size)
{
    puts("Put in elements of array: ");
    for(int i = 0; i < size; i++)
        scanf("%d", &arr[i]);
}

void output(int arr[], int size)
{
    puts("\nRESULT: ");
    for(int i = 0; i < size; i++)
        printf("%d ", arr[i]);
}

int main(void)
{
   int arr[N];
   Input(arr, N);
   
   BubbleSort_to_high(arr, N/2);
   BubbleSort_to_low(arr, N);
   output(arr, N);
   return 0;
}
