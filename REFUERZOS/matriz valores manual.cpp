//Programa creado por: Ulises Edgardo Coreas Huezo 
//Carnet: CH18030

				//librerias obligatorias utilizadas
#include <iostream> //utilizado para operaciones de entrada/salida.
#include <stdlib.h>
#include <time.h>

				//cuerpo del programa
using namespace std;

int main (){

	
	//matriz con su rango
	int matriz[3][3];
	
	//ciclo para asignar valor a las filas
	for(int i = 0; i < 3; i++)
	{
			//ciclo para asignar valor a las columnas
			for(int j = 0; j < 4; j++){
				
				//imprime la peticion
				cout<<"ingrese valor in-par: ";
				cin>>matriz[i][j]; //adquiere valor
				
					//condicion para imprimir imprimir solo inpares
				if( matriz[i][j]%2 > 0){
					//crea un espcio entre las matrices
					cout << matriz[i][j] << " "<<endl;
				}
		}
		//crea un salto de linea
		cout<<endl;
	}

	//detiene y finaliza el programa
system("pause");
return EXIT_SUCCESS;

}
