/*
Author: Óscar Gutiérrez Castillo
Program: national_elections
Info : Calculate the winner candidate, or the two canditates with more votes.
License: GNU General Public License v3.0
Date: February 1; 2018
TODO: Make all dinamical
*/

#include <stdio.h>

void table(int votes[][4]);
void totals(int win[][4]);
void winnerS(float candidates[4]);
int main(){

  int a[5][4]={
              {1, 2, 4, 4},
              {1, 2, 4, 4},
              {1, 2, 4, 4},
              {1, 2, 4, 4},
              {1, 2, 4, 4},
              };
   int *b;

  //table (a);

  totals(a);
  return 0;
}

void table(int votes[][4]){

  int i;
  printf("Distrito\tCandidato 1\tCandidato 2\tCandidato3\tCandidato 4");
  for(i = 0; i<5; i++)
    printf("\n   %d\t             %d               %d               %d               %d",i+1, votes[i][0],votes[i][1], votes[i][2], votes[i][3]);

}

void totals(int win[][4]){

  int candidatesArray[4]={0,0,0,0}, totalVotes = 0, i,j;
  float percentsArray[4];

  for ( i = 0; i < 5; i++ )
    for ( j = 0; j < 4; j++ ) {
      totalVotes+= win[i][j];
      candidatesArray[j]+= win[i][j];
    }
  printf("Total of votes: %d, this is the 100 percent of the voices\n\n",totalVotes );

  for ( j = 0; j < 4; j++){
    percentsArray[j]= ((float)candidatesArray[j] / (float)totalVotes)*100;
  }

  winnerS(percentsArray);

}

void winnerS(float candidates[4]){

  int i,j,n=0;

  int candidate[4]={1,2,3,4};
  for(i = n; i<4; i++){
    for(j=i+1;j<4;j++){
      if (candidates[j] > candidates[i]){
        candidates[i]=candidates[i]+candidates[j];
        candidates[j]=candidates[i]-candidates[j];
        candidates[i]=candidates[i]-candidates[j];

        candidate[i]=candidate[i]+candidate[j];
        candidate[j]=candidate[i]-candidate[j];
        candidate[i]=candidate[i]-candidate[j];
      }
    }
    n+=1;
  }

  for ( j=0;j<4;j++ )
    printf("\nFor candidate %d  has  the %.2f percent.", candidate[j] , candidates[j]);

  if(candidates[0] > 50)
    printf("\n\nThe winner is: %d\n",candidate[0] );
  else{
    printf("\n\nThe candidates that goes to the second round are: %d and %d.\n",candidate[0], candidate[1] );
  }

}
