/*
Author: Óscar Gutiérrez Castillo
Program: Symetry:
Info : Determine if a integer matrix is symmetrical in relation to his main diagonal
License: GNU General Public License v3.0
Date: January 30, 2018
TODO: Make dinamical matrix
*/

#include <stdlib.h>
#include <stdio.h>


int symmetrical( int a[][4], int n );
void printMat( int a[][4], int n );

int main( int argc, char const *argv[] ) {

  int a [4][4]= {
         {0 ,1 ,2, 3},
         {1, 0, 4, 5},
         {2, 4, 0, 6},
         {3, 5, 6, 0},
        };
  int n=4;

    if(symmetrical(a,n)){
      printf("\nSymmetrical matrix !\n");
    }
    else{
      printf("\nThis matrix is not symmetrical !\n");
    }
  printMat(a,n);

  return 0;
}


int symmetrical( int a[][4], int n ){

  int i,j;

  for ( i=0;i<n;i++ ){
    for ( j=0;j<n;j++ ){
      if (a[i][j] != a[j][i])
        return 0;
    }
  }
  return 1;

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
