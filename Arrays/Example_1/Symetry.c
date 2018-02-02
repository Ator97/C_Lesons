/*
Author: Óscar Gutiérrez Castillo
Program: Symetry:
Info : Determine if a integer matrix is symmetrical in relation to his main diagonal
License: GNU General Public License v3.0
Date: February 1, 2018
TODO: Make dinamical matrix
*/

#include <stdlib.h>
#include <stdio.h>


int symmetrical( int a[][4], int n ); //Function to obtain the symmetrical matrix
void printMat( int a[][4], int n ); //Only usefull to print matrix

int main(  ) {

  int a [4][4]= {         //Static matix
         {0 ,1 ,2, 3},
         {1, 0, 4, 5},
         {2, 4, 0, 6},
         {3, 5, 6, 0},
        };
  int n=4; //Size of the matrix

    if(symmetrical(a,n)){           //Here we know if the matrix is symmetrical or not
      printf("\nSymmetrical matrix !\n");
    }
    else{
      printf("\nThis matrix is not symmetrical !\n");
    }
  printMat(a,n); //Print matrix

  return 0;
}

//Here the joy part start.
int symmetrical( int a[][4], int n ){

  int i,j;

  /*
  The first problem is solved: the matrix is quadrangular,
  so we only need to check if opposite sides have the same value.
  Here we don't care the main diagonal because it is always symmetrical
  Remember: something is always symmetrical before itself.
  */
  for ( i=0;i<n;i++ ){
    for ( j=0;j<n;j++ ){
      if (a[i][j] != a[j][i])
        return 0; //If we found a problem, the matrix is no symmetrical
    }
  }
  return 1; //The matrix is symmetrical

}


void printMat( int a[][4], int n ){

  int i,j;

  for ( i=0;i<n;i++ ){
    for ( j=0;j<n;j++ ){
      printf("%d | ",a[i][j] ); //Only print and try to give a decent presentation
    }
    printf("\n");
  }

}
