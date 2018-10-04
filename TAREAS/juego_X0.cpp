//Programa creado por: Ulises Edgardo Coreas Huezo 
//Carnet: CH18030

// juego del X 0 de dos jugadores

			//librerias utilizadas
#include <iostream> //ingreso y salida de datos
#include <windows.h> //efectos de la consola


using namespace std;

string tabla[3][3]; //Rango de la tabla


void l(){ //limpia la pantalla
	system ("cls");
}

int main() //Cuerpo del programa
{
			// se le agrega color de fondo y a las letras 
	system ("color 81");
	int cl(int clear); //verifica que el campo ingresado sea correcto
	char changeT(char turn); // cariable para el codigo de verificacion si hay ganador
	char ganar(char turn); // variable para el codigo para mostrar el ganador
	bool win = false;  //variable para que el juego no termine hasta que alguien gane
	char turn = 'O';//varuable para el X o 0
	int f;	//variable fila
	int c;	//variable columna
		
	for(int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 3; j++)
		{
			tabla[i][j] = " + ";	
		}		
	}		//saludo
cout<<("BIENVENIDO AL TRES EN RAYA")<<endl;
cout<<("--------------------------")<<endl;
cout<<("Las posiciones empiezan en '0' y acaban en '2'")<<endl;
	
	do //ciclo para que el juego no termine si no hay ganador
	{
			//imprime la tabla con las casillas
	cout << "Columnas	 0	   	 1 		 2 " << endl;
	cout << "	________________________________________________" << endl;
	for(int i = 0; i < 3; i++)
	{
		cout << " 	|  ";
		for(int j = 0; j < 3; j++)
		{
			cout << "	" << tabla[i][j]<< "	";	
		}
		cout << "|  " << i << endl;
		cout << " 	|                                               |" << endl;	
	}
	cout << "	------------------------------------------------  Filas " << endl;
	
		//comando para llamar  al codigo
	turn = changeT(turn);
			//indica de quien es el turno
	cout << "turno del jugador " << turn << ": " << endl;
	
	do // ciclo por si no se cumple la condicion
	{		//peticion de valor
	cout << "Ingrese el numero de la fila ";
	cin >> c;	//asignacion de valor
	c = cl(c);
	}while(c < 0 || c > 2); //verificacion del valor
	
	
	do	// ciclo por si no se cumple la condicion
	{		//peticion de valor
	cout << "Ingrese el numero de la columna ";
	cin >> f;//asignacion de valor
	f = cl(f);
	}while(f < 0 || f > 2);//verificacion del valor
	
	
	//codigos para verificar si esa casilla esta en uso para el jugador X
	if(turn == 'X') 
	{
	for(int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 3; j++)
		{
			if(i == c && j == f)
			{
				if(tabla[i][j] != " + ")
				{
				cout << "Intente otra coordenada" << endl;
				system("pause");
				turn = 'O';
				}
				else
				{
				tabla[i][j] = " X ";
				}
			}	
		}
	}
	}	//codigos para verificar si esa casilla esta en uso para el jugador 0
	else if(turn == 'O')
	{
	for(int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 3; j++)
		{
			if(i == c && j == f)
			{
				if(tabla[i][j] != " + ")
				{
				cout << "Esa casilla ya esta ocupada" << endl;
				system("pause");
				turn = 'X';
				}
				else
				{
				tabla[i][j] = " O ";
				}	
			}	
		}
	}
	}
	
	//ciclo for para la verificacion si hay ganador
for(int i = 0; i < 3; i++)
{
	for(int j = 0; j < 3; j++)
	{
			//proceso de verificacion
	if(tabla[i][0] ==  tabla[i][1] && tabla[i][0] == tabla[i][2] 
		&& tabla[i][0] != " + " && tabla[i][1] != " + " && tabla[i][2] != " + ")
	{
		win = true;
		ganar(turn);
		
	}
	else if(tabla[0][i] ==  tabla[1][i] && tabla[0][i] == tabla[2][i] 
		&& tabla[0][i] != " + " && tabla[1][i] != " + " && tabla[2][i] != " + ")
	{
		win = true;
		ganar(turn);
	}
	
	else if( (tabla[0][0] ==  tabla[1][1] && tabla[0][0] == tabla[2][2] && tabla[0][0] != " + ")
				|| (tabla[0][2] == tabla[1][1] && tabla[0][2] == tabla[2][0] && tabla[0][2] != " + ") )
	{
		win = true;
		ganar(turn);
	}
	
	}

}
l();
			//fin del ciclo
}while(win == false);}		

	
int cl(int clear)
{
	if (cin.fail())
    	{
			cin.clear(); // limpia la variable
        	cin.ignore(); // borra espacios y caracteres
        	cout << "Ingrese un numero valido." << endl;
        	system("pause"); // pausa el programa hasta que el usuario desee
        	clear = -1;
    	}
    return clear;//retorna la variable ya revisada
}


	//verifica si los valores son correctos
char changeT(char turn)
{
	if (turn=='X')
	{turn = 'O';}
	else {turn='X';}
	return turn;
}

		
char ganar(char turn)
{
	l();		//imprime al aganador
		cout << "El jugador " << turn << " gana." << endl;
		//muestra el resoltado por medio de la tabla
	cout<<endl;
cout<<("---------------------------\n");
cout<<" 0  "<<tabla[0][0]<<" |  "<<tabla[0][1]<<" |   "<<tabla[0][2]<<" | "<<endl;
cout<<("---------------------------\n");
cout<<" 1  "<<tabla[1][0]<<" |  "<<tabla[1][1]<<" |   "<<tabla[1][2]<<" | "<<endl;
cout<<("---------------------------\n");
cout<<" 2  "<<tabla[2][0]<<" |  "<<tabla[2][1]<<" |   "<<tabla[2][2]<<" | "<<endl;
	cout<<endl;
		
		//sonido
	Beep(523,300); 
	Beep(659,300); 
	Beep(587,300); 
	Beep(698,300); 
	Beep(784,300); 
	Beep(523,300); 

	system("pause");
return EXIT_SUCCESS;
}




