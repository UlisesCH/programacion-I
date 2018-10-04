//Programa creado por: Ulises Edgardo Coreas Huezo 
//Carnet: CH18030

				//librerias obligatorias utilizadas
#include <iostream> //utilizado para operaciones de entrada/salida.
#include <math.h>	//utilizado para procesos matematicos.
#include <windows.h> //utilizado para declarar las funciones de la biblioteca windows API.

				//cuerpo del programa
using namespace std;

int main (int argc, char *argv[])
{

	//ciclo para que los numeros amenten del 1 al 10
for (int i=1;i<=10;i++)
{				
	//imprime la tabla que se esta realizando
cout<<endl<<("LA TABLA DEL ")<<i<<endl;

	//ciclo para que los numeros amenten del 1 al 10
for (int j=1;j<=10;j++)

	//imprime la operacion y el resultado de la tabla
cout<<i<<"x"<<j<<"="<<i*j<<endl;

 }

		//detiene y finaliza el programa
system("pause");
return EXIT_SUCCESS;

}

