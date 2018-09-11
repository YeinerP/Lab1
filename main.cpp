//Yeiner David Pájaro Otero
// Diego Alejandro Morales Muñoz

#include <iostream>
#include <conio.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
	struct Persona{
		int anio_nacimiento=1996 ;
		char nombre[20] ="Diego";
		float edad = 22;
		char apellido[20] = "Morales";
		double peso = 70.5;
		int dia_nacimiento=22;
	} persona, *puntero_persona = &persona;
void mostrarDatos(Persona * );

	
	struct Persona2{ 
		int anio_nacimiento2=1997;
		int dia_nacimiento2=9;
		float edad2 = 21;
		char nombre2[20] = "Yeiner";
		char apellido2[20] = "Pajaro";
		double peso2 = 61;
	}persona2, *puntero_persona2 = &persona2;
	void mostrarDatos2(Persona2*);
	void mostrarDatos3(Persona*);
	void mostrarDatos4(Persona2*);
	
	
	
int main(int argc, char** argv) {

mostrarDatos(puntero_persona);
mostrarDatos2(puntero_persona2);
mostrarDatos3(puntero_persona);
mostrarDatos4(puntero_persona2);
const int sizea = sizeof(Persona);
cout<<"El tamanio de la primera estructura es: "<< sizea<<" bytes "<<endl;
const int sizeb = sizeof(Persona2);
cout<<"El tamanio de la segunda estructura es: "<< sizeb<<" bytes "<<endl;
	getch();
	return 0;
}
// El resultado de la operación es el tamaño del operando en bytes o el tamaño de la representación de la memoria. 

void mostrarDatos(Persona *puntero_persona){
	cout<<" Metodo puntero "<<endl;
	cout<<puntero_persona->	anio_nacimiento<<endl;
	cout<<puntero_persona->apellido<<endl;
	cout<<puntero_persona->dia_nacimiento<<endl;
	cout<<puntero_persona->edad<<endl;
	cout<<puntero_persona->nombre<<endl;
	cout<<puntero_persona->peso<<endl;
}
void mostrarDatos3(Persona *puntero_persona){
	cout<<" Metodo type casting"<<endl;
	float aniofloat = (float)puntero_persona->	anio_nacimiento;
	cout<<" "<<aniofloat<<endl;
	string nombrestr = (string)puntero_persona->nombre;
	cout<<" "<<nombrestr<<endl;
	double dianacdouble = (double)puntero_persona->dia_nacimiento;
	cout<<" "<<dianacdouble<<endl;
	double edaddouble = (double)puntero_persona->edad;
	cout<<" "<<edaddouble<<endl;
    string apellidostr = (string)puntero_persona->apellido;
    cout<<" "<<apellidostr<<endl;
	int pesoint = (int)puntero_persona->peso;
	cout<<" "<<pesoint<<endl;
}

void mostrarDatos2(Persona2 *puntero_persona2){
	cout<<" Metodo puntero"<<endl;
	cout<<puntero_persona2-> anio_nacimiento2<<endl;
	cout<<puntero_persona2->apellido2<<endl;
	cout<<puntero_persona2->dia_nacimiento2<<endl;
	cout<<puntero_persona2->edad2<<endl;
	cout<<puntero_persona2->nombre2<<endl;
	cout<<puntero_persona2->peso2<<endl;
}
void mostrarDatos4(Persona2 *puntero_persona2){
	cout<<" Metodo type casting"<<endl;
	float aniofloat2 = (float)puntero_persona2->	anio_nacimiento2;
	cout<<" "<<aniofloat2<<endl;
	string apellidostr2 = (string)puntero_persona2->apellido2;
	cout<<" "<<apellidostr2<<endl;
	double dianacdouble2 = (double)puntero_persona2->dia_nacimiento2;
	cout<<" "<<dianacdouble2<<endl;
	double edaddouble2 = (double)puntero_persona2->edad2;
	cout<<" "<<edaddouble2<<endl;
    string nombrestr2 = (string)puntero_persona2->nombre2;
    cout<<" "<<nombrestr2<<endl;
	int pesoint2 = (int)puntero_persona2->peso2;
	cout<<" "<<pesoint2<<endl;
}


