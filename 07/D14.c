#include <stdio.h>

int odd_num_orig_order(int input)
{
    scanf("%d", &input);
    
    if (input == 0)
        return input;

    if (input%2 != 0)
            printf("%d ", input);

    return odd_num_orig_order(input);
}

int main()
{
    odd_num_orig_order(0);
    return 0;
}
