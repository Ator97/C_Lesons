/*
Author: Óscar Gutiérrez Castillo
Program: variance
Info : Calculate variance
License: GNU General Public License v3.0
Date: February 1; 2018
TODO: Make all dinamical
*/

#include <stdio.h>
#include <math.h>

float variance(float a[], int n );
float average(float a[], int n);

 int main() {

  float floatArray[10]={1,2,3,4,5,6,7,8,9,10};
  printf("%f\n",variance(floatArray, sizeof(floatArray)/4 ));
  return 0;
}

float average(float a[], int n){
  float ave=0 ;
  int i;
  for (i = 0; i<n;i++){
    ave= ave + a[i];
  }
  return ave /n;
}



float variance(float a[], int n ){

  float ave= average(a, n),var=0;
  int i;
  for (i = 0; i<n;i++)
    var = pow((ave- a[i]),2)+ var;
  return (var / ave);


}
