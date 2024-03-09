#include <stdio.h>
#include <stdlib.h>

#define N1 100  // Example 1
#define N2 5    // Example 2

int is_two_same(int size, int a[])
{
   int flag = 0;
   for(int i = 0; i < size; i++)
   {
       for(int j = i + 1; j < size; j++)
       {
            if(a[i] == a[j])
            {
              flag++;
              break;
            }
       }
   }
   if(flag)
   {
       puts("YES");
       return 1;
   }
   if (!flag)
   {
       puts("NO");
       return 0;
   }
   return 0;
}

void input_dig(int size, int a[])
{
    puts("Put in numbers: \n");
    for(int i = 0; i< size; i++)
    {
        scanf("%d", &a[i]);
    }
}

int main()
{
    int str[N1] = {0};

    // Example 1
    input_dig(N1, str);

    // Example 2
    //input_dig(N2, str);

    return is_two_same(N1, str); // for example 1
    //return is_two_same(N2, str); // for example 2
}
