/*
Author: Óscar Gutiérrez Castillo
Program: roman_numbers
Info : transposed a maxtix
License: GNU General Public License v3.0
Date: February 1 ; 2018
TODO: Make all dinamical, make a better analysis
*/

#include <stdio.h>

void tables( char romanAray[], int longArray);

int main (){

    char romanAray[1]= {'V'};

    tables(romanAray,1);

  return 0;
}

void tables( char romanAray[], int longArray){

  if (romanAray[0] == 'M'){
    printf("%d\n",1000);
  }
  if (romanAray[0] == 'D'){
    printf("%d\n",500);
  }
  if (romanAray[0] == 'C'){
    printf("%d\n",100);
  }
  if (romanAray[0] == 'L'){
    printf("%d\n",50);
  }
  if (romanAray[0] == 'X'){
    printf("%d\n",10);
  }
  if (romanAray[0] == 'V'){
    printf("%d\n",5);
  }
  if (romanAray[0] == 'I'){
    printf("%d\n",1);
  }
}
