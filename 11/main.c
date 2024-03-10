#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include "temp_api.h"

#define SIZE 50

int main()
{
    struct sensor info[SIZE];
    int number = AddInfo(info);
    print(info, number);

    save_bin(info, number);
    printf("\nSort by t\n");
    SortByt(info, number);

    print(info, number);
    printf("\nSort by date\n");
    SortByDate(info, number);

    print(info, number);

    puts("\nFunc prototypes :");
    average_monthly_temp(info, number);
    min_temp_this_month(info, number);
    max_temp_this_month(info, number);
    average_annual_temp(info, number);
    min_annual_temp(info, number);
    max_annual_temp(info, number);

    return 0;
}






