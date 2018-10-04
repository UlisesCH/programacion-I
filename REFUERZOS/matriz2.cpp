//Programa creado por: Ulises Edgardo Coreas Huezo 
//Carnet: CH18030

				//librerias obligatorias utilizadas
#include <iostream> //utilizado para operaciones de entrada/salida.
#include <math.h>	//utilizado para procesos matematicos.
#include <windows.h> //utilizado para declarar las funciones de la biblioteca windows API.

				//cuerpo del programa
using namespace std;

int main (int argc, char *argv[]){

//matriz con su rango	//numeros que apareceran en la matriz
	int matriz[2][3] = {{1,2,3},{4,5,6}};
	
	//ciclo para asignar valor a las filas
	for (int i=0; i<2; i++){
		
		//ciclo para asignar valor a las columnas
		for (int j=0; j<3; j++){
		
			//imprime las casillas
			cout<<matriz[i][j]<<"";
			
		}
		//crea un salto de linea
		cout<<""<<endl;
	}
		
	//detiene y finaliza el programa
system("pause");
return EXIT_SUCCESS;

}

