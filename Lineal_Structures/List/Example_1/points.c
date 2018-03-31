#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>


#define MX 99

typedef struct Elemento
{
	int dato;
	struct Elemento* siguiente;
}Nodo;

void insertarFinal(Nodo **cabeza, int entrada);
void insertarPrimero (Nodo ** cabeza, int entrada);
void insertar(Nodo** cabeza, int dato, int entrada);
Nodo * localizar(Nodo* cabeza, int data);
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



Nodo* crearNodo (int x){
	Nodo * nodo;
	nodo = (Nodo*)malloc(sizeof(Nodo));
	nodo -> dato = x;
	nodo -> siguiente= NULL;
	printf("\nDato %d insertado con éxito\n",x);
	return nodo;
}


