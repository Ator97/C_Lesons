/*
Author: Óscar Gutiérrez Castillo
Program: rational
Info: Support to rational numbers
License: GNU General Public License v3.0
Date: February 5, 2018 (Last change)
TODO: Support variable arguments
*/

struct rational {
  int numbered;
  int denominator;
};

struct rational create (int numbered, int denominator);
struct rational add(struct rational *rational1, struct rational *rational2);
struct rational sub(struct rational *rational1, struct rational *rational2);
struct rational div(struct rational *rational1, struct rational *rational2);
struct rational mul(struct rational *rational1, struct rational *rational2);
struct rational simplify(struct rational *rational1);

int main() {
  /* code */
  return 0;
}

struct rational create (int numbered, int denominator){

  struct rational rational;

  rational.numbered = numbered;
  rational.denominator = denominator;

  return rational;

}

struct rational add(struct rational *rational1, struct rational *rational2){

  struct rational rational;

  rational.numbered     = (rational1->numbered*rational2->denominator) + (rational1->denominator*rational2->numbered);
  rational.denominator  = rational1->denominator*rational2->denominator;
  simplify(&rational);


  return rational;

}

struct rational sub(struct rational *rational1, struct rational *rational2){

  struct rational rational;

  rational.numbered     = (rational1->numbered*rational2->denominator) - (rational1->denominator*rational2->numbered);
  rational.denominator  = rational1->denominator*rational2->denominator;
  simplify(&rational);


  return rational;

}

struct rational div(struct rational *rational1, struct rational *rational2){

  struct rational rational;

  rational.numbered     = rational1->numbered*rational2->denominator;
  rational.denominator  = rational1->denominator*rational2->numbered;
  simplify(&rational);

  return rational;

}

struct rational mul(struct rational *rational1, struct rational *rational2){

  struct rational rational;

  rational.numbered     = rational1->numbered*rational2->numbered;
  rational.denominator  = rational1->denominator*rational2->denominator;
  simplify(&rational);

  return rational;

}

struct rational simplify(struct rational *rational1){
  struct rational rational;

  if (rational1->numbered %2 == 0 && rational1->denominator %2){
    rational.numbered = rational1->numbered /2;
    rational.denominator = rational1->denominator /2;
    simplify(&rational);
  }
  if (rational1->numbered %3 == 0 && rational1->denominator %3 == 0){
    rational.numbered = rational1->numbered /3;
    rational.denominator = rational1->denominator /3;
    simplify(&rational);
  }

  if (rational1->numbered %5 == 0 && rational1->denominator %5 == 0 ){
    rational.numbered = rational1->numbered /5;
    rational.denominator = rational1->denominator /5;
    simplify(&rational);
  }

  if (rational1->numbered %7 == 0 && rational1->denominator %7 == 0){
    rational.numbered = rational1->numbered /7;
    rational.denominator = rational1->denominator /7;
    simplify(&rational);
  }

  if (rational1->numbered %11 == 0 && rational1->denominator %11 == 0){
    rational.numbered = rational1->numbered /11;
    rational.denominator = rational1->denominator /11;
    simplify(&rational);}

  return rational;
}
