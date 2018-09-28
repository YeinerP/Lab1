//Diego Alejandro Morales Muñoz
//yeiner David Pajaro Otero
//1. DiseÃ±e e implemente una clase llamada "Libro" que tiene los siguientes atributos privados:
//*	Un atributo de tipo entero para el codigo de catalogo del libro
//*	Un atributo de tipo cadena de caracteres para el nombre del libro
//*	Un atributo de tipo char para la materia del libro (L = Literatura, C = Ciencias, G = Geografia, A = Arte, E = Enciclopedia, D = Diccionario)
//*	Un atributo de tipo cadena de caracteres para el nombre del autor
//*	Un atributo tipo bool para indicar si el libro esta disponible o prestado (True = disponible, False = prestado)
//*	
//*	Adicionalmente la clase debe contar con metodos publicos para modificar y obtener el valor de los atributos
//*   La clase debe tener un constructor que permita inicializar todos los atributos de la clase al declarar un objeto (NO es constructor por defecto)
//*	Implemente una funcion amiga que permita buscar un "Libro" por Titulo y por Nombre de Autor
//*	Implemente una clase amiga que permita saber si un "Libro" esta disponible o prestado


#include <iostream>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
class Libro{
		//atributos de tipo entero, cadena, char
	private:  
	int Cod_catlibro;
	string Nombre_libro;
	char Tipo_materia;
	string Nombre_Autor;
	bool estado;
//metodos y contructores.
	public: 
	Libro();
	void setCod_cat (int a);
	int getCod_catlibro(void);	
	string getNombre_libro( );
	void setNombre_libro(string a );
	char getTipo_materia(void);
	void setTipo_materia(char a);
	string getNombre_autor();
	void setNombre_autor(string b);
	bool getestado();
	void  setestado(bool state );
	friend void buscarNoA(Libro arr[],string nom);
	friend class biblioteca;//amiguis
	//constructor inicializador
	
	Libro (int cod, string Nombre , char materia, string Autor, bool estado);

};
 void buscarNoA( Libro arr[], string nom){
 	int j=0;
	 while(j <5){
	 	
	 	if(arr[j].getNombre_libro()==nom or arr[j].getNombre_autor()==nom){
	 		cout<<"libro encontrado nombre "<<arr[j].getNombre_libro()<<" autor "<<arr[j].getNombre_autor()<<endl;
		 }
		 j++;
	 }
 }
class biblioteca{
	Libro *l;
	public:
		biblioteca():l(NULL){
		}	
		bool libro_disponible( Libro Literatura[],string nombre_libro){
			bool dis= false;
		for(int a=0;a<5;a++){
		if(Literatura[a].getNombre_libro() == nombre_libro){
		 dis=Literatura[a].getestado();
		}
		}
	return dis;
	}
};

int main(int argc, char** argv) {
 
		Libro Libro1[5];
		Libro1[0]= Libro(1, "Libro1",'L',"aua",true);
		Libro1[1]= Libro(1, "kamasutra",'L',"yeiner",false);
		Libro1[2]= Libro(1, "Liss",'L',"jaja",true);
		Libro1[3]=Libro(1, "Libro1",'L',"aua",true);
		Libro1[4]=Libro(1, "Libro1",'L',"aua",true);
	buscarNoA(Libro1,"kamasutra");
		biblioteca b;
		bool resul=b.libro_disponible(Libro1,"kamasutra");
		if(resul){
			cout<<"el libro esta disponible"<<endl;
		}
		else{
			cout<<"el libro no esta disponible "<<endl;
		}
	return 0;
}
Libro::Libro(){
}
Libro:: Libro(int cod, string Nombre , char materia, string Autor , bool estado){
	
this->Cod_catlibro	= cod;
this->Nombre_libro= Nombre;
this->Tipo_materia=materia;
this->Nombre_Autor=Autor;
this->estado=estado;

	
}
int Libro::getCod_catlibro(){
	return Cod_catlibro;
}
string Libro::getNombre_autor(){
	return this->Nombre_Autor;
}
string Libro::getNombre_libro(){
	return Nombre_libro;
}
char Libro::getTipo_materia(){
	return Tipo_materia;
}
bool Libro::getestado(){
	return estado;
}
void Libro::setCod_cat(int a){
	Cod_catlibro=a;
}
void Libro::setNombre_libro(string a){
	Nombre_libro=a;
}
void Libro::setTipo_materia(char a){
	Tipo_materia=a;
}
void Libro::setNombre_autor(string b){
	Nombre_Autor=b;
}
void Libro::setestado(bool state){
	estado =state;
}



















