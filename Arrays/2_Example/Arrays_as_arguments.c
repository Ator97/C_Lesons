/*
Author: Óscar Gutiérrez Castillo
Program: Arrays_as_arguments:
Info : Use arrays as arguments in a function
License: GNU General Public License v3.0
Date: January 30, 2018

*/

#include <stdio.h>

void readArray( double a[], int* num );
void printArray( const double a[], int n );

int main(int argc, char const *argv[]) {

  double a[100];
  int n;

  readArray( a, &n );
  printf("The array 'a' has 100 elements, they're:\n");
  printArray( a, n);

  return 0;
}

void readArray( double a[], int* num ){

  int n = 0;

  printf("Input data. To exit push 0\n" );
  for (;n <100; n++){
    printf("\n%d: ",n );
    scanf("%lf",&a[n]);
    if (a [n] == 0)
      break;
  }
  *num = n;
}



void printArray( const double a[], int n ){

  int i =0;

  for (;i<100; i++)
      printf("\t%d: %lf\n",i, a[i]);


}
