#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#include <iostream>
#include <string.h>
//* 2. Diseñe e implemente una clase llamada "Movie" que tiene los siguientes atributos privados:
//* Un atributo de tipo entero para el ID de la pelicula
//* Un atributo de tipo cadena de caracteres para el nombre de la pelicula
//* Un atributo de tipo cadena de caracteres para el genero de la pelicula
//* Un atributo de tipo cadena de caracteres para el director de la pelicula
//* Un atributo tipo float para el "rating promedio" de la pelicula (el rating es un valor de 0.0 a 5.0 con el que los cinefilos califican una pelicula)
//* Un atributo tipo int que almacena el número de veces que la pelicula ha sido calificada
//*
//* El "rating promedio" de una pelicula se calcula como el total de la suma de todas las calificaciones que se le han dado a una pelicula
//* sobre el numero de calificaciones.
//*
//* La clase debe contar con un constructor por defecto, un constructor para inicializar atributos al instanciar objetos de la clase y un
//* constructor por copia.
//* La clase debe contar con metodos para modificar y obtener el valor de cada atributo individualmente.
//*
//* 3. Utilizando la clase que acaba de implementar, diseñe una pequeña aplicacion que permite a un usuario calificar peliculas. Si la pelicula ya ha sido calificada previamente (es decir,
//* si ya existe en la base de datos) entonces debe pedirle al usuario una calificación de 0.0 a 5.0 para esa pelicula. Si la pelicula no está
//* en la base de datos, entonces el programa debe permitirle al usuario ingresar la nueva pelicula a la base de datos, con el diligenciamiento
//* de todos sus datos, incluida la calificación de la pelicula por supuesto.
//*
//* La aplicación debe tener una opcion que sirve para recomendar peliculas a los usuarios. Esta recomendación se debe hacer de acuerdo a la
//* popularidad y a la calificación de la pelicula. Es decir, se deben recomendar las peliculas con las calificaciones más altas y con el
//* mayor número de calificaciones recibidas, osea que no tiene sentido recomendar una pelicula que ha sido calificada con 5.0 pero tiene
//* una sola calificación de un aficionado al cine.
//*/
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
class Movie
{
	private:
int ID_pelicula,n_calificaciones;
float Rating;
string Nombre_p ;
string Genero_p ;
string Director ;
 	
 


 public:
	Movie();
Movie (const  Movie& M);
 	Movie(int id,int c, float r, string n, string g ,string  d );
	void setID_pelicula(int);
	int  getID_pelicula();
	void setn_calificaciones(int);
	int  getn_calificaciones();
	void setNombre_p(string n);
	string getNombre_p();
	void setRating(float);
	float getRating();
	void setGenero_p(string g);
	string getGenero_p();
	void setDirector(string d);
    string getDirector();

	};
	Movie::Movie(){
	}
	Movie::Movie(int id,int c, float r, string n, string g ,string  d){
		this->ID_pelicula=id;
		this->Rating=r;
		this->n_calificaciones=c;
		this->Nombre_p=n;
		this->Genero_p=g;
		this->Director=d;
	}
	int Movie::getID_pelicula(){
		return ID_pelicula;
	}
	int Movie::getn_calificaciones(){
		return n_calificaciones;
	}
	float Movie::getRating(){
		return Rating;
	}
	string Movie::getNombre_p(){
		return Nombre_p;
	}
	string Movie::getGenero_p(){
		return Genero_p;
	}
	string Movie::getDirector(){
		return Director;
	}
	void Movie::setID_pelicula(int id){
		ID_pelicula=id;
	}
	void Movie::setn_calificaciones(int c){
		n_calificaciones=c;
	}
	void Movie::setNombre_p(string n){
		Nombre_p=n;
	}
	void Movie::setGenero_p(string g){
		Genero_p=g;
	}
	void Movie::setRating(float r){
		Rating=r;
	}
	void Movie::setDirector(string d){
		Director=d;
	}
	void mostrar (Movie mo[]){
		for(int i=0;i<6;i++){
			cout<< i+1<<" pelicula "<<mo[i].getNombre_p()<<" "<< mo[i].getDirector()<<" "<<mo[i].getGenero_p()<<" "<<mo[i].getRating()<<endl;
		}
	}
	void recomendaciones (Movie mo[]){
		for(int i=0;i<6;i++){
			if (mo[i].getRating()>4){
				cout<< i+1<<" pelicula "<<mo[i].getNombre_p()<<" "<< mo[i].getDirector()<<" "<<mo[i].getGenero_p()<<" "<<mo[i].getRating()<<endl;
			}
	
	}
	}
int main(int argc, char** argv) {
	float calificacion;
		Movie arreglo[20];
		arreglo[0]=Movie(1,0,0,"World","Accion","Juan");
		arreglo[1]=Movie(2,0,0,"Navy","Accion","Diego");
		arreglo[2]=Movie(3,0,0,"Naruto","Anime","Diego");
		arreglo[3]=Movie(4,0,0,"Gintama","Anime","Diego");
		arreglo[4]=Movie(5,0,0,"Monster","Terror","Diego");
		arreglo[5]=Movie(6,0,0,"Slayer","Gore","Diego");
		
	
	for (int x=0; x<21; x++){
		
	}
	int opc,id=6,pos;
	float c;
	char n[20], g[20], d[20];
	while (opc !=5){
	
		cout<<"Bienvenido "<<endl;
	cout<<"A continuacion podra calificar peliculas, y si la pelicula que desea calificar no existe en nuestra base de datos podra agregarla"<<endl;
	cout<<"1.Agregar pelicula"<<endl;
	cout<<"2.Calificar pelicula"<<endl;
	cout<<"3.Mostrar peliculas"<<endl;
	cout<<"4.Recomendaciones"<<endl;
	cout<<"5.Salir"<<endl;
	cout<<"Por favor seleccione una opcion"<<endl;
	cin>>opc;
	
	if (opc == 1){
	
		cout<<"Por favor llena la siguiente informacion"<<endl;
		cout<<"Nombre de la pelicula"<<endl;
		cin>>n;
		cout<<"Genero de la pelicula"<<endl;
		cin>>g;
		cout<<"Nombre del director de la pelicula"<<endl;
		cin>>d;
		arreglo[id].setNombre_p(n);
		arreglo[id].setGenero_p(g);
		arreglo[id].setDirector(d);
		arreglo[id].setn_calificaciones(0);
		arreglo[id].setID_pelicula(id);
		arreglo[id].setRating(0);
			id++;
	}
	if (opc ==2){
		mostrar(arreglo);
		cout<<"Ingrese posicion de la pelicula a calificar"<<endl;
		cin>>pos;
		cout<<"Ingrese la calificacion"<<endl;
		cin>>c;
		float r= (arreglo[pos-1].getRating()+c)/(arreglo[pos-1].getn_calificaciones()+1);
		arreglo[pos-1].setRating(r);
	}
	if (opc ==3){
		mostrar(arreglo);
	}
	if (opc ==4){
		cout<<"Nuestras recomendaciones son las siguientes: "<<endl;
		recomendaciones(arreglo);
	}

	}
	return 0;
}
