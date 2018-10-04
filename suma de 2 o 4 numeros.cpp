//Programa creado por: Ulises Edgardo Coreas Huezo 
//Carnet: CH18030

				//librerias obligatorias utilizadas
#include <iostream> //utilizado para operaciones de entrada/salida.
#include <math.h>	//utilizado para procesos matematicos.
#include <windows.h> //utilizado para declarar las funciones de la biblioteca windows API.

				//cuerpo del programa
using namespace std;
void l(){ //declaracion de la funcion no retorna/no recibe parametros

	system ("cls"); //limpia pantalla
}

int main ()
{	int n=1; //contador
	int vn; //su valor cambiara de 2 a 4
	int suma=0; //acumulador
	int aux; // intercambio de valores

do {	//ciclo para no aceptar numeros fuera del rango

 	l(); //implimentacion de la funcion l
 	
 		//imprime la peticion
cout << "cuantos numeros quiere sumar [2-4]: ";
cin>>vn; //adquiere valor

}while (vn<2 || vn>4); //fin del ciclo 

//ciclo de verificacion
while(n<=vn) {
	l(); //implimentacion de la funcion l
	
		//imprime la peticion
	cout << "Ingrese el numero "<<n<<endl;
	cin>>aux; //adquiere valor
	
			//realiza la operacion
	suma=suma+aux;
	
	n++; //cierre  del ciclo
	
}
 l();//implimentacion de la funcion l
 
 	//imprime el resultado
cout << "La suma es de: "<<suma<<endl;

system("pause"); //detiene el programa


void l(); { //implimentacion de la funcion l
	system ("cls");
	cout<<"-----------------"<<endl;
	cout<<"-----------------"<<endl;
}
 
		//detiene y finaliza el programa
system("pause");
return EXIT_SUCCESS;
}


