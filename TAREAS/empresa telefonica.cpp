//Programa creado por: Ulises Edgardo Coreas Huezo 
//Carnet: CH18030

/*programa para calcular el total a pagar por cada cliente segun la siguiente tabla

	   1-10  min  =  $0.05
	   11-15 min  =  $0.08
Mas de 15 minutos = $0.10 */

				//librerias obligatorias utilizadas
#include <iostream> //utilizado para operaciones de entrada/salida.
#include <math.h>	//utilizado para procesos matematicos.
#include <windows.h> //utilizado para declarar las funciones de la biblioteca windows API.

				//cuerpo del programa
using namespace std;
				//funcion para usar l(); en vez del system("cls"); cuando queramos limpiar pantalla
void l()
{				//funcion para limpiar pantalla
	system("cls");
}
				//funcion para que no acepte letras o 0 cuando pide las veces que llamo
int cl(int clear);
	
				//variables utilizadas
int main (){
				//representa el numero de llamada
int n;
				//representa el los minutos que duro la llamada
int cm;
				//representa las veces que se llamo
float nll;
				//representa el presio de la llamada
float m;
				//repesenta la opéracion que suma el precio de cada llamada 
float suma;

				//saludo
	cout<<"Hola bienvenido/a."<<endl;

				//inicio del ciclo do while
do {
				//pidiendo valor
cout << "Ingrese cuantas veces llamo: "<<endl;
cin>>nll;		//asignando valor
cl(nll);		//se llama la funcion para no aceptar letras o 0

}while (nll <= 0); //fin del ciclo do while

				//inicio de ciclo for
for (n = 1; n <= nll; n++ ) {
	
				//llamando la funcion para limpiar pantalla
	l();
				//pidiendo valor
	cout << "Cuantos minutos duro su llamada numero: "<<n<<endl;	
	cin>>cm;	//asignando valor
	
				//inicio de las condicones para saber cuanto pagara
		//primera condicion
if (cm >= 1 && cm <= 10){
				//asignando valor
	m = (0.05);
}
		//segunda condicion
else if (cm >= 11 && cm <= 15){
				//asignando valor
		m = (0.09);
}
		//tercera condicion
else{
				//asignando valor
	m = (0.10);
}
				//operacion que suma el precio de cada llamada realizada
	suma = (suma + m);
}

				//imprime el total a pagar
cout << "Su total a pagar es de: $"<<suma<<endl;

				//comando para detener el programa
system("pause");
return EXIT_SUCCESS; //comando para salir del programa
}

		//cuerpo de la funcion para que no acepte letras o 0 cuando pide las veces que llamo
int cl(int clear)
{			//condicion para saber si es letra o 0
	if(cin.fail()||clear<=0)
	{			//operacion para cumplir la funcion
		cin.clear();
		cin.ignore();
				//imprime una peticvion
		cout<<"Ingrese un numero por favor"<<endl;
				//comando para detener el programa
		system ("pause");
	}
	return clear;
}

