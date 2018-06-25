/*
Author: Óscar Gutiérrez Castillo
Program: List
Info: Generic List
License: GNU General Public License v3.0
Date: March 30, 2018 (Last change)
TODO: Put all in .h file and .c files
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>


typedef struct Elemento
{
	int dato;
	struct Elemento* siguiente;
}Nodo;

void insertarFinal(Nodo **cabeza, int entrada);
void insertarPrimero (Nodo ** cabeza, int entrada);
void insertar(Nodo** cabeza, int dato, int entrada);
Nodo * localizar(Nodo* cabeza, int data);
Nodo * buscarPosicion(Nodo* cabeza, int posicion);
Nodo* crearNodo (int x);

int main(int argc, char const *argv[])
{
	int d;
	Nodo * cabeza, *ptr;
	int k;

	cabeza = NULL;
	insertarFinal(&cabeza,0);	
	insertarPrimero(&cabeza,1);
	insertarPrimero(&cabeza,2);
	insertarPrimero(&cabeza,3);
	insertarPrimero(&cabeza,5);
	insertarPrimero(&cabeza,6);
	insertarFinal(&cabeza,-1);
	insertar(&cabeza,3,4);

	

	for(k =0, ptr = cabeza; ptr;){

			printf("%d\n",ptr->dato );
			k++;
		
		ptr = ptr->siguiente;
	}

	return 0;
}


void insertarPrimero (Nodo ** cabeza, int entrada){
	Nodo * nodo;
	nodo = crearNodo(entrada);
	nodo-> siguiente= *cabeza;
	*cabeza= nodo;
}


void insertarFinal(Nodo **cabeza, int entrada){
	Nodo * ultimo;
	ultimo = *cabeza;

	if(ultimo == NULL)
		*cabeza = crearNodo(entrada);
	else{
		for(; ultimo->siguiente != NULL;)
			ultimo = ultimo->siguiente;
		ultimo -> siguiente=crearNodo(entrada);
	}

}

void insertar(Nodo** cabeza, int dato, int entrada){
	Nodo * nuevo, * despues;
	nuevo = crearNodo(entrada);
	int esta = 0;
	despues = *cabeza;
	if(*cabeza == NULL){
		*cabeza= nuevo;
		printf("La lista estaba vacía\n");
	}
	else{
		while((despues != NULL) && !esta){
			if (despues->dato != dato)
				despues = despues-> siguiente;
			else
				esta =-1;
		}

		if(esta){
			nuevo -> siguiente = despues->siguiente;
			despues->siguiente = nuevo;
		}

	}

}

Nodo * localizar(Nodo* cabeza, int data){
	Nodo *indice;
	for (indice = cabeza; indice !=NULL; indice->siguiente)
		if (data == indice->dato)
			return 1;
	return 0;
}


Nodo * buscarPosicion(Nodo* cabeza, int posicion){
	Nodo * indice;

	if (posicion <1)
		return -1;
	indice = cabeza;
	for (int i = 0; (i < posicion  && indice != NULL); i++){
		indice = indice -> siguiente;
	}
	return indice;
}



Nodo* crearNodo (int x){
	Nodo * nodo;
	nodo = (Nodo*)malloc(sizeof(Nodo));
	nodo -> dato = x;
	nodo -> siguiente= NULL;
	printf("\nDato %d insertado con éxito\n",x);
	return nodo;
}




void eliminar(Nodo **cabeza, int data){
	Nodo * actual, * anterior;
	int encontrado = 0;

	actual = * cabeza;
	anterior = NULL;
	while((actual != NULL) && !encontrado){
		encontrado = (actual-> dato == data);
		if(!encontrado){
			anterior = actual;
			actual = actual->siguiente;
		}
	}
	if( actual != NULL){
		if(actual == *cabeza)
			*cabeza = actual->siguiente;
		else
			anterior->siguiente=actual->siguiente;
	}
	free(actual);

}