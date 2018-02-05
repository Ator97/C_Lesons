/*
Author: Óscar Gutiérrez Castillo
Program: datesCalculator
Info: Program that determinates de diferecens betwen to dates
License: GNU General Public License v3.0
Date: February 2, 2018 (Last change)
TODO: Consider the leap-years
*/
#include <stdio.h>
#include <stdlib.h>

struct Date{
  unsigned int year;
  unsigned int month;
  unsigned int day;
};


int getDates(struct Date *date1, struct Date *date2 );
struct Date calculateDiff(struct Date *date1, struct Date *date2);


int main() {

  struct Date date1;
  struct Date date2;
  struct Date diff;

  getDates(&date1, &date2);
  diff = calculateDiff(&date1, &date2);

  printf("\nAnyos :%d" ,diff.year);
  printf("\nMeses :%d" ,diff.month);
  printf("\nDías :%d" ,diff.day);

  return 0;
}

int getDates(struct Date *date1, struct Date *date2 ){
  date1->year = 1997;
  date1->month = 5;
  date1->day = 3;

  date2->year = 2018;
  date2->month = 5;
  date2->day = 2;

  if (  date2->year <   date1->year ){
    printf("No puedo calcular la diferencia a fechas pasadas, ingresa loa datos correctamnete\n" );
    exit(0);
  }
  if (( date2->year ==  date1->year) && (date2->month < date1->month)){
    printf("No puedo calcular la diferencia a fechas pasadas, ingresa loa datos correctamnete\n" );
    exit(0);
  }

  if (( date2->year ==  date1->year) && (date2->month ==  date1->month) && (date2->day < date1->day )){
    printf("No puedo calcular la diferencia a fechas pasadas, ingresa loa datos correctamnete\n" );
    exit(0);
  }

  return 0;
}

struct Date calculateDiff(struct Date *date1, struct Date *date2){
  struct Date diff;

  int leap = date2->year - date2->year;
  int tmp = date2->day - date1->day;

  diff.year = 0;
  diff.month =0 ;


  return diff;
}
