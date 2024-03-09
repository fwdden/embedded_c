#include <stdio.h>
#include <string.h>

#define N 1000

void is_open_file(FILE*fptr)
{
    if (fptr == NULL)
        printf ("ERROR\n");
    else
        printf ("FILE IS OPEN\n");
}

int main()
{
    char arr[N];
    int len = 0;

    FILE * fptr;
    fptr = fopen("input.txt", "w+");
    is_open_file(fptr);

    fputs("aabbcdb", fptr);
    fclose(fptr);

    fptr = fopen("input.txt", "a+");
    is_open_file(fptr);

    while( feof(fptr) == 0 )
    {
        fgets(arr, N, fptr);
        fputs(arr, stdout);
    }

     while(arr[len] != '\0')
    {
        len++;
    }

    for(int i = 0; i< len - 1; i++)
    {
        if(arr[i] == arr[len -1])
        {
           printf("% d ", i);
           fprintf(fptr," %d ", i);
        }
    }
    
    fclose(fptr);
    return 0;
}
