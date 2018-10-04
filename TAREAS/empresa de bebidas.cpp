

/*programa para calcular la produccion diaria de bebidas y los insumos requeridos 
para la elaboracion de refrescos de acuerdo a la siguiente tabla.

          Agua.               Azucar

Soda.    500ml.                  800g

Jugo.    600ml.                  700g */


				//librerias obligatorias utilizadas
#include <iostream> //utilizado para operaciones de entrada/salida.
#include <math.h>	//utilizado para procesos matematicos.
#include <windows.h> //utilizado para declarar las funciones de la biblioteca windows API.

				//cuerpo del programa
using namespace std;
				//funcion para usar l(); en vez del system("cls"); cunado queramos limpiar pantalla
void l()
{				//funcion para limpiar pantalla
	system("cls");
}
				//funcion para que no acepte letras o 0 cuando pide las veces que llamo
int cl(int clear);
	
				//variables utilizadas
int main (){	
				//representa de la cantidad de soda
int ns;
				//representa la cantidad de jugo
int nj;
				//representa la cantidad de agua que se ocupa para una soda
int aguas = 500;
				//representa la cantidad de agua que se ocupa para un jugo
int aguaj = 600;
				//representa la cantidad de azucar que se ocupa para una soda
int azucs = 800;
				//representa la cantidad de azucar que se ocupa para un jugo
int azucj = 700;
				//representa el total de agua que se ocupo
int aguat;
				//representa el total de azucar que se ocupo
int azucart;

				//saludo
	cout<<"Hola bienvenido/a."<<endl;

				//inicio del ciclo do while
do {

				//llamando la funcion para limpiar pantalla
l();
				//pidiendo valor
cout << "Ingrese cuanto se vendio de soda: ";
cin>>ns;		//asignando valor
cl(ns);			//se llama la funcion para no aceptar letras o 0

}while (ns <= 0);

				//inicio del ciclo do while
do {
				//llamando la funcion para limpiar pantalla
l();
				//pidiendo valor
cout << "Ingrese cuanto se vendio de jugo: ";
cin>>nj;		//asignando valor
cl(nj);			//se llama la funcion para no aceptar letras o 0
 
}while (nj <= 0); //fin del ciclo do while
		//asignando valor a las variables
		
				//asignando valor a cantidad de agua utilizada para la soda
aguas = aguas * ns;
				//asignando valor a cantidad de agua utilizada para el jugo
aguaj = aguaj * nj;
				//asignando valor a cantidad de azucar utilizada para la soda
azucs = azucs * ns; 
				//asignando valor a cantidad de azucar utilizada para el jugo
azucj = azucj * nj;

				//operacion para saber cunta agua se utilizo en total
aguat = (aguas+aguaj);
				//operacion para saber cunta azucar se utilizo en total
azucart = (azucs+azucj);

				//llamando la funcion para limpiar pantalla
	l();
	
					//imprime una oracion
cout << "La cantidad que ocupo para la soda es de: "<<endl;

					//imprime la cantidad de agua utlizada para la soda
cout << "Cantidad de agua: "<<aguas<<"ml"<<endl;

					//imprime la cantidad de azucar utlizada para la soda
cout << "Cantidad de azucar: "<<azucs<<"g"<<endl<<endl;

					//imprime una oracion
cout << "La cantidad que ocupo para el jugo es de: "<<endl;

					//imprime la cantidad de agua utlizada para el jugo
cout << "Cantidad de agua:: "<<aguaj<<"ml"<<endl;

					//imprime la cantidad de azucar utlizada para el jugo
cout << "Cantidad de azucar: "<<azucj<<"g"<<endl<<endl;

					//imprime el total de agua utlizada
cout << "El total de agua que se ocupo es de: "<<aguat<<endl;

					//imprime el total de azucar utlizada
cout << "En total de azucar que se ocupo es de: "<<azucart<<endl;

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
				//returna a una variable para realizar un ciclo
	return clear;
}

