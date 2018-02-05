/*
Author: Óscar Gutiérrez Castillo
Program: system
Info: This program generates bills and states.
License: GNU General Public License v3.0
Date: February 4, 2018 (Last change)
TODO: Make dinamycal some structure varaibles
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct client { //Stucture designated to clients
  char name[20];
  int units;
  float price;
  char state[19];
};
int users;

struct client* inputUsers(); //This function creates all
void defaulterUsers(struct client *p);
void billUsers(struct client *p);

int main() {
  int i;
  struct client *p = inputUsers();

  for ( i = 0; i < users; i++) {
    printf("\nName: %s",p[i].name );
    printf("\nUnits: %d",p[i].units );
    printf("\nPrice: %f ",p[i].price);
    printf("\nState: %s",p[i].state);
    printf("\n" );

  }
  printf("\n\n" );

  defaulterUsers(p);

  free(p);

  return 0;
}

struct client* inputUsers(){
  struct client *p; //Pointer that makes reference to all pesudo-database
  int i=0; //Conunter used to add users
  int j; // Counter used to add extra users and menu
  char op; //Bool to know if we want to use mor users
  printf("\nTell me the number of users to add: " );
  scanf("%d",&users);

  p = (struct client *)malloc(users * sizeof(struct client));

  do {
    printf("\nName:  ");
    scanf("%s",p[i].name );
    printf("\nUnits:  ");
    scanf("%d",&p[i].units );
    printf("\nPrice:  ");
    scanf(" %f",&p[i].price );
    do{
      printf("\nSelect a state:\n 1-.Defaulter\n 2-.Clean\n 3-.Debts\n ");
      scanf("%d",&j );
      switch (j) {
        case 1: strcpy(p[i].state , "Defaulter");
        j= 1;
        break;
        case 2: strcpy(p[i].state , "Clean");
        j= 1;
        break;
        case 3: strcpy(p[i].state , "Debts");
        j= 1;
        break;
        default:
          printf("\nThis is a wrong choose\n" );
          j= 0;
        break;
      }
    }while (j != 1);

    i++;

    if(i == users){
      printf("\nYou want to add more users? Y/N");
      scanf("%s",&op );
      if (op =='Y') {
        printf("\nTell the number of extra users to add");
        scanf("%d",&j );
        users+=j;
        p = (struct client*) realloc(p, users*(sizeof(struct client)));
      }
    }
  } while(i < users);

  return p;

}

void defaulterUsers(struct client *p){
  int i;
  char def[19] = "Defaulter";

  for(i = 0; i < users; i++)
    if (strcmp(p[i].state,def) == 0)
      printf("\nThis user is a defaulter %s\n",p[i].name );

}

void billUsers(struct client *p){
  int i,g;
  char def[19] = "Defaulter";
  printf("\nAmount?" );
  scanf("%d\n",&g );

  for(i = 0; i < users; i++)
    if (p[i].price > g)
      printf("\nThis user is the chosen one! : %s\n",p[i].name );

}
