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
int isValid(struct nodes *node);

int main(int argc, char  *argv[]) {

  struct nodes * node = createNodes();

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
  node[1].forwards[0] = 0;
  node[1].forwards[1] = 0;
  node[1].forwards[2] = 3;
  node[1].forwards[3] = 0;
  node[1].forwards[4] = 1;

  node[2].start = 0;
  node[2].end = 1;
  node[2].forwards[0] = 4;
  node[2].forwards[1] = 3;
  node[2].forwards[2] = 0;
  node[2].forwards[3] = 0;
  node[2].forwards[4] = 0;


  node[3].start = 0;
  node[3].end = 0;
  node[3].forwards[0] = 0;
  node[3].forwards[1] = 0;
  node[3].forwards[2] = 0;
  node[3].forwards[3] = 3;
  node[3].forwards[4] = 1;


  node[4].start = 0;
  node[4].end = 0;
  node[4].forwards[0] = 0;
  node[4].forwards[1] = 2;
  node[4].forwards[2] = 0;
  node[4].forwards[3] = 0;
  node[4].forwards[4] = 0;

  return  node;
}
