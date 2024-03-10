#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>
#include <unistd.h>
#include <assert.h>
#include "temp_api.h"

#define SIZE 550000

const char *FileSuffix(const char path[])
{
    const char *result;
    int i, n;

    assert(path != NULL);
    n = strlen(path);
    i = n - 1;
    while ((i > 0) && (path[i] != '.') && (path[i] != '/') && (path[i] != '\\')) {
        i--;
    }
    if ((i > 0) && (i < n - 1) && (path[i] == '.') && (path[i - 1] != '/') && (path[i - 1] != '\\')) {
        result = path + i;
    } else {
        result = path + n;
    }
    return result;
}

int main(int argc, char * argv[])
{
    FILE* fptr;
    double t_av_m = 0;
    int t_min_m = 0;
    int t_max_m = 0;
    int month = 0;
    int r = 0;
    int i = 0;
    int k = 1;

    setlocale(LC_ALL, "Rus");

    struct sensor *info = malloc(SIZE * sizeof(struct sensor));
    if(!info)
    {
        printf("Memory is not allocated");
        return -1;
    }

    help();

    int rez=0;
    while ((rez = getopt(argc, argv, "hf:m:tde")) != -1)
    {
        switch (rez)
        {
            case 'h':
                printf("Programm is putting out data from temperature sensor for some periods of time: month, year.\n");
                printf("In a program release we have the parameters of command line:\n");
                puts("-h : HELP;");
                puts("-f : it processes the input file name csv format for data processing;");
                puts("-m <month number>, it is putting statistic for the month, use with -f;");
                puts("-t : Sorting data by temperature, use with -f ;");
                puts("-d : Sorting data by date, use with -f;");
                puts("-e : Exit");
                break;
            case 'f':
                printf("\n%s\n", FileSuffix(optarg));
                if(strcmp(FileSuffix(optarg), ".csv") != 0)
                {
                    printf("Error. File name should be csv file type");
                    break;
                }
                printf("Name of <csv> file is \"%s\" ", optarg);

                fptr = fopen(optarg, "r");
                if(fptr == NULL)
                {
                    printf("\nERROR of open");
                    return 1;
                }

                puts("\nScanned:");
                while((r = fscanf(fptr, "%hu;%hhu;%hhu;%hhu;%hhu;%hhd", &info[i].year, &info[i].month, &info[i].day, &info[i].hours, &info[i].minutes, &info[i].temperature))> 0)
                {
                    if(r<6)
                    {
                        char s[100];
                        r = fscanf(fptr, "%[^\n]", s);
                        printf("\n\nERROR %d=%s\n", r, s);
                        printf("Exception line for statistic: = %d\n", k);
                        i--;
                    }
                    i++;
                    k++;
                }

                printf("\ncorrect strings for data analysis: %d\n", i);
                t_av_m = average_monthly_temp(info, i, month);
                t_min_m = min_temp_this_month(info, i, month);
                t_max_m = max_temp_this_month(info, i, month);
                if(!argv[3])
                {
                    printf("\n\n%5s%15s%25s%35s%45s\n", "Year", "Month", "t_av_m", "t_min_m", "t_max_m");
                    for(month = 1; month <= 12; month++)
                        print_month_statistic(info,i, month, t_av_m, t_min_m, t_max_m );
                    average_annual_temp(info, i);
                    min_annual_temp(info, i);
                    max_annual_temp(info, i);
                }
                
                fclose(fptr);
                break;
            case 'm':
                printf("\nNumber of month is %d\n",atoi(optarg));
                month = atoi(optarg);
                t_av_m = average_monthly_temp(info, i, month);
                t_min_m = min_temp_this_month(info, i, month);
                t_max_m = max_temp_this_month(info, i, month);
                printf("\n\n%5s%15s%25s%35s%45s\n", "Year", "Month", "t_av_m", "t_min_m", "t_max_m");
                print_month_statistic(info, i, month, t_av_m, t_min_m, t_max_m);
                break;
            case 't':
                SortByt(info, i);
                print(info, i);
                break;
            case 'd':
                SortByDate(info, i);
                print(info, i);
                break;
            default:
                printf("Error found ! See HELP: -h\n");
                break;
        }
    }

    free(info);

    return 0;
}








