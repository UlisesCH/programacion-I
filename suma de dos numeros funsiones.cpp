//Programa creado por: Ulises Edgardo Coreas Huezo 
//Carnet: CH18030

				//librerias obligatorias utilizadas
#include <cstdlib> //utilizado para operaciones de entrada/salida.
#include <iostream> //utilizado para operaciones de entrada/salida.
#include <math.h>	//utilizado para procesos matematicos.

				//cuerpo del programa
using namespace std;

void pedirNumeros(); /*sin importar donde esta la funcion 
					no dara problema de compilacion*/

float sumar (float x, float y)
{
	//imprime la posicion de la memoria en que se encuentran
	cout << "x = "<< &x << endl;
	cout << "y = "<< &y << endl;
	
	return x+y;
}

void pedirNumeros()
{	//variables utilizadas
	float x; //representa al primer valor
	float y; //representa al segundo valor
	float res;	//representa la respuesta
	
	//imprime la peticion
	cout<<"Ingrese un numero"<<endl;
	cin >> x; //adquiere el valor
	
	//imprime la peticion
	cout<<"Ingrese un numero"<<endl;
	cin >> y;//adquiere el valor
	
	//realiza la operacion de la suma
	res=sumar(&x,&y);
	
	
	//imprime la posicion de la memoria en que se encuentran
	cout << "x = "<< &x << endl;
	cout << "y = "<< &y << endl;
	
	//imprime el resultado
	cout<<"El resultado es: "<<res<<endl;
	
}

int main (){

		//detiene y finaliza el programa
system("pause");
return EXIT_SUCCESS;


}

