/*
Author: Óscar Gutiérrez Castillo
Programa: automata
Info: General program for autamata string recognization
License: GNU General Public License v3.0
Date: modificación: 2, Marzo, 2018 (Last Change)
TODO: -
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define X 5 //number of productions
#define Y 5 //number of nodes

struct nodes{
    int start;
    int end;
    int forwards[X];
};

char prod[X] = {'a','b','c','d','e'};

struct nodes*  createNodes();
int linnearSearch(char *a, char t);

int isValid(struct nodes *node, char prod[], int state,char *cadena, int size, int tempo);
int main(int argc, char  *argv[]) {

  if (argc <=1){ //Manejo de error por no agregar la cadena a validar
    printf("Faltan argumentos\n" );
    return 0;
  }
  struct nodes * node = createNodes();



  if (isValid(node,prod,0,argv[1],strlen(argv[1]), 0) == 1)
    printf("La cadena ingresada es válida\n");
  else
    printf("La cadena ingresada no es válida\n");
  return 0;
}

struct nodes*  createNodes(){
  struct nodes * node; //Pointer that reference the nodes that make de automata
  int i, j;
  char c;
  node = (struct nodes*)malloc((Y-1)* sizeof(struct nodes));

  node[0].start = 1;
  node[0].end = 1;
  node[0].forwards[0] = 4;
  node[0].forwards[1] = 4;
  node[0].forwards[2] = 3;
  node[0].forwards[3] = 3;
  node[0].forwards[4] = 1;

  node[1].start = 0;
  node[1].end = 1;
  node[1].forwards[0] = -1;
  node[1].forwards[1] = -1;
  node[1].forwards[2] = 3;
  node[1].forwards[3] = -1;
  node[1].forwards[4] = 1;

  node[2].start = 0;
  node[2].end = 1;
  node[2].forwards[0] = 4;
  node[2].forwards[1] = 2;
  node[2].forwards[2] = -1;
  node[2].forwards[3] = -1;
  node[2].forwards[4] = -1;


  node[3].start = 0;
  node[3].end = 0;
  node[3].forwards[0] = -1;
  node[3].forwards[1] = -1;
  node[3].forwards[2] = -1;
  node[3].forwards[3] = 3;
  node[3].forwards[4] = 1;


  node[4].start = 0;
  node[4].end = 0;
  node[4].forwards[0] = -1;
  node[4].forwards[1] = 2;
  node[4].forwards[2] = -1;
  node[4].forwards[3] = -1;
  node[4].forwards[4] = -1;

  return  node;
}

int isValid(struct nodes *node, char prod[],int state, char *cadena ,int size,int tempo){

  int i;
  int change;
  if (node[state].end == 1 && tempo == size)
      return 1;
  change = linnearSearch(prod,cadena[tempo]);
  if (change != -1)
    printf("Pasamos al estado no.%d, por medio de %c\n",node[state].forwards[change]+1, cadena[tempo]);
    if(node[state].forwards[change] == -1){
      printf("Queremos pasar por medio de %c a otro estado, pero el estado %d, no puede acceder a él\n", cadena[state]+1, state);
      return 0;
    }
    return isValid(node, prod, node[state].forwards[change], cadena, size, tempo+1);
  return 0;
}

int linnearSearch(char *a, char t){
  int i;
  for( i =0; i<strlen(a);i++)
    if ( (int)a[i] == (int)t )
      return i;
  return -1;
}
