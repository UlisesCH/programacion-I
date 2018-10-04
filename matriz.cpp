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
	int x[4][4] = {0};
	
			//ciclo para indicar hasta que espacio llenar
		for(int i=0; i<=3; i++)
	{
		x[i][1]=3; //asigna valor a toda la columna 1
		
		if(i==3){	//condicion para llenar los de mas espcacios
				x[3][2]=3;
				x[3][3]=3;			
		}
	
	}
			//ciclo para indicar hasta que espacio de filas llenar
	for(int i=0; i<=3; i++)
	{			
			//ciclo para indicar hasta que espacio de filas llenar
		for(int j=0; j<=3; j++)
		{
				//imprime todas las columnas y las filas
			cout<<x[i][j];
	
		}		//creo un salto de linea
		cout <<endl;
	}
	
		//detiene y finaliza el programa
system("pause");
return EXIT_SUCCESS;

}
