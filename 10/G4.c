#include <stdio.h>
#include <string.h>

#define N 200

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
    char str[N];
    char sep[10] = " ";
    char *p_istr;
    int i = 0;
    char arr_1[N] = {0};
    char arr_2[N] = {0};
    char reserv[N]= {'0'};

    FILE * fptr;
    fptr = fopen("input.txt", "w+");
    is_open_file(fptr);

    fputs("hello world", fptr);
    fclose(fptr);

    fptr = fopen("input.txt", "a+");
    is_open_file(fptr);

    str_from_file(fptr, str);
    p_istr = strtok(str,sep);
    strncpy (arr_1, p_istr, strlen(p_istr));
    printf("\n%s\n", arr_1);

    while (p_istr != NULL)
    {
      strncpy (arr_2, p_istr, strlen(arr_1));
      p_istr = strtok (NULL,sep);
    }

    printf("%s\n", arr_2);
    puts("\nOne time simbol:");
    for(i = 0; i < strlen(arr_1); i++)
    {
        for(int j = 0; j < strlen(arr_2); j++)
        {
           if(arr_1[i] == arr_2[j] && arr_1[i] != arr_1[j])
           {
                reserv[i] = arr_2[j];
                printf("%c ", reserv[i]);
                fputs(" ", fptr);
                fputc(reserv[i], fptr);
           }
        }
    }

    fclose(fptr);

    return 0;
}
