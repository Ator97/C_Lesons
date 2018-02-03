/*
Author: Óscar Gutiérrez Castillo
Program: Agenda:
Info: Basic example with structures
License: GNU General Public License v3.0
Date: February 1, 2018 (Last change)
TODO: Make dinamical matrix
*/

#include <stdio.h>

struct date {
  unsigned int day,month, year;
};

struct person {
  char name[20];
  unsigned int age;
  int height;
  float weight;
  struct date dat;
};

struct Employee {
  struct person person1;
  unsigned int salary;
  unsigned int hoursByWeek;
};

void input(struct Employee *p);
void show(struct Employee *p);

int main(){
  struct Employee p;

  input(&p);
  show(&p);

  return 0;
}

void input(struct Employee *p){

  printf("\nIntroduce a name: " );
  gets(p->person1.name);
  printf("\nIntroduce an age: ");
  scanf("%d",&p->person1.age );
  printf("\nIntroduce a height: " );
  scanf("%d",&p->person1.height );
  printf("\nIntroduce a weight: " );
  scanf(" %f",&p->person1.weight );
  printf("\nIntroduce a birthday date" );
  scanf("%d %d %d",&p->person1.dat.day,&p->person1.dat.month,&p->person1.dat.year );
  printf("\nIntrouce a salary  ");
  scanf("%d",&p->salary);
  printf("\nIntrouce the week work hours  ");
  scanf("%d",&p->hoursByWeek);
}

void show(struct Employee *p){
  printf("\nName: %s",p->person1.name );
  printf("\nAge: %d", p->person1.age);
  printf("\nheight: %d",p->person1.height );
  printf("\nheight: %f",p->person1.weight );
  printf("\nBirthday: %d %d %d ",p->person1.dat.day,p->person1.dat.month,p->person1.dat.year  );
  printf("\nSalary: %d",p->salary);
  printf("\nWeek work hours: %d ",p->hoursByWeek);


}
