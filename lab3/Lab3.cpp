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

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
class Libro{
		//atributos de tipo entero, cadena, char
	private:  
	int Cod_catlibro;
	char *Nombre_libro;
	char Tipo_materia;
	char *Nombre_Autor;
	bool estado;
//metodos y contructores.
	public: 
	void setCod_cat (int a);
	int getCod_catlibro(void);	
	char getNombre_libro( void);
	void setNombre_libro(char *a );
	char getTipo_materia(void);
	void setTipo_materia(char a);
	char *getNombre_autor(void);
	void setNombre_autor(char* b);
	bool getestado(void);
	
	//constructor inicializador
	Libro (int cod_catlibro, char *ptrNombre_libro , char ptrtipo_materia, char *ptrNombre_Autor, bool estado);
	
};
int main(int argc, char** argv) {
 char Tipo_libro[20];
		Libro Libro1(1, "Libro1",'L',"aua",true);
	
	return 0;
}
Libro:: Libro(int cod_catlibro, char *ptrNombre_libro , char ptrtipo_materia, char *ptrNombre_Autor , bool estado){
	
this->Cod_catlibro	=Cod_catlibro;
this->Nombre_libro= ptrNombre_libro;
this->Tipo_materia=Tipo_materia;
this->Nombre_Autor=Nombre_Autor;
this->estado=estado;
	
}
char *Libro::getNombre_autor(){
	return this->Nombre_Autor;
}










