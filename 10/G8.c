#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define NUM 1000

//sorting
void sort_bubble(int arr[], int n)
{
   puts("\n\nresultat of sorting");
   for(int i = 0; i < n - 1; i++)
        for(int j = 0; j < n - 1 - i; j++)
   {
       if(arr[j] > arr[j+1])
       {
           int temp = arr[j];
           arr[j] = arr[j+1];
           arr[j+1] = temp;
       }
   }
}

//copy str from file
void str_from_file(FILE * fptr, char*arr)
{
   while(feof(fptr) == 0)
   {
        fgets(arr, NUM, fptr);
   }
   printf("string: %s", arr);
}

//check file opening
void is_open_file(FILE*fptr)
{
    if (fptr == NULL)
        printf ("ERROR\n");
    else
        printf ("FILE IS OPEN\n");
}

int main()
{
    char data[NUM] = " ";
    char *p = data;
    char tmp[100];
    int i=0, j=0;
    int arr_int[NUM];
    FILE * fptr;

    fptr = fopen("input.txt", "w+");
    is_open_file(fptr);
    fputs("data 48 call 9 read13 blank0a", fptr);
    fclose(fptr);

    fptr = fopen("input.txt", "a+");
    is_open_file(fptr);
    str_from_file(fptr, data);

    for(; *p ; p++)
    {
        while(isdigit(*p))
            tmp[j++] = *p++;

        if(j != 0 )
        {
            tmp[j++] = '\0';
            arr_int[i] = atoi(tmp) ;
            j=0;
            i++;
        }
    }
    puts("\nNumbers of string ");
    for(int k = 0; k < i; k++)
        printf("%d ", arr_int[k]);

    sort_bubble(arr_int, i);

    for(int k = 0; k < i; k++)
    {
        printf("%d ", arr_int[k]);
        fprintf(fptr, "  %d ", arr_int[k]);
    }

    fclose(fptr);

    return 0;
}



