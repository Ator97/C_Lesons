/*
Author: Óscar Gutiérrez Castillo
Program: rational
Info: Support to rational numbers
License: GNU General Public License v3.0
Date: June 28, 2018 (Last change)
TODO: Support variable arguments
*/

#include <stdio.h>
#include "rational.c"

int main(){
  struct rational rational1;
  struct rational rational2;
  struct rational resultado;
  rational1 = create(1 ,2);
  rational2 = create(2 ,4);
  resultado = add(&rational1 ,&rational2);
  printf("\nLa suma es: %d / %d",resultado.numbered , resultado.denominator);

  resultado = sub(&rational1 ,&rational2);
  printf("\nLa resta es: %d / %d",resultado.numbered , resultado.denominator);

  resultado = mul(&rational1 ,&rational2);
  printf("\nLa multiplicacion es: %d / %d",resultado.numbered , resultado.denominator);

  resultado =  div(&rational1 ,&rational2);

  printf("\nLa division es: %d / %d",resultado.numbered , resultado.denominator);


  return 0;
}