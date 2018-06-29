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
} libro[100];

int main(){

  int total = 0;
  char resp, b[21];
  int menu;

  while(menu < 3){
    printf("What you want to do?\n");
    printf("1-.See all boks\n");
    printf("2-.Add more books\n");
    printf("To exit enter any other number\n");
    scanf("%d", &menu);

    if (menu == 1){
      for( int i = 0; i <=total; i++){
        printf("\n\n\nBook number %d is:\n",i +1 );
        printf("Titule: %s\n",libro[total].title);
        printf("Publication date: %s\n",libro[total].pubDate );
        printf("Author: %s\n",libro[total].author );
        printf("Number of book aviable: %d\n",libro[total].num );
        printf("Price: %f\n",libro[total].sellPrice );
        printf("Orders incomming: %d\n",libro[total].request );

      }
    }

    if (menu == 2){
      do {
        getchar();
        printf("Total of books %d\n",total+1 );
        printf("Which is the title?\n");

        scanf("%s", libro[total].title);

        printf("What is the date of publication?\n" );
        scanf("%s", libro[total].pubDate);

        printf("Who is the author?\n");
        scanf("%s", libro[total].author);
        getchar();
        printf("How many books are there?\n");
        scanf(" %d",&libro[total].num );

        printf("How many copies are there orders?\n");
        scanf(" %d",&libro[total].request );

        printf("What is the sale price?\n");
        scanf(" %f",&libro[total].sellPrice );

        printf("Are there more books? Y/N\n");
        scanf(" %c",&resp );
        if (resp == 'Y')
          total++;
      } while(resp == 'Y');
    }
  }

  return 0;
}
