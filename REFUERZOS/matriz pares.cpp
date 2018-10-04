//Programa creado por: Ulises Edgardo Coreas Huezo 
//Carnet: CH18030

				//librerias obligatorias utilizadas
#include <iostream> //utilizado para operaciones de entrada/salida.
#include <stdlib.h>
#include <time.h>

				//cuerpo del programa
using namespace std;

int main (){

	srand(time(NULL));
	
	//matriz con su rango
	int matriz[3][3];
	
	//ciclo para asignar valor a las filas
	for(int i = 0; i < 3; i++)
	{
			//ciclo para asignar valor a las columnas
			for(int j = 0; j < 4; j++){
			
				//se le asigna un rango a los numeros randoms
				matriz[i][j] = rand()%101;
				
					//condicion para que solo muestre numeros pares
				if( matriz[i][j]%2 == 0){
						//imprime la matriz con su valor
					cout << matriz[i][j] << " ";
				}
				else{	//aparecera en lugar de los impares
					cout<<"*-*"<<" ";
				}
		}	//crea un salto de linea
		cout<<endl;
	}

	//detiene y finaliza el programa
system("pause");
return EXIT_SUCCESS;

}

