/*
Author: Óscar Gutiérrez Castillo
Program: transposed
Info : transposed a maxtix
License: GNU General Public License v3.0
Date: February 1 ; 2018
TODO: Make all dinamical
s
*/


#include <stdio.h>

void printtransposed( int a[][4], int numElements );
void printMat( int a[][4], int numElements);

int main() {

int a [4][4]= {
         {4 ,7 ,1, 3 },
         {2, 0, 5, 10},
         {2, 4, 0, 6},
         {3, 5, 6, 0},
        };
int n=4;

  printf("This is the original matrix:\n");
  printMat( a, n );
  printf("\nThis is the transposed matrix\n");
  printtransposed( a , n);
return 0;
}


void printMat( int a[][4], int n ){

  int i,j;

  for ( i=0;i<n;i++ ){
    for ( j=0;j<n;j++ ){
      printf("%d | ",a[i][j] );
    }
    printf("\n");
  }

}

void printtransposed( int a[][4], int n ){

  int i,j;

  for ( i=0;i<n;i++ ){
    for ( j=0;j<n;j++ ){
      printf("%d | ",a[j][i] );
    }
    printf("\n");
  }

}
