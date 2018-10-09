/* Practica de Laboratorio 4
*  Informatica 2 - 2018_2
*  Prof: Juan Camilo Correa Chica
*  Fecha: Octubre 1/2018 - Octubre 8/2018
*  Plazo máximo para enviar enlace para clonar el repositorio: 
*  Estudiante1: Nombres y apellidos completos
*  Estudiante2: Nombres y apellidos completos (Opcional, puede trabajar individualmente)
*  Fecha del ultimo Commit en GitHub: Agregue la fecha y hora del ultimo Commit (aproximada)

* 1.Implementar un sistema de reserva de tiquetes de un crucero, que tiene 3 alternativas de ubicación en los camarotes del buque: Clase Económica, 
*   clase Turística y clase Premium. Cada clase tiene el mismo número de camarotes disponibles: 50.
*	Implemente una clase llamada Reserva que tiene los atributos: un string para el nombre de quien reserva, un int para el número de documento de identidad, 
*   un char para la cantidad de equipaje (cuántos maletines) y un bool para marcar el camarote en cuestión como reservado.
*	Usando la clase Reserva usted debe implementar un sistema de reserva de tiquetes para el crucero. Por las restricciones de memoria del sistema usted tiene
*   como requerimiento el uso de apuntadores y de los operadores NEW y DELETE para el manejo dinámico de memoria del sistema.
*	El programa iniciará dando la bienvenida y ofrecerá la opción de reservar un camarote en el crucero y la opción de revisar la lista de reservas.
*	Si el usuario elige reservar un camarote se le preguntara en que clase desea viajar y el camarote que desea ocupar (de los 50 disponibles). Cuando el 
*   usuario escoja el camarote se debe revisar que no esté reservado previamente. Si el camarote está disponible se le preguntara el nombre, el número de
*   identificación y el equipaje total que va llevar. Recuerde que debe crear un objeto de la clase Reserva y almacenarlo en la ubicación correspondiente a
*   la clase viajera (Económica, Turística o Premium)  y al número de camarote.
*	Si el usuario elige ver la lista de Reserva entonces se debe pedir que introduzca un password (ya que está opción es solo para usuarios con permisos de
*   administrador, por seguridad), si el password es correcto entonces se debe mostrar en pantalla los camarotes reservados por cada clase viajera y el 
*   nombre de quien lo ha reservado y la cantidad de camarotes aún disponibles.
*
*/
#include <iostream>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

class Reserva
{
	private: 
		string Nombre;
		int Documento_id;
		char Equipaje;
		bool Estado;
	
		
	public:
			Reserva(string , int , char , bool );
		Reserva();
	void setNombre (string a );
	string getNombre (void);
	void setDocumento_id (int a);
	int getDocumento_id (void);
	void setEquipaje (char a);
	char getEquipaje (void);
	void setEstado (bool state);
	bool getEstado (void);
	

		 
};
    void mostrar_disponibles(Reserva r[]);
    void mostrar_reservas(Reserva r[]);
	bool verificar_reservas(Reserva r[],int pos);
Reserva::Reserva(){
}
Reserva::Reserva(string _Nombre, int _Documento, char _Equipaje, bool _Estado){
	Nombre = _Nombre;
    Documento_id = _Documento;
	Equipaje = _Equipaje;
	Estado = _Estado;
}

