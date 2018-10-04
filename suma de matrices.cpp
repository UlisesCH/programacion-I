//Programa creado por: Ulises Edgardo Coreas Huezo 
//Carnet: CH18030

				//librerias obligatorias utilizadas
#include <iostream> //utilizado para operaciones de entrada/salida.
#include <math.h>	//utilizado para procesos matematicos.
#include <windows.h> //utilizado para declarar las funciones de la biblioteca windows API.

				//cuerpo del programa
using namespace std;

int main (int argc, char *argv[]){

	int mat [5][5];		//declaramos la matriz 1
	int mat2 [5][5];	//declaramos la matriz 2
	int mat3 [5][5];	//declaramos la matriz 3
	
	//ciclo, contador,termial, incremento 
	for (int fila = 0; fila<5; fila++){ //ciclo for para indicar hasta que espacio de filas llenar
	
		for (int col=0; col<5; col++){ //ciclo for para indicar hasta que espacio de filas llenar
			
			mat [fila][col] = 0;	//asigna valor a todas la matriz 1 el valor de 0
			
			if(fila == 4 || col == 2){  //condicion para asignar valor a la fila 4 y la columna 2
			
			mat2 [fila][2] = 0;		//asigna valor a toda la columna 2
			
			mat2 [4][col] = 0;		//asigna valor a toda la fila 4 
			}

			else{ //condicion para asignar valor a las espacios restantes
				
			mat2[fila][col] = 1; 	//asigna valor a todos los espacios restantes
			}
			
			mat3 [fila][col] = mat [fila][col] + mat2 [fila][col]; //suma las matrices
					
		}
		
	}

			//ciclo para
	for (int fila = 0; fila<5; fila++){ //ciclo for
		for (int col=0; col<5; col++){
			cout<<mat3[fila][col]<<"\t";
		}		
		cout<<endl;
	}
	//detiene y finaliza el programa
system("pause");
return EXIT_SUCCESS;

}
