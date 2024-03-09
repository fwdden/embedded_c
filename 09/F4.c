#include <stdio.h>
#include <string.h>

#define N 50

void input(char c, char str[])
{
    int i = 0;
    str[N] = 0;
    puts("Put in simbols: \n");
    while((c = getchar()) != '\n')
    {
       str[i++] = c;
    }
    str[i] = '\0';
    puts("\n");
}

void print_digist(int s[])
{
    for (int i = 0; i < 10; i++)
        if (s[i] > 0)
            printf("%d%d", i, s[i]);
}

void count_digits(char n[], int* res)
{
    for (int i=0;n[i]!=0;i++)
        res[n[i] - '0']++;
}

int main(void)
{
    char c = 0;
    char str[N] = {0};
    int r[10] = {0};

    input(c, str);
    count_digits(str, r);
    print_digist(r);

    return 0;
}
