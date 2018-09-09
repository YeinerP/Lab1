#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int func1 (int);
int func2 (int);
int func3 (int);
int func4 (int);

int main(int argc, char** argv) {
	int (*pf1[4]) (int);
	int opc;
	opc=0;
	int num;
	int valores;
	
	pf1[0]= func1;
	pf1[1]= func2;
	pf1[2]= func3;
	pf1[3]= func4;
	
do   {
	cout<<"Tengo 2 # enteros a=6 y b=3, elija la operacion deseada"<<endl;
	cout<<"1. SUMA"<<endl;
	cout<<"2. RESTA"<<endl;
	cout<<"3. MULTIPLICACION"<<endl;
	cout<<"4. DIVISION"<<endl;
	cout<<" A CONTINUACION SELECCIONE UNA OPERACION"<<endl;
	cout<<" INGRESE LA OPCION DESEADA "<<endl;
	cin>>opc;	
int resultado =	pf1[opc-1](1);
cout<<resultado<<endl;
	}while (opc!=4);
	
	


	return 0;
	
}
int func1(int n1){
	return 9;
}
int func2(int n1){
	return 3;
}
int func3(int n1){
	return 18;
}
int func4(int n1){
	return 2;
}
	

