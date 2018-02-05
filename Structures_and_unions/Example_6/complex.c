/*
Author: Óscar Gutiérrez Castillo
Program: complex
Info: Complex math is coming
License: GNU General Public License v3.0
Date: February 4, 2018 (Last change)
TODO: Make dinamycal some structure varaiblescd
*/

#include <stdio.h>
#include <math.h>

struct complex {
  float real;
  float im;
};

struct complex create(float real, float im);
struct complex add(struct complex complex1, struct complex complex2);
struct complex sub(struct complex complex1, struct complex complex2);
struct complex div(struct complex complex1, struct complex complex2);
struct complex mul(struct complex complex1, struct complex complex2);

int main() {

  struct complex complex1 = create(43, 34.4);
  struct complex complex2 = create (34.43, 34);



  return 0;
}

struct complex create(float real, float im){

  struct complex complex;
  complex.real = real;
  complex.im = im;
  return complex;

}

struct complex add(struct complex complex1, struct complex complex2){

  struct complex complex;
  complex.real = complex1.real + complex2.real;
  complex.im = complex1.im + complex2.im;
  return complex;

}

struct complex sub(struct complex complex1, struct complex complex2){

  struct complex complex;
  complex.real = complex1.real - complex2.real;
  complex.im = complex1.im - complex2.im;
  return complex;

}

struct complex div(struct complex complex1, struct complex complex2){

  struct complex complex;
  complex.real = (complex1.real*complex2.real + complex1.im*complex2.im)/(pow(complex2.real,2) +pow(complex2.im,2));
  complex.im = (complex1.im*complex2.real - complex1.real*complex2.im)/(pow(complex2.real,2) +pow(complex2.im,2));
  return complex;

}

struct complex mul(struct complex complex1, struct complex complex2){

  struct complex complex;
  complex.real = complex1.real * complex2.real - complex1.im * complex2.im;
  complex.im = complex1.real * complex2.im + complex1.im * complex2.real;
  return complex;
}
