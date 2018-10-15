#include <iostream>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
class Mamifero
{
private:
int altura;
string tipo;
string sexo;
float peso;
public:
	Mamifero(int,string,string,float);
	Mamifero();
void setaltura(int);	
int getaltura(void);
void settipo(string);
string gettipo(void);
void setsexo(string);
string getsexo(void);
void setpeso(float);
float getpeso(void);
void comer(float);
void correr(float);
void crecer(int);
void nacer(int,string,string,float);
};
class Alado
{
private:
int altura;
int distancia;	
string sexo;
float peso;

public:	
   Alado(int,int,string,float);
   Alado();
void setaltura(int);	
int getaltura(void);
void setdistancia(int);
int getdistancia(void);
void setsexo(string);
string getsexo(void);
void setpeso(float);
float getpeso(void);  
void volar(int);
void comer(float);
void nacer (int,string,float);
void crecer(int);
};
class Acuatico
{
private:
int altura;
string sexo;
int profundidad;
float peso;
public:
	Acuatico(int,string,int,float);
	Acuatico();
void setaltura(int);	
int getaltura(void);
void setprofundidad(int);
int getprofundidad(void);
void setsexo(string);
string getsexo(void);
void setpeso(float);
float getpeso(void);	
void nadar(int);
void comer(float);
void crecer(int);
void nacer(int,string,float);	
	
};
class Murcielago : public Alado, public Mamifero
{
	public:
 Murcielago(int,int,string,float,string);	
 void comer();
void correr();
void crecer();
void nacer();
void volar();
};
class Ornitorrinco : public Mamifero, public Acuatico
{
	public:
 Ornitorrinco(int,string,string,float,int);	
 void comer();
void correr();
void crecer();
void nacer();
void nadar();
};
class Manati : public Acuatico, public Mamifero
{
	public:
 Manati(int,string,int,float,string);
  void comer();
void correr();
void crecer();
void nacer();
void nadar();	
};
Mamifero::Mamifero(){	
}
Mamifero::Mamifero(int _altura,string _tipo,string _sexo,float _peso){
	altura = _altura;
	tipo = _tipo;
	sexo = _sexo;
	peso = _peso;
}

Alado::Alado(){	
}
Alado::Alado(int _altura,int _distancia,string _sexo,float _peso){
    altura = _altura;
	distancia = _distancia;
	sexo = _sexo;
	peso = _peso;	
}
Acuatico::Acuatico(){	
}
Acuatico::Acuatico(int _altura,string _sexo,int _profundidad,float _peso){
	altura = _altura;
	profundidad = _profundidad;
	sexo = _sexo;
	peso = _peso;
}
Ornitorrinco::Ornitorrinco(int a,string t,string s,float p,int pr) : Mamifero(a,t,s,p), Acuatico(a,s,pr,p){
	
}
Murcielago::Murcielago(int a,int d,string s,float p,string t) : Alado(a,d,s,p), Mamifero(a,t,s,p){
	
}
Manati::Manati(int a, string s,int p,float w,string t) : Acuatico( a,s,p,w), Mamifero(a,t,s,w){
}


int main(int argc, char** argv) {
	
	return 0;

}
void Mamifero::comer(float j){
	peso = peso+j;
	cout<<"El animal esta comiendo"<<endl;
}
void Mamifero::correr(float c){
	peso = peso-c;
	cout<<"El animal esta corriendo"<<endl;
	
}
void Mamifero::crecer(int a){
	altura = altura+a;
	cout<<"El animal ha crecido "<<a<<" centimetros"<<endl;
}
void Mamifero::nacer(int a,string b,string c,float d){
	altura = a;
	tipo = b;
	sexo = c;
	peso = d;
}
int Mamifero::getaltura(){
	return altura ;
}
string Mamifero::gettipo(){
	return tipo;
}
string Mamifero::getsexo(){
	return sexo;
}
float Mamifero::getpeso(){
	return peso;
}
void Mamifero::setaltura(int _altura){
	altura = _altura;
}
void Mamifero::settipo(string _tipo){
	tipo = _tipo;
}
void Mamifero::setsexo(string _sexo){
	sexo = _sexo;
}
void Mamifero::setpeso(float _peso){
	peso = _peso;
}
void Alado::crecer(int a){
	altura = altura+a;
}
void Alado::comer(float c){
	peso = peso+c;
}
void Alado::volar(int d){
	distancia = distancia+d;
}
void Alado::nacer(int a,string c,float d){
	altura = a;
	distancia = 0;
	sexo = c;
	peso = d;
}
int Alado::getaltura(){
	return altura;
}
int Alado::getdistancia(){
	return distancia;
}
string Alado::getsexo(){
	return sexo;
}
float Alado::getpeso(){
	return peso;
}
void Alado::setaltura(int _altura){
	altura = _altura;
}
void Alado::setdistancia(int _distancia){
	distancia = _distancia;
}
void Alado::setsexo(string _sexo){
	sexo = _sexo;
}
void Alado::setpeso(float _peso){
	peso = _peso;
}
void Acuatico::comer(float c){
	peso = peso+c;
	cout<<"El animal esta comiendo"<<endl;
}
void Acuatico::nadar(int p){
	profundidad = profundidad+p;
	cout<<"El animal esta nadando"<<endl;
}
void Acuatico::crecer(int a){
	altura = altura+a;
	cout<<" El animal crecio "<<a<<" centimetros "<<endl;
}
void Acuatico::nacer(int a,string b,float d){
	altura = a;
	sexo = b;
	profundidad = 0;
	peso = d;
}
int Acuatico::getaltura(){
	return altura;
}
int Acuatico::getprofundidad(){
	return profundidad;
}
string Acuatico::getsexo(){
	return sexo;
}
float Acuatico::getpeso(){
	return peso;
}
void Acuatico::setaltura(int _altura){
	altura = _altura;
}
void Acuatico::setprofundidad(int _profundidad){
	profundidad = _profundidad;
}
void Acuatico::setsexo(string _sexo){
	sexo = _sexo;
}
void Acuatico::setpeso(float _peso){
	peso = _peso;
}
void Murcielago::comer(){
	cout<<"El murcielago esta comiendo";
}
void Murcielago::nacer(){
	cout<<"El murcielago nacio";
}
void Murcielago::volar(){
	cout<<"El murcielago esta volando";
}
void Murcielago::crecer(){
	cout<<"El murcielago ha crecido";
}
void Ornitorrinco::comer(){
	cout<<"El Ornitorrinco esta comiendo";
}
void Ornitorrinco::nadar(){
	cout<<"El Ornitorrinco esta nadando";
}
void Ornitorrinco::correr(){
	cout<<"El Ornitorrinco esta corriendo";
}
void Ornitorrinco::nacer(){
	cout<<"El Ornitorrinco ha nacido";
}
void Ornitorrinco::crecer(){
	cout<<"El Ornitorrinco ha crecido";
}
void Manati::comer(){
	cout<<"El Manati esta comiendo";
}
void Manati::nacer(){
	cout<<"El Manati ha nacido";
}
void Manati::nadar(){
	cout<<"El Manati esta nadando";
}
void Manati::crecer(){
	cout<<"El Manati esta creciendo";
}

