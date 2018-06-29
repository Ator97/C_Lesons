/*
Author: Óscar Gutiérrez Castillo
Program: rational
Info: Support to rational numbers
License: GNU General Public License v3.0
Date: June 28, 2018 (Last change)
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
