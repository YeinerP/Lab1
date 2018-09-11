//Yeiner David Pájaro Otero
// Diego Alejandro Morales Muñoz 
///*2. Diseñe una funcion llamada foo_function() que debe tener un arreglo unidimensional del tipo y del tamanio que ud prefiera.
 //* Declare un puntero al arreglo y luego agregue las lineas de codigo necesarias para lograr que cada vez que
 //* se haga un llamado a la funcion foo_function() desde de la funcion main se imprima un elemento distinto del arreglo
 /* (en el orden que estan en el arreglo) con ayuda de la aritmetica de punteros.
 */
#include <iostream>
#include <stdlib.h> 
#include <time.h> 

using namespace std;

int arreglo[10]={1, 2, 3,4,5,6,7,8,9,10};
int foo_function(int  arreglo[10], int pos);
int main(int argc, char** argv) {	
int pos=0;
int *puntero_arreglo = arreglo;

while (pos<10){
int i=foo_function(puntero_arreglo, pos);
cout<<"valor de la funcion en esta posición es: "<<i<<endl;
pos++;
}

	
return 0;


}

int foo_function(int  arreglo[], int pos ){
			 
     	return  arreglo[pos];
     	
}


