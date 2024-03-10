#ifndef TEMP_API_H_INCLUDED
#define TEMP_API_H_INCLUDED

#include <stdint.h>
#include <stdio.h>

struct sensor
{
    uint16_t year;          //dddd
    uint8_t month;          //mm
    uint8_t day;            //dd
    uint8_t hours;          //hh
    uint8_t minutes;        //mm
    int8_t temperature;     // (-99..99)
};

void help(void); // описание меню
double average_monthly_temp(struct sensor *info, int n, int month); // среднемесячная температура
int min_temp_this_month(struct sensor *info, int n, int month); // мин. темп. в этом месяце
int max_temp_this_month(struct sensor *info, int n, int month); // макс. темп. в этом месяце
double average_annual_temp(struct sensor *info, int n); // среднегодовая температура
int min_annual_temp(struct sensor *info, int n); // минимальная годовая температура
int max_annual_temp(struct sensor *info, int n); // максимальная годовая температура
void print_month_statistic(struct sensor* info,int number, int month, double t_av_m, int t_min_m, int t_max_m);
void changeIJ(struct sensor *info, int i, int j); // вспомогательная для сортировки
void SortByt(struct sensor *info, int n); // упорядочивание температуры
unsigned long long DateToInt(struct sensor *info); // вспомогательная для сортировки по дате (битовые сдвиги)
void SortByDate(struct sensor *info, int n); // сортировка по дате
void print(struct sensor* info,int number);// печатаем данные из массива структур

#endif // TEMP_API_H_INCLUDED