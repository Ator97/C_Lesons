/*
Author: Óscar Gutiérrez Castillo
Program: rotate
Info : This program rotates a array of integer with and without a temporal variable
License: GNU General Public License v3.0
Date: February 1; 2018
TODO: Make all dinamical
*/

#include <stdio.h>

void rotate(int a[], int size);
void rotateNTmp(int a[], int size);

int main() {

  int intArray[5]= {1,2,3,4,5};
  rotate(intArray, sizeof(intArray)/4);
  rotateNTmp(intArray, sizeof(intArray)/4);

  return 0;
}

void rotate(int a[], int size){

  int tmp, i,n=size-1;

  for( i = 0; i <= size/2; i ++){
    tmp=a[i];
    a[i]= a[n];
    a[n]=tmp;
    n--;
  }
  for( i = 0; i <size; i ++)
    printf("%d ",a[i]);
  printf("\n");
}


void rotateNTmp(int a[], int size){

  int i,n=size-1,z;
  if (size%2 ==0)
    z = size/2;
  else{
    z= size/2- 1;
  }
  for( i = 0; i <= z; i ++){
    a[i] = a[i]+ a[n];
    a[n] = a[i] - a[n];
    a[i]=a[i]-a[n];
    n--;

  }
  for( i = 0; i <size; i ++)
    printf("%d ",a[i]);
  printf("\n");
}
