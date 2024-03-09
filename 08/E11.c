#include <stdio.h>

#define N 10

void SwapArr(int arr[], int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

void BubbleSort_last_num(int* arr,int n)
{
    int noSwap;
    for (int i = 0; i < n; i++)
    {
        noSwap = 1;
        for (int j = n-1; j > i; j--)
        {
            if(arr[j-1]%10 > arr[j]%10)
            {
                SwapArr(arr,j-1,j);
                noSwap = 0;
            }
        }
        if(noSwap)
            break;
    }
}

void input(int arr[], int size)
{
    puts("Put in elements of array: ");
    for(int i = 0; i < size; i++)
        scanf("%d", &arr[i]);
}

void output(int arr[], int size)
{
    puts("\nRESULT:");
    for(int i = 0; i < size; i++)
        printf("%d ", arr[i]);
}

int main(void)
{
   int arr[N];
   input(arr, N);

   BubbleSort_last_num(arr, N);
   output(arr, N);
   
   return 0;
}









