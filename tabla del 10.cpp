//Programa creado por: Ulises Edgardo Coreas Huezo 
//Carnet: CH18030

				//librerias obligatorias utilizadas
#include <iostream> //utilizado para operaciones de entrada/salida.
#include <math.h>	//utilizado para procesos matematicos.
#include <windows.h>

				//cuerpo del programa
using namespace std;

int main (int argc, char *argv[])
{
	//variables utilizadas
int i=10;	//representa al numero 10
int j;

		//imprime el enunciado
cout<<("La tabla del 10 es ")<<endl;

	//ciclo para que aumente el numero con el que se multiplicara 	
for (int j=1;j<=10;j++)
{				
		//imprime el proceso y el resultado
cout<<i<<"x"<<j<<"="<<i*j<<endl;

 }

		//detiene y finaliza el programa
system("pause");
return EXIT_SUCCESS;

}

