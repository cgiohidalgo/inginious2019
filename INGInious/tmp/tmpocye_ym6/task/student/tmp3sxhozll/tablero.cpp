#include <iostream>
#include <string>
#include <fstream>
#include <iostream> 
#include <stdlib.h> 
#include "tablero.h"
using namespace std;

Tablero::Tablero()
{

}

Tablero::~Tablero()
{

}

void Tablero::setTablero()
{  
  ifstream archivo;
  archivo.open("Tablero.txt",ios::in); //Se carga el archivo
  string numeracion; //Se declara una varaible tipo String llamada numeracion
  for (int y=0;y<10;y++){ //Se toma la primera linea de codigo y se hacen los saltos correspondientes para tomar todos los datos
    getline(archivo,numeracion);
    int recorre=0;
    for (int x=0;x<10;x++){ //Se hace el recorrido por los datos del archivo
      tablero[x][y]=numeracion[recorre];
      recorre+=2; //Se toman los datos teniendo en cuenta los espacios
    }
  }
//Se van almacenando los datos del texto en una matriz
  for (int a=0;a<10;a++){ 
    for (int b=0;b<10;b++){
      if (tablero[b][a]==49){
        tablero[b][a]=1; //Se crean los 1
      }
      else tablero[b][a]=0; //Se crean los 0
    }
  }
}

void Tablero::mostrarTablero()
{
  setTablero();//Transformacion de Tablero.txt a un array dinamico
  int cont=0; //Se inicia un contador en 0 para la numeroacion de las coordenadas
  cout<<"  0 1 2 3 4 5 6 7 8 9 "<<endl; //Se imprime la numeracion de las coordenadas del tablero
  for (int a=0;a<10;a++){ 
    cout<<cont<<" ";
      for (int b=0;b<10;b++){ //Se muestra la matriz dato por dato hasta completar todo el tablero del laberinto
        cout <<tablero[b][a] << " ";
      }
    cont++; //Se le aumenta 1 al contador
    cout << endl; //Se imprime la numeracion de la coordenada y se le da el espacio para mostrar la coordenada de la matriz correspondiente

  }
}