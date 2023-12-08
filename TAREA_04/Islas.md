# Islas

## Portada
Ensayo
* Alumno : Soria Arias Nora Helena
* Materia: Inteligencia Artificial
* Maestro: Alcaráz Chavéz Jesús Eduardo
* Fecha  : 07 de Diciembre del 2023

# Introducción
El presente documento muestra la solución para el problema de lógica matemática planteado en la sección *Descripción del problema*  y tiene como propósito mostrar la respuesta alcanzada a dicho problema. En la sección 
*Descripción de la solución* se muestra como alcanzar el exito en este programa, mientras que en *Código recursivo* se aprecia el código resultante de la solución. Se termina con *Código iterativo* que muestra el mismo código pero sin recursividad y *Conclusiones*.

# Descripción del problema
Se trata de contar el numero de elementos (islas) contenidos en la siguiente imagen, se requiere lo siguiente.

• Hacer un programa que pueda contar el numero de elementos que son
del mismo color

• Utilizar método iterativo y recursivo.
Mapa:
|.|.|.|.|.|.|.|.|.|.|.|.|.|.|
|-|-|-|-|-|-|-|-|-|-|-|-|-|-|
|||||||||||||||
|||||||||||||||
||*|*||||||||||||
||*|*|||||*|*|*|*||||
||*|*||||||||||||
|||||||||||||||
|||||||||||||||
|||||||||||||||
||||||||||*|*||||
||||||*|*|||*|*||||
||||||*|*|||*|*||*||
||||||*|*|||*|*||*||
||||||*|*|||*|*||*||
|||||||||||||*||
|||||||||||||*||
|||||||||||||*||
|||||||||||||*||
|||*|*|*|*|||||||*||

# Descripción de la solución


Este problema se soluciona de la siguiente manera en programación. Se crea una matriz numerica de 18x14 celdas y se rellena con números 1 en los espacios que se consideran que son las islas. 
Una vez que se tiene el mapa, se evalua con el siguiente algoritmo
1. Si la celda es un 0 no hay que hacer nada
2. Si la celda es un 1, transformalo en 2
3. Revisa todas las celdas adyacentes al 2, si encuentras un 1 se transforma en 3
4. Revisa todas las celdas adyancentes al 3, si encuentras un 1 se transforma en 3
5. Al finalizar, cuenta cuantos 2´s hay en la matriz, es la cantidad de islas que existen.

El programa se encuentra escrito en lenguaje C++. El programa siempre empieza con la creación del mapa y la definición de la cantidad de filas y columnas necesarias. Después se recorre el mapa y es cuando una serie de condiciones *(Sentencias if)* se activan y definen que ocurrirá con la celda.

# Simbología del mapa:

0 	- > Mar o agua, no se revisa.
1 	- > Isla sin analizar.
2 	- > Primer elemento de la isla, también se entiende como bandera de isla. Sólo hay 1 por isla.
3	- > Elemento de la isla

# Código recursivo

> #include <stdio.h>
> #include <iostream>
> using namespace std;

>
>//Esta funcion rellena el vector mar  con una matriz mapa
>//Porque mar no se puede rellenar de esta manera ya que es un vector de vectores
>void mapeado(int **mar, int filas, int cols){
>	int mapa[18][14] ={
			{0,0,0,0,0,0,0,0,0,0,0,0,0,0},
			{0,0,0,0,0,0,0,0,0,0,0,0,0,0},
			{0,1,1,0,0,0,0,0,0,0,0,0,0,0},
			{0,1,1,0,0,0,0,1,1,1,1,0,0,0},
			{0,1,1,0,0,0,0,0,0,0,0,0,0,0},
			{0,0,0,0,0,0,0,0,0,0,0,0,0,0},
			{0,0,0,0,0,0,0,0,0,0,0,0,0,0},
			{0,0,0,0,0,0,0,0,0,0,0,0,0,0},
			{0,0,0,0,0,0,0,0,0,1,1,0,0,0},
			{0,0,0,0,0,1,1,0,0,1,1,0,0,0},
			{0,0,0,0,0,1,1,0,0,1,1,0,1,0},
			{0,0,0,0,0,1,1,0,0,1,1,0,1,0},
			{0,0,0,0,0,1,1,0,0,1,1,0,1,0},
			{0,0,0,0,0,0,0,0,0,0,0,0,1,0},
			{0,0,0,0,0,0,0,0,0,0,0,0,1,0},
			{0,0,0,0,0,0,0,0,0,0,0,0,1,0},
			{0,0,0,0,0,0,0,0,0,0,0,0,1,0},				
			{0,0,1,1,1,1,0,0,0,0,0,0,1,0},
	};
	
	for(int i=0;i<filas;i++){
		for(int j=0;j<cols;j++){
			mar[i][j]=mapa[i][j];
		}		
	}
>	
>}

