//Programa creado por: Ulises Edgardo Coreas Huezo 
//Carnet: CH18030

				//librerias obligatorias utilizadas
#include <iostream> //utilizado para operaciones de entrada/salida.

				//cuerpo del programa
using namespace std;

int main ()
{
	
	// PRACTICAS
	
	//PRACTICA 1 declaracion de vector numerico
/*int vector[] = {1,2,3,4,5};

cout<<vector[1];
cout<<vector[4]; 
 */


	//PRACTICA 2 declaracion de vector tipo string
/*string nombres[] = {"juan","David","Carlos"};

cout<<nombres[0]<<endl;
cout<<nombres[1]<<endl;
cout<<nombres[2]<<endl; 
*/


	//PRACTICA 3 declaracion de vector numerico con ciclo for
/*int numeros[] = {1,2,3,4,5,6,7,8,9,10};

for (int i=0; i<10; i++)
{

	cout<<numeros[i]<<endl;
} 
*/


	//PRACTICA 4 declaracion de vector tipo string con ciclo for
/*int numeros[] = {1,2,3,4,5,6,7,8,9,10};

for (int i=9; i>=0; i--)
{

	cout<<numeros[i]<<endl;
} 
*/


	//PRACTICA 5 declaracion de vector numerico con ciclo for y un rango
/*int vector [30];
int nue;

cout<<"Ingrese el numero de datos: ";cin>>nue;

for (int i=0; i<nue; i++)
{
	cout<<"ingrese numero: "; cin>>vector [i];	
}

for (int i=0; i<nue; i++)
{
	cout<<vector[i]<<endl;	
} 
*/

	//PRACTICA 6 promedio usando vectores
//variables utilizadas
int vector [5]; //vector con su rango
int num;	//representa a las notas 
int promedio; //representa el promedio
int suma; //representa a la suma

	//imprime la peticion
cout<<"ingrese el numero de la cantidad de las notas: "<<endl; 

cin>>num; //adquiere valor

	//ciclo para repetir la peticion
for (int i=0; i<num; i++)
{		//imprime la peticion
	cout<<"ingrese numero: "<<endl;
	cin>>vector[i];//adquiere valor
	
	//realiza la operacion
	suma = suma + vector[i];
}
	//ciclo para imprimir cada verctor con su valor
for (int i=4; i>=0; i--)
{
	//imprime el vactor con su valor
	cout<<vector[i]<<endl;	
}
		
	//realiza la operacion 
promedio = (suma/num);

	//imprime el resultado
cout<<"el promedio es: "<<promedio;



return 0;
}

