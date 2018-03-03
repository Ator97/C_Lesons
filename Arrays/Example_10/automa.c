/*
Author: Óscar Gutiérrez Castillo
Programa: automata
Info: Execute of autamata for string recognize
License: GNU General Public License v3.0
Date: modificación: 2, Marzo, 2018 (Last Change)
TODO: -
*/

#include <stdio.h>
#include <string.h>

//Definiciones del autómata
#define X 5  //Literales
#define Y 5 //Nodos

//Tabla de autómata
int automata[X][Y]={
            {4,4,3,3,1},
            {,,3,,1},
            {4,2,,,},
            {,,,,3,1,},
            {,,2,,,},
            };
int cadena(char cadena1[]);

 int main(int argc, char const *argv[]) {

  return 0;
}
