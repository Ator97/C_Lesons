/*
Author: Óscar Gutiérrez Castillo
Program: pascal
Info : Print pascal triangle
License: GNU General Public License v3.0
Date: February 1; 2018
TODO: Make all dinamical
*/

#include <stdio.h>
#include <stdlib.h>

void pascalTriangle(long int n);

int main(int argc, char const *argv[]) {

  if (argc <= 1){
    printf("Need to add arguments\n" );
    return 0;
  }
  if (argc ==2){
    pascalTriangle(atol(argv[1]));
  }
  return 0;
}

void pascalTriangle(long int n){

  int i,j,matrix[20][20];


  if (n > 20) {
    printf("\nIs a very big triangle, try another little.\n" );
    return;
  }
  if (n == 1){
    printf("\n1\n");
  }
  if (n == 2){
    printf("\n1\n" );
    printf("\n1 1\n");
  }
  if (n > 2){

    for (i = 0; i < 20; i++)
      for(j =0; j<20; j++)
        matrix[i][j]=0;

    matrix[0][0]=1;
    matrix[1][0]=1;
    matrix[1][1]=1;
    for(i=2; i <n; i++){
      matrix[i][0]=1;
      matrix[i][i]=1;
      for(j=0;j<i;j++)
        if (i != j)
          matrix[i][j]= matrix[i-1][j-1] + matrix[i-1][j];

    }

    for (i = 0; i < n; i++) {
      for(j =0; j<i+1; j++){
        printf(" %d ",matrix[i][j]);
      }
      printf("\n");
    }

  }

}
