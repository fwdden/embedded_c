#include <stdio.h>
#include <string.h>

#define N 1000

void str_from_file(FILE * fptr, char*arr)
{
   while( feof(fptr) == 0 )
   {
        fgets(arr, N, fptr);
   }
   printf("string: %s", arr);
}

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
    FILE * fptr;
    fptr = fopen("input.txt", "w+b");
    is_open_file(fptr);

    fputs("aabbccddABCD", fptr);
    fclose(fptr);

    fptr = fopen("input.txt", "a+b");
    is_open_file(fptr);
    str_from_file(fptr, arr);

    int i = 0;
    while(arr[i] != '\0')
    {
        arr[i] == 'a' ? arr[i] = 'b' : arr[i] == 'b'? arr[i] = 'a' : printf(" ");
        arr[i] == 'A' ? arr[i] = 'B' : arr[i] == 'B'? arr[i] = 'A' : printf(" ");
        i++;
    }

    printf("\n%s", arr);
    fprintf(fptr, "\n%s", arr);

    fclose(fptr);

    return 0;
}






