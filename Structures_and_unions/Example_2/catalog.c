/*
Author: Óscar Gutiérrez Castillo
Program: catalog:
Info: A liitle more complex example with structures
License: GNU General Public License v3.0
Date: February 2, 2018 (Last change)
TODO: Make dinamical matrix
*/

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

struct journal {
  char title[20];
  char pubDate[20];
  char author[30];
  int num;
  int request;
  float sellPrice;
};

int main(){

  struct journal[100];
  int total = 0;
  char resp, b[21];

  do {
    printf("Total of books %d\n",total+1 );
    printf("Which is the title?\n");
    gets(libro[total].title);

    printf("What is the date of publication?\n" );
    gets(libro[total].pubDate);

    printf("Who is the author?\n");
    gets(libro[total].author);

    printf("How many books are there?\n");
    scanf("%d\n",&libro[total].num );

    printf("How many copies are there orders?\n");
    scanf("%d\n",&libro[total].request );

    printf("What is the sale price?\n");
    scanf(" %f\n",&libro[total].sellPrice );

    printf("Are there more books? Y/N\n");
    scanf("%c\n",&resp );
    if (resp == 'Y')
      total++
  } while(resp == 'Y');


  return 0;
}