>//funcion para ver que la casilla exista adentro de la matriz
> bool existe(int filas, int cols, int x, int y){
	if(x>=0 && y>=0 && x<filas && y<cols){
		return true;
	}
	else{
		return false;
	}
	
>}


> void recursiva(int **mar, int filas, int cols, int x, int y){
	
	//Si la casilla no existe, regresar
	if(existe(filas,cols,x,y)==false){
		return;
	}
	
	//si la casilla existe, evaluar las 8 posiciones adyacentes
	else{
		
		//Arriba
		if(existe(filas,cols,x-1,y)==true && mar[x-1][y]==1){
			mar[x-1][y]=3;
			recursiva(mar,filas,cols,x-1,y);
		}
	
		//Diagonal sup derecha
		if(existe(filas,cols,x-1,y+1)==true && mar[x-1][y+1]==1){
			mar[x-1][y+1]=3;
			recursiva(mar,filas,cols,x-1,y+1);
		}
	
		//Derecha
		if(existe(filas,cols,x,y+1)==true && mar[x][y+1]==1){
			mar[x][y+1]=3;
			recursiva(mar,filas,cols,x,y+1);
		}
	
		//Diagonal inf derecha
		if(existe(filas,cols,x+1,y+1)==true && mar[x+1][y+1]==1){
			mar[x+1][y+1]=3;
			recursiva(mar,filas,cols,x+1,y+1);
		}
	
		//Abajo
		if(existe(filas,cols,x+1,y)==true && mar[x+1][y]==1){
			mar[x+1][y]=3;
			recursiva(mar,filas,cols,x+1,y);
		}
	
		//Diagonal inf izq
		if(existe(filas,cols,x+1,y-1)==true && mar[x+1][y-1]==1){
			mar[x+1][y-1]=3;
			recursiva(mar,filas,cols,x+1,y-1);
		}
	
		//Izq
		if(existe(filas,cols,x,y-1)==true && mar[x][y-1]==1){
			mar[x][y-1]=3;
			recursiva(mar,filas,cols,x,y-1);
		}
	
		//Diagonal sup izq
		if(existe(filas,cols,x-1,y-1)==true && mar[x-1][y-1]==1){
			mar[x-1][y-1]=3;
			recursiva(mar,filas,cols,x-1,y-1);
		}
	}
	return;
}


>//Recorro el arreglo para evaluar casilla por casilla
>void recorrer(int **mar, int filas, int cols){
	for(int i=0;i<filas;i++){
		for(int j=0;j<cols; j++){
			if(mar[i][j]==1){
				mar[i][j]=2;
				recursiva(mar,filas,cols,i,j);
			}
		}
	}	
>}

>int contar(int **mar, int filas, int cols){
	int islas=0;
	for(int i=0;i<filas;i++){
		for(int j=0; j<cols; j++){
			if(mar[i][j]==2){
				islas++;
			}
		}
	}
	return islas;
}

>int main(){	
	//Definir filas y columnas
	int filas  	=18;
	int cols 	=14;

	//Crear la matriz del laberinto con punteros
	int** mar = new int*[filas];
    for (int i = 0; i < filas; ++i)
        mar[i] = new int[cols];
    
	//Rellenar el mar
	mapeado(mar,filas,cols);
	
	//Recorrer el mapa 
	recorrer(mar,filas,cols);  
	int islas = contar(mar,filas,cols);
	cout<<"Hay "<<islas<<" islas en el mapa"<<endl;
	
	//Mostrar en consola el laberinto
	for(int i=0; i<filas;i++){
		for(int j=0; j<cols;j++){
			cout<<mar[i][j]<<"\t";
		}
		cout<<endl;
	}  
	return 0;   
>}


