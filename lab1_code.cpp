/* Practica de Laboratorio 1
*  Informatica 2 - 2018_2
*  Prof: Juan Camilo Correa Chica
*  Fecha: Agosto 6/2018
*  Plazo m√°ximo para enviar enlace para clonar el repositorio: Agosto 6/2018 - 09:59pm
*  Estudiante1: Yeiner David P·jaro Otero.
*  Estudiante2: Diego Alejandro Morales MuÒoz.
*  Fecha del ultimo Commit en GitHub: Agregue la fecha y hora del ultimo Commit (aproximada)
*

*  Primera parte: 
*
*  Ejercicio 1: Cree una cuenta en GitHub, que va a utilizar por el resto del curso para presentar
*               sus trabajos de laboratotio de informatica 2. Si lo prefiere tambien descargue una 
*				aplicacion de escritorio para administrar sus repositorios. Una vez creada su cuenta		
*				cree un repositorio llamado Lab1 y agreguele un README file con una descripcion adecuada.
*
*
*  Ejercicio 2: Clone este archivo del GitHub de camilocorreaUdeA y agreguelo al branch "master" de 
*				su repositorio Lab1, a partir de alli trabajara en el siguiente ejercicio.
*
*
*  Ejercicio 3: Dise√±e una estructura llamada "Calendario", que solo contiene un campo de bits de tipo 
*				unsigned short int para los componentes de la fecha: anio, mes y dia.
*				Dise√±e una funcion llamada "checkDate" que reciba como parametro una estructura "Calendario"
*				esa funcion debe ser capaz de verificar cualquier error en la fecha que este guardada en la
*				estructura que le entra como parametro, es decir, debe verificar que el dia no sea mayor a 31
*				a 30, a 29 o 28 segun el mes, ni menor que 1. Que el mes no sea mayor a 12 ni menor que 1. El
*				anio es un numero entre 0 y 127, el anio 0 corresponde a 1990, luego el anio 2018 por ejemplo
*               corresponderia al anio 28. Tambien debe verificar si el anio es bisiesto, en ese caso Febrero
*               puede tener 29 dias (enlace sugerido: http://www.disfrutalasmatematicas.com/medida/anos-bisiestos.html)
*				La funcion debe retornar un valor booleano que indique si la fecha ingresada esta bien o mal.
*/

#include <iostream>

using namespace std;

//Aqui se declaran las variables globales

//Aqui se declaran los prototipos de las funciones
bool verifica_date(unsigned short int dia, unsigned short int mes , unsigned short int year){
	if(year <0 or year >127){
		return false;
	}
	else{
	if(mes <0 or mes   >12 ){
	return false;
	}else{ 
	if( (mes==1 or mes==3 or mes==5 or mes==7 or mes==8 or mes==10 or mes==12) and (dia>0 and dia < 32) ){
		return true;
	}
	else{
		if((mes==11 or mes==4 or mes==6 or mes==9 ) and (dia>0 and dia <31)){
			return true;
		}
		else{
			if(((year %4 ==0 or year % 400==0) and mes==2 and (dia>0 and dia<30)) or( mes==2 and (dia>0 and dia <29))){
			return true;
			}
			else{
				return false;
			}
			
		}
	}
	}
}
	
return false;
}

int main()
{
	//Esta funcion es la mas importante del programa
	//En esta funcion se deben invocar las funciones que 
	//usted codifique en C++
	unsigned short int dia, mes, year;
	//Declarando una variable localecon
	cout<<"ingrese dia"<<endl;
	cin>> dia;
	cout<<"ingrese mes "<<endl;
	cin>>mes;
	cout<<"ingrese anio"<<endl;
	cin>>year;
		bool verifica_fecha = verifica_date(dia,mes,year);
	//Aqui puede invocar su funcion
	
	if(verifica_fecha){
		cout<<"Fecha sin problemas!"<<endl;
	}
	else{
		cout<<"Fecha presenta errores!"<<endl;
}
	return 0;
}


