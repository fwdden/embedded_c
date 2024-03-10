#include <stdio.h>
#include "temp_api.h"

void changeIJ(struct sensor *info, int i, int j)
{
    struct sensor temp;
    temp = info[i];
    info[i] = info[j];
    info[j] = temp;
}

void SortByt(struct sensor *info, int n)
{
    for(int i = 0; i<n; ++i)
        for(int j = i; j<n; ++j)
            if(info[i].temperature >=info[j].temperature)
                changeIJ(info, i, j);
}

unsigned long long DateToInt(struct sensor *info)
{
    return info->year << 28 | info->month <<24 |
    info-> day << 16 | info-> hours << 8 | info-> minutes;
}

void SortByDate(struct sensor *info, int n)
{
    for(int i = 0; i<n; ++i)
        for(int j = i; j<n; ++j)
              if(DateToInt(info+i) >= DateToInt(info + j))
                  changeIJ(info, i, j);
}

void AddRecord(struct sensor *info, int number,
    uint16_t year, uint8_t month, uint8_t day, uint8_t hours, uint8_t minutes, int8_t temperature)
{
    info[number].year = year;
    info[number].month = month;
    info[number].day = day;
    info[number].hours = hours;
    info[number].minutes = minutes;
    info[number].temperature = temperature;
}

int AddInfo(struct sensor *info)
{
    int counter = 0;
    AddRecord(info, counter++, 2022, 1, 1, 10, 00, 3);
    AddRecord(info, counter++, 2023, 2, 1, 11, 39, -8);
    AddRecord(info, counter++, 2022, 1, 7, 18, 29, 16);
    AddRecord(info, counter++, 2022, 9, 16, 14, 21, 1);
    AddRecord(info, counter++, 2022, 9, 16, 14, 19, 1);
    return counter;
}

void print(struct sensor *info,int number)
{
    printf("===================================\n");
    for(int i=0;i<number;i++)
        printf("%04d-%02d-%02d-%02d-%02d temperature = %2d\n",
            info[i].year,
            info[i].month,
            info[i].day,
            info[i].hours,
            info[i].minutes,
            info[i].temperature
        );
}

void save_bin(struct sensor *info, int number)
{
    FILE* f = fopen("sensor.bin", "wb");
    fwrite(info, number*sizeof(struct sensor), 1, f);
    fclose(f);
}

void load_bin(struct sensor *info, int number)
{
    FILE* f = fopen("sensor.bin", "rb");
    fread(info, number*sizeof(struct sensor), 1, f);
    fclose(f);
}

void average_monthly_temp(struct sensor *info, int n)
{
    printf("\n\naverage_monthly_temp\n");
}

void min_temp_this_month(struct sensor *info, int n)
{
    printf("min_temp_this_month\n");
}

void max_temp_this_month(struct sensor *info, int n)
{
    printf("max_temp_this_month\n");
}

void average_annual_temp(struct sensor *info, int n)
{
    printf("average_annual_temp\n");
}

void min_annual_temp(struct sensor *info, int n)
{
    printf("min_annual_temp\n");
}

void max_annual_temp(struct sensor *info, int n)
{
    printf("max_annual_temp\n");
}



