/*
Author: Óscar Gutiérrez Castillo
Program: vowels:
Info: program what count vowels.
License: GNU General Public License v3.0
Date: February 1, 2018 (Last change)
TODO: Make dinamical matrix
*/

#include <stdio.h>
#include <ctype.h>


enum Boolean{
  FALSE, TRUE
};

enum Boolean vowel(char c);

int main(){

  char car;
  int numVowel = 0;

  puts("\nIntroduce a text, to finish push enter.");
  while ((car = getchar() ) !=  '\n'){
    if (vowel(tolower(car)))
      numVowel++;
  }
  printf("Total of vowels is : %d\n",numVowel );

  return 0;
}

enum Boolean vowel(char c){

  switch (c) {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
      return TRUE;
      break;
    default:
      return FALSE;
      break;
  }
}
