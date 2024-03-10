#ifndef TEMP_API_H_INCLUDED
#define TEMP_API_H_INCLUDED

#include <stdint.h>

struct sensor
{
    uint16_t year;          //dddd
    uint8_t month;          //mm
    uint8_t day;            //dd
    uint8_t hours;          //hh
    uint8_t minutes;        //mm
    int8_t temperature;     // (-99..99)
};

void average_monthly_temp(struct sensor *info, int n); // среднемесячная температура
void min_temp_this_month(struct sensor *info, int n); // мин. темп. в этом месяце
void max_temp_this_month(struct sensor *info, int n); // макс. темп. в этом месяце
void average_annual_temp(struct sensor *info, int n); // среднегодовая температура
void min_annual_temp(struct sensor *info, int n); // минимальная годовая температура
void max_annual_temp(struct sensor *info, int n); // максимальная годовая температура
void changeIJ(struct sensor *info, int i, int j); // вспомогательная для сортировки
void SortByt(struct sensor *info, int n); // упорядочивание температуры
unsigned long long DateToInt(struct sensor *info); // вспомогательная для сортировки по дате (битовые сдвиги)
void SortByDate(struct sensor *info, int n); // сортировка по дате
void AddRecord(struct sensor *info, int number,
              uint16_t year, uint8_t month, uint8_t day, uint8_t hours, uint8_t minutes, int8_t temperature);
int AddInfo(struct sensor *info); // инициализация данными
void print(struct sensor *info,int number);
void save_bin(struct sensor *info,int number);
void load_bin(struct sensor *info,int number);

#endif // TEMP_API_H_INCLUDED
