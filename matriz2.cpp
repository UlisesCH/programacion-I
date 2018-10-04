//Programa creado por: Ulises Edgardo Coreas Huezo 
//Carnet: CH18030

				//librerias obligatorias utilizadas
#include <iostream> //utilizado para operaciones de entrada/salida.
#include <math.h>	//utilizado para procesos matematicos.
#include <windows.h> //utilizado para declarar las funciones de la biblioteca windows API.

				//cuerpo del programa
using namespace std;

int main (int argc, char *argv[]){
	
	//matriz y su rango de 4 x 4
	char x[4][4];
	
			//ciclo para indicar hasta que espacio de filas llenar
	for(int i=0; i<=2; i++)
	{		
			//ciclo para indicar hasta que espacio de filas llenar
		for(int j=2; j>=0; j--)
		{
					//asigna a todas las columnas y las filas el valor de x
			x[i][j]='x';
	
		}
	}
			//ciclo para indicar hasta que espacio llenar
		for(int i=0; i<=3; i++)
	{
			//asigna a todas las columnas y las filas el valor de 3
		x[i][1]=3;
		
		//condicion para llenar los de mas espcacios
		if(i=3){
				x[3][2]=3;
				x[3][3]=3;			
		}	
	}
		
		//detiene y finaliza el programa
system("pause");
return EXIT_SUCCESS;

}


