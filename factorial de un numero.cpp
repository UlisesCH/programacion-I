//Programa creado por: Ulises Edgardo Coreas Huezo 
//Carnet: CH18030

				//librerias obligatorias utilizadas
#include <iostream> //utilizado para operaciones de entrada/salida.
#include <math.h>	//utilizado para procesos matematicos.
#include <windows.h> //utilizado para declarar las funciones de la biblioteca windows API.

				//cuerpo del programa
using namespace std;
				
				//variables utilizadas
int main (int argc, char *argv[])
{
				//variable que representa al numero que se le sacara el factorial
int x;
				//variable que representa el factorial
int fact=1;
				//ciclo para asectar solo numeros mayores que 0
do{
				//peticion del numero que desea sacar factorial
cout<<"Escriba el numero que quiere sacar el factorial: "<<endl;
cin>>x;			//adquiere el valor
				
				//se cierra el ciclo
}while (x < 0);

				//ciclo para acortar el progreso del factoreo
for (int i=1;i<=x;i++)
{
				//proceso
	fact=fact*i;
	
}
				//imprime el resultado
cout <<"El resultado es: "<<fact<<endl;
				
				//detiene y finaliza el programa
system("pause");
return EXIT_SUCCESS;

}