int main(int argc, char** argv) {
	int opc=0,camarote,doc,ubicacion,password=123456;
	string nom;
	char equip;
	Reserva Clase_economica[50];
	Reserva Clase_turistica[50];
	Reserva Clase_premium[50];
	
    while (opc != 3 ){
	cout<<"BIENVENIDO"<<endl;
	cout<<" QUE DESEAS HACER? "<<endl;
	cout<<"1. RESERVAR UN CAMAROTE "<<endl;
	cout<<"2. REVISAR LA LISTA DE RESERVAS "<<endl;
	cout<<"3. SALIR"<<endl;
	cin>>opc;
	
	if ( opc == 1){
		cout<<"INGRESE LA CLASE EN LA CUAL DESEA HACER SU RESERVACION"<<endl;
		cout<<"1. CLASE ECONOMICA"<<endl;
		cout<<"2. CLASE TURISTICA"<<endl;
		cout<<"3. CLASE PREMIUM"<<endl;
		cin>>camarote;
		if (camarote == 1){
			cout<<"INGRESE UN # DEL 1 AL 50 PARA SELECCIONAR LA UBICACION DESEADA"<<endl;
			cin>>ubicacion;
			if  (not verificar_reservas(Clase_economica,ubicacion)){
				
			
			cout<<"INGRESE SU NOMBRE"<<endl;
			cin>>nom;
			cout<<"INGRESE SU # DE DOCUMENTO"<<endl;
			cin>>doc;
			cout<<"INGRESE LA CANTIDAD DE MALETAS"<<endl;
			cin>>equip;
			cout<<"RESERVACION EXITOSA"<<endl;
			Clase_economica[ubicacion-1]=Reserva(nom,doc,equip,true);
			}
			else 
			{
				cout<<"EL CAMAROTE ESTA OCUPADO"<<endl;
			}
		}
		else if(camarote == 2){
			cout<<"INGRESE UN # DEL 1 AL 50 PARA SELECCIONAR LA UBICACION DESEADA"<<endl;
			cin>>ubicacion;
			if  (not verificar_reservas(Clase_economica,ubicacion)){
			cout<<"INGRESE SU NOMBRE"<<endl;
			cin>>nom;
			cout<<"INGRESE SU # DE DOCUMENTO"<<endl;
			cin>>doc;
			cout<<"INGRESE LA CANTIDAD DE MALETAS"<<endl;
			cin>>equip;
			cout<<"RESERVACION EXITOSA"<<endl;
			Clase_turistica[ubicacion-1]=Reserva(nom,doc,equip,true);
			
			}
		}
		else if (camarote == 3){
			cout<<"INGRESE UN # DEL 1 AL 50 PARA SELECCIONAR LA UBICACION DESEADA"<<endl;
			cin>>ubicacion;
			if  (not verificar_reservas(Clase_economica,ubicacion)){
			cout<<"INGRESE SU NOMBRE"<<endl;
			cin>>nom;
			cout<<"INGRESE SU # DE DOCUMENTO"<<endl;
			cin>>doc;
			cout<<"INGRESE LA CANTIDAD DE MALETAS"<<endl;
			cin>>equip;
			cout<<"RESERVACION EXITOSA"<<endl;
			Clase_premium[ubicacion-1]=Reserva(nom,doc,equip,true);
			
			}
		}
		else {
			cout<<"OPCION NO VALIDA"<<endl;
		}
	}
	else if (opc ==2){
		cout<<"INGRESE EL PASSWORD"<<endl;
		cin>>password;
		if (password==123456){
				cout<<"LAS RESERVAS DE LA CLASE ECONOMICA SON: "<<endl;
		mostrar_reservas(Clase_economica);
		cout<<"LOS CAMAROTES DISPONIBLES DE LA CLASE ECONOMICA SON: "<<endl;
		mostrar_disponibles(Clase_economica);
			cout<<"LAS RESERVAS DE LA CLASE TURISTICA SON: "<<endl;
		mostrar_reservas(Clase_turistica);
		cout<<"LOS CAMAROTES DISPONIBLES DE LA CLASE TURISTICA SON: "<<endl;
		mostrar_disponibles(Clase_turistica);
			cout<<"LAS RESERVAS DE LA CLASE PREMIUM SON: "<<endl;
		mostrar_reservas(Clase_premium);
		cout<<"LOS CAMAROTES DISPONIBLES DE LA CLASE PREMIUM SON: "<<endl;
		mostrar_disponibles(Clase_premium);
		}
	    else 
	    {
	    	cout<<"EL PASSWORD ES INCORRECTO, NO PODEMOS SUMINISTRARTE LA INFORMACION QUE DESEAS "<<endl;
		}
	}
	
		}
		
	return 0;
}
string Reserva::getNombre(){
	return Nombre;
}
int Reserva::getDocumento_id(){
	return Documento_id;
}
char Reserva::getEquipaje(){
	return Equipaje;
}
bool Reserva::getEstado(){
	return Estado;
}
void Reserva::setNombre(string a){
	Nombre=a;
}
void Reserva::setDocumento_id(int a){
	Documento_id=a;
}
void Reserva::setEquipaje(char a){
	Equipaje=a;
}
void Reserva::setEstado(bool state){
	Estado=state;
}
void mostrar_reservas(Reserva r[]){
	for (int j=0; j<50;j++) {
	 if (r[j].getNombre()==""){
	
	}
	else {
			cout<<"El camarote # "<<j+1<<" Documento "<<r[j].getDocumento_id()<<" Nombre "<<r[j].getNombre()<<" Total equipaje "<<r[j].getEquipaje()<<endl;
			
	}

	}
		
}
void mostrar_disponibles(Reserva r[]){
	for (int j=0; j<50;j++) {
	 if (r[j].getNombre()==""){
	 	cout<<"LOS CAMAROTES DISPONIBLES SON: "<<j+1<<endl;
		 }
		 }
}
bool verificar_reservas(Reserva r[],int pos ){
	if (r[pos].getNombre()==""){
		return false;
	}
	return true;
	
}






