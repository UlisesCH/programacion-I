//Programa creado por: Ulises Edgardo Coreas Huezo 
//Carnet: CH18030

				//librerias obligatorias utilizadas
#include <iostream> //utilizado para operaciones de entrada/salida.
#include <stdlib.h>
#include <time.h>

				//cuerpo del programa
using namespace std;

int main (){

		//comando para usar la funcion ramdons
	srand(time(NULL));
		//matriz con su rango
	float matriz[2][2];
		//representa a la suma
	float suma = 0;
		//representa al promedio
	float promedio;

		//ciclo para dar valor a las filas
		for(int i = 0; i < 2; i++)
	{		//ciclo para dar valor a las columnas
			for(int j = 0; j < 2; j++){
					
					//se le asigna un rango a los numeros randoms
				matriz[i][j] = rand()%101;
				//imprime la matriz con sus valores
				cout<<matriz[i][j]<<" ";
					//realiza la suma de las matricez
					suma = suma + matriz[i][j];
			}	//realidza un saltao de linea
			cout<<endl;

	}
		//realiza la operacion para el promedio
	promedio = suma / 4;
		
		//imprime el resultado
	cout<<"La suma de los valores es: "<<suma<<endl;
	cout<<"El promedio de los valores es: "<<promedio<<endl;

	//detiene y termina el programa
system("pause");
return EXIT_SUCCESS;

}
