#include <stdio.h>
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
1.- Empiezas en la posición [0][0] a recorrer la matriz
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


void recursiva(int **mar, int filas, int cols, int x, int y){
	
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


//Recorro el arreglo para evaluar casilla por casilla
void recorrer(int **mar, int filas, int cols){
	for(int i=0;i<filas;i++){
		for(int j=0;j<cols; j++){
			if(mar[i][j]==1){
				mar[i][j]=2;
				recursiva(mar,filas,cols,i,j);
			}
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