# Código iterativo

>#include <stdio.h>
#include <iostream>
using namespace std;

/*
	Name:  			Islas
	Copyright: 		OpenSource
	Author: 		Nora Helena Soria Arias
	Date: 			07/12/23
	Description: 	Programa que cuente cuantas islas hay en un mar, 
					siendo el mar una matriz de 0s y las islas 1s en 
					dicha matriz.
*/

/*
Algoritmo:
1.- Empiezas en la posici�n [0][0] a recorrer la matriz
2.- Si hallas un 1, lo transformas en un 2
3.- Revisas las 8 casillas adyacentes al 2
4.- Si hay un 1 junto a un 2, lo conviertes en 3 y revisas sus 8 casillas adyacentes
5.- Al final el programa cuenta cuantos 2s hay, y la cantidad de 2s es la cantidad de islas
*/

//Esta funcion rellena el vector mar  con una matriz mapa
//Porque mar no se puede rellenar de esta manera ya que es un vector de vectores
void mapeado(int **mar, int filas, int cols){
	int mapa[18][14] ={
			{0,0,0,0,0,0,0,0,0,0,0,0,0,0},
			{0,0,0,0,0,0,0,0,0,0,0,0,0,0},
			{0,1,1,0,0,0,0,0,0,0,0,0,0,0},
			{0,1,1,0,0,0,0,1,1,1,1,0,0,0},
			{0,1,1,0,0,0,0,0,0,0,0,0,0,0},
			{0,0,0,0,0,0,0,0,0,0,0,0,0,0},
			{0,0,0,0,0,0,0,0,0,0,0,0,0,0},
			{0,0,0,0,0,0,0,0,0,0,0,0,0,0},
			{0,0,0,0,0,0,0,0,0,1,1,0,0,0},
			{0,0,0,0,0,1,1,0,0,1,1,0,0,0},
			{0,0,0,0,0,1,1,0,0,1,1,0,1,0},
			{0,0,0,0,0,1,1,0,0,1,1,0,1,0},
			{0,0,0,0,0,1,1,0,0,1,1,0,1,0},
			{0,0,0,0,0,0,0,0,0,0,0,0,1,0},
			{0,0,0,0,0,0,0,0,0,0,0,0,1,0},
			{0,0,0,0,0,0,0,0,0,0,0,0,1,0},
			{0,0,0,0,0,0,0,0,0,0,0,0,1,0},				
			{0,0,1,1,1,1,0,0,0,0,0,0,1,0},
	};
	
	/*Mapa dificil
	int mapa[10][10] ={
				{1,0,1,0,0,0,1,1,1,1},
				{0,0,1,0,1,0,1,0,0,0},
				{1,1,1,1,0,0,1,0,0,0},
				{1,0,0,1,0,0,0,0,0,0},
				{1,1,1,1,0,0,0,1,1,1},				
				{0,1,0,1,0,0,1,1,1,1},
				{0,0,0,0,0,1,1,1,1,0},
				{0,0,0,1,0,0,1,1,1,0},
				{1,0,1,0,1,0,0,1,0,0},
				{1,1,1,1,0,0,0,1,1,1},
				};
	*/
	/* Mapa sencillo
	int mapa[10][10] ={
				{0,1,1,1,0,0,0,1,1,0},
				{0,0,1,1,0,0,0,1,1,0},
				{0,0,0,0,0,0,0,0,0,0},
				{0,0,1,1,0,0,0,0,0,0},
				{0,0,1,1,0,0,0,1,1,1},				
				{0,0,0,0,0,0,0,0,0,0},
				{0,0,0,0,0,0,1,1,0,0},
				{0,0,0,1,0,0,1,1,0,0},
				{0,0,1,1,0,0,0,0,0,0},
				{0,0,0,0,0,0,0,0,0,0},
				};	
	*/
				
	for(int i=0;i<filas;i++){
		for(int j=0;j<cols;j++){
			mar[i][j]=mapa[i][j];
		}		
	}
}

