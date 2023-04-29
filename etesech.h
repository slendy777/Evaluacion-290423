//declaramos la libreria predeterminada
#include <iostream>


//declaramos una constante de pi
#define PI 3.1416

//definimos nuestro espacio de nombres
using namespace std;

/*vamos a declarar una primer funcion que nos servira para calcular el area de un circulo pasando
un parametro*/

//el parametro que pasaremos es el radio y este lo nombraremos R

float area_circulo(float R){
//definimos la formula para calcular el area de un circulo A= Radio * Radio * PI 

return PI*R*R;

}
/*vamos a declara una funcion para calcular el area de un cuadrado, donde pasaremos 
como parametro cada lado y lo nombraremos L*/	
	
float area_cuadrado(float L){
	//definimos la formula para calcular el area de un cuadrado A= L * L
	return L*L; 
}	

float area_triangulo(float b, float h ){
	//definimos la formula para el area de un triangulo a= b * h / 2
	return (b * h)/2; 
}	
	
float area_rectangulo(float z, float a){
	//definimos la formula 
	
	return z*a;
}	
float area_rombo(float D, float d){
	//definimos la formula 
	return (D*d)/2;
}
		
	
