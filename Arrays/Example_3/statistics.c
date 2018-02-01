/*
Author: Óscar Gutiérrez Castillo
Program: Statistics
Info : Determine some probabily stuff using arrays
License: GNU General Public License v3.0
Date: January 30; 2018
*/

#include <stdio.h>

int integerAdd(const int integerArray[], int numElements);
int max(const int inteterArray[], int numElements);

int main(int argc, char const *argv[]) {

  int items[10];
  int total, i;

  printf("\n Insert  10 numbers, follow by enter\n");
  for (i = 0; i < 10; i++) {
    scanf("%d\n",&items[i]);
  }

  printf("\nTotal:  %d\n",integerAdd(items,10) );
  printf("\nMaximun value is: %d\n",max(items,10) );
  return 0;
}
int integerAdd(const int integerArray[], int numElements){

  int i,total = 0;

  for (i = 0; i < numElements; i++) {
      total = total + integerArray[i];
    }

  return total;
}

int max(const int integerArray[], int numElements){

  int i,max;
  max = integerArray[0];
  for (i = 0; i < numElements; i++) {
      max  =  (integerArray[i] > max ? integerArray[i]: max);
    }

  return max;
}