//funcion para ver que la casilla exista adentro de la matriz
bool existe(int filas, int cols, int x, int y){
	if(x>=0 && y>=0 && x<filas && y<cols){
		return true;
	}
	else{
		return false;
	}
	
}



void revisar(int i,int j, int **mar, int filas, int cols){
	//La revision ocurre de derecha hacia abajo, luego izquierda, arriba y derecha
	
	//Empieza con la Esquina superior derecha
	if(existe(filas, cols, i-1, j+1) == true  && mar[i-1][j+1] == 1){
		mar[i-1][j+1] = 3;
	}
	
	//Centro derecha
	if(existe(filas, cols,i,j+1) == true && mar[i][j+1] == 1){
			mar[i][j+1] = 3;
	}
	
	//Esquina inferior derecha
	if(existe(filas, cols, i+1, j+1)== true && mar[i+1][j+1] == 1) {
			mar[i+1][j+1] = 3;
	}
	
	//Centro abajo
	if(existe(filas, cols, i+1, j)== true && mar[i+1][j] == 1){
			mar[i+1][j] = 3;
	}
	
	//Esquina inferior izquierda
	if(existe(filas, cols, i+1, j-1)== true && mar[i+1][j-1] == 1){
			mar[i+1][j-1] = 3;
	}
	
	//Centro izquierda
	if(existe(filas, cols,i, j-1)== true && mar[i][j-1] == 1){
			mar[i][j-1] = 3;
		
	}
	
	//Esquina superior izquierda
	if(existe(filas, cols, i-1, j-1)== true && mar[i-1][j-1] == 1){
		mar[i-1][j-1] = 3;
	}
	
	//Centro arriba
	if(existe(filas, cols, i-1, j)== true && mar[i-1][j] == 1){
		mar[i-1][j] = 3;
	}
	
}


//Recorro el arreglo para evaluar casilla por casilla
void recorrer(int **mar, int filas, int cols){
	for(int i=0;i<filas;i++){
		for(int j=0;j<cols; j++){
			
		
			if(mar[i][j]==1){
				mar[i][j]=2;
				cout<<"Encontre una isla"<<endl;
				revisar(i,j,mar,filas, cols);}
						
			if(mar[i][j] ==3){
				revisar(i,j,mar,filas, cols);}
				
		}
	}
}	


int contar(int **mar, int filas, int cols){
	int islas=0;
	for(int i=0;i<filas;i++){
		for(int j=0; j<cols; j++){
			if(mar[i][j]==2){
				islas++;
			}
		}
	}
	return islas;
}

int main(){	
	//Definir filas y columnas
	int filas  	=18;
	int cols 	=14;

	//Crear la matriz del laberinto con punteros
	int** mar = new int*[filas];
    for (int i = 0; i < filas; ++i)
        mar[i] = new int[cols];
    
	//Rellenar el mar
	mapeado(mar,filas,cols);
	
	//Mostrar en consola el laberinto
	for(int i=0; i<filas;i++){
		for(int j=0; j<cols;j++){
			cout<<mar[i][j]<<"\t";
		}
		cout<<endl;
	}  
	
	
	//Recorrer el mapa 
	recorrer(mar,filas,cols);  
	int islas = contar(mar,filas,cols);
	cout<<"Hay "<<islas<<" islas en el mapa"<<endl;
	
	
	//Mostrar en consola el laberinto
	for(int i=0; i<filas;i++){
		for(int j=0; j<cols;j++){
			cout<<mar[i][j]<<"\t";
		}
		cout<<endl;
	}  
	return 0;   
}


# Conclusiones

Este problema tiene muchas soluciones, pero lo que me gusta de mi solución es que en el mapa final puedes ver  el estado en el que se encuentran cada una de las celdas de acuerdo a la notación espcificada. Las celdas 0 e mantuvieron como 0, desaparecen por completo los 1s y son reemplazados por 2s y 3s. Los 3 son islas ya revisadas y los 2 son el represnetativo de la isla. No quise crear otro mapa que mantuviera los valores del mapa original porque la pregunta es muy espeçifica: ***¿Cuántas islas hay?*** Así que no hay necesidad de mantener el mapa original, se puede modificar al gusto.