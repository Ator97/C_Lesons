#include <stdio.h>

void add(int *a, int *b, int *res);


int main(){

int a = 10;
int b = 30;
int res;

printf("\n%d\n", res);

add(&a,&b,&res);

printf("\n%d\n", res);
}

void add( int *a, int *b, int *res){
	*res =  *a+*b;
}

