//Programa realisado por Ulises Edgarco Coreas Huezo, CH18030.
//Programa de una empresa que se dedica a exportar cafe, para aplicar descuentro si es mayor que 100.
//Librerias utulizadas.
#include <iostream>
#include <math.h>

//Cuerpo del programa.
using namespace std;

int main ()
{
//Declaracion de variables.
int saco;
int dinero;
float descuentocli;
float destotal;
float IVA;

	//Saludo
	cout <<"Hola, bienvenido/a."<<endl;
	//Ingreso
	cout <<"Escriba el total de sacos de cafe exportados mayor que 100: "<<endl;
	cin>>saco; //adquiere valor

if (saco>100)
{
//Se multiplica la cantidad del saco por el presio, para saber el total del dinero
	dinero=(saco*100);
//Se multiplica por el descuento del 10%
	descuentocli=(dinero*0.10);
	destotal=(dinero-descuentocli);
//Se imprime el resultado de descuento
	cout<<"El total con descuento es: "<<destotal<<endl;
//Se multiplica por el descuento del IVA 13%	
	IVA=(destotal*0.13);
//Se imprime el resultado del IVA
	cout<<"El total con descuento del IVA es: "<<IVA<<endl;
//Saludo
	cout <<"Hasta pronto."<<endl;
}

else if (saco>200)
{
//Se multiplica la cantidad del saco por el presio, para saber el total del dinero
	dinero=(saco*100);
//Se multiplica por el descuento del 15%
	descuentocli=(dinero*0.15);
	destotal=(dinero-descuentocli);
//Se imprime el resultado de descuento
	cout<<"El total con descuento es: "<<destotal<<endl;
//Se multiplica por el descuento del IVA 13%	
	IVA=(destotal*0.13);
//Se imprime el resultado del IVA
	cout<<"El total con descuento del IVA es: "<<IVA<<endl;
//Saludo	
	cout <<"Hasta pronto."<<endl;
}

else if (saco>250 && saco<300)
{
//Se multiplica la cantidad del saco por el presio, para saber el total del dinero
	dinero=(saco*100);
//Se multiplica por el descuento del 20%
	descuentocli=(dinero*0.20);
	destotal=(dinero-descuentocli);
//Se imprime el resultado de descuento
	cout<<"El total con descuento es: "<<destotal<<endl;
//Se multiplica por el descuento del IVA 13%	
	IVA=(destotal*0.13);
//Se imprime el resultado del IVA
	cout<<"El total con descuento del IVA es: "<<IVA<<endl;
//Saludo
	cout <<"Hasta pronto."<<endl;
}

else if (saco>=300)
{
//Se multiplica la cantidad del saco por el presio, para saber el total del dinero
	dinero=(saco*100);
//Se multiplica por el descuento del 25%
	descuentocli=(dinero*0.25);
	destotal=(dinero-descuentocli);
//Se imprime el resultado de descuento
	cout<<"El total con descuento es: "<<destotal<<endl;
//Se multiplica por el descuento del IVA 13%	
	IVA=(destotal*0.13);
//Se imprime el resultado del IVA
	cout<<"El total con descuento del IVA es: "<<IVA<<endl;
//Saludo
	cout <<"Hasta pronto."<<endl;
}
else
{

//Saludo
 cout <<"Vuelva cuando la exportacion sea mayor que 100, hasta pronto."<<endl;
}
return 0;
}

