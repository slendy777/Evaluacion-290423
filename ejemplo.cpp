//incluir librerias
#include<iostream>
#include<etesech.h>

using namespace std;

//calcular el area de un circulo 
int main(){
	int opcion=0; 
	cout<<"ingrese la opción que desea ejecutar, 1Radio, 2Cuadrado:  ";	

//definimos un espacio para que el usuario ingrese su respuesta 

cin>> opcion;
	switch(opcion){
	 
	//variables
	case 1: 	
	float radio; 
	cout<<"Ingrese el radio: ";
	cin>>radio;
	cout<<"El area del circulo es: "<<area_circulo(radio)<<endl;
	
	break;
	
	case 2:
	float cuadrado; 
	cout<<"Ingrese el area del cuadrado: ";
	cin>>cuadrado;
	cout<<"El area del cuadrado es: "<<area_cuadrado(cuadrado)<<endl;
	break;

}

}