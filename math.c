/********************************************************************************
* math.c: Funktionsdefinitioner för beräkning samt utskrift av flyttal.
********************************************************************************/
#include "header.h"

/********************************************************************************
* get_sum: Returnerar summan av tre angivna flyttal.
*
*          - x: Det första flyttalet.
*          - y: Det andra flyttalet.
*          - z: Det tredje flyttalet.
********************************************************************************/
double get_sum(const double x,
               const double y,
               const double z)
{
   return x + y + z;
}

/********************************************************************************
* print_numbers: Skriver ut angivna tre flyttal på var sin rad i terminalen.
*
*                - x: Det första flyttalet.
*                - y: Det andra flyttalet.
*                - z: Det tredje flyttalet.
********************************************************************************/
void print_numbers(const double x,
                   const double y,
                   const double z)
{
   printf("x = %lg\n", x);
   printf("y = %lg\n", y);
   printf("z = %lg\n", z);
   return;
}