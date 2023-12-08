#include <iostream>
#include <stdio.h>
using namespace std;
bool salir= false;
/*
	Name: 			Desafio 2: Laberinto
	Copyright:		OpenSource 
	Author: 		Nora Helena Soria Arias
	Date: 			07/12/2023
	Description:	Que el personaje en el laberinto llegué a la salida
*/

//Esta función rellena la matriz "laberinto" o bien, mapea los obstaculos
void mapeado(int **laberinto, int filas, int cols){
    
	for(int i=0;i<filas;i++){
        for(int j=0;j<cols;j++){
            laberinto[i][j]=0;
        }
    }

    //9 significa salida del laberinto
    laberinto[1][0] =2; //humano
	laberinto[7][0]=9; 
     
    //Ahora el rellenado de las paredes
    
    for(int j=0; j<cols; j++){
    	laberinto[0][j] =1;
    	laberinto[8][j] =1;
    	laberinto[j][8] =1;
	}
 	
   	for(int a =0; a<filas; a++){
   		if(a!=5){
   			laberinto[a][6] =1;
		}
	}
	
	laberinto[2][5] =1;
	
	for(int a =0; a<filas; a++){
   		if(a!=1 && a!=5 && a!=7){
   			laberinto[a][4] =1;
		}
		if(a==4 || a==6){
			laberinto[a][3]=1;
		}
	}
	
	for(int a =0; a<filas; a++){
		if(a!=1 && a!=3 && a!=5){
			laberinto[a][2]=1;
		}
		
		if (a==2){
			laberinto[a][1] =1;
		}
	}
	
	for(int a =2; a<7; a++){
		laberinto[a][0]=1;
	}
	
}

int resolver(int **laberinto, int x, int y, int filas, int cols){
	
	//if para salir de la funcion
	if(salir==true){
		return 0;
	}
	
	if(laberinto[x][y]==9){
		salir =true;
		cout<<"Saliste"<<endl;
		return 0;
	}
	
	laberinto[x][y] =2;
	
	//if para checar la derecha
	if(x>=0 && y>=0 && (y+1)<cols && (laberinto[x][y+1]==0 || laberinto[x][y+1]==9)){
		cout<<"Derecha"<<endl;
		resolver(laberinto,x,y+1,filas,cols);
	}

	if(salir==true){
		return 0;
	}
	
	//if para checar la abajo
	if(x>=0 && y>=0 && (x+1)<filas && (laberinto[x+1][y]==0 || laberinto[x+1][y]==9)){
		cout<<"Abajo"<<endl;
		resolver(laberinto,x+1,y,filas,cols);
	}


	if(salir==true){
		return 0;
	}
	
	//if para checar la arriba
	if(x>=0 && y>=0 && laberinto[x-1][y]==0 && (laberinto[x-1][y]==0 || laberinto[x-1][y]==9)){
		cout<<"Arriba"<<endl;
		resolver(laberinto, x-1,y,filas,cols);
	}
	
	if(salir==true){
		return 0;
	}
	
	
	//if para checar la izquierda, no has ido por hay
	if(x>=0 && y>=0 && (laberinto[x][y-1]==0 || laberinto[x][y-1]==9)){
		cout<<"Izquierda"<<endl;
		cout<<x;
		cout<<",";
		cout<<y<<endl;
		resolver(laberinto, x,y-1,filas,cols);
	}
	
	
	if(salir==true){
		return 0;
	}
	
	//if para checar la izquierda por donde ya pasaste
	if(x>=0 && y>=0 && laberinto[x][y-1]==2){
		cout<<"Regresando por la izquierda"<<endl;
		cout<<x;
		cout<<",";
		cout<<y<<endl;
		return 0;
	}
	
	if(salir==true){
		return 0;
	}

	
	//if para checar arriba, pero ya habias bajado
	if(x>=0 && y>=0 && laberinto[x-1][y]==2){
		cout<<"Subiendo porque ya bajaste al maximo"<<endl;
		cout<<x;
		cout<<",";
		cout<<y<<endl;
		return 0;
	}
	
	if(salir==true){
		return 0;
	}

	//if para checar abajo, pero ya habias subido
	if(x>=0 && y>=0 && laberinto[x+1][y]==2){
		cout<<"Bajando porque ya subiste lo maximo"<<endl;
		cout<<x;
		cout<<",";
		cout<<y<<endl;
		return 0;
	}
	
	if(salir==true){
		return 0;
	}
}

int main(){	
	//Definir filas y columnas
	int filas  	=9;
	int cols 	=9;
	
	//Crear la matriz del laberinto
	int** laberinto = new int*[filas];
    for (int i = 0; i < filas; ++i)
        laberinto[i] = new int[cols];
	
	
	//Esta funcion rellena el mapa con la persona, la salida y las paredes del laberinto
	mapeado(laberinto,filas,cols);
	
	//Función para resolver el laberinto
	resolver(laberinto,1,0,filas,cols);
	
	//Mostrar en consola el laberinto
	for(int i=0; i<filas;i++){
		for(int j=0; j<cols;j++){
			cout<<laberinto[i][j]<<"\t";
		}
		cout<<endl;
	}
	
	//Salir del programa
	return 0;	
}