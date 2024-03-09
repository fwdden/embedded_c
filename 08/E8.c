#include <stdio.h>
#define N 12

void Swapp(int arr[], int i, int j)
{
    int tmp = arr[i];
    arr[i] = arr[j];
    arr[j] = tmp;
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
    {
        if(arr[i] != 0)
            printf("%d ", arr[i]);
    }   
}

int main(void)
{
   int arr[N];
   Input(arr, N);

   for(int j = 0; j < N/6; j++)
   {
        Swapp(arr, j, N/3 -1 -j);
        Swapp(arr, N/3 + j, N/3 + N/3 -1 - j);
        Swapp(arr, N/3 + N/3 + j, N - 1 - j);
   }
   
   output(arr, N);
   return 0;
}
