#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "ruta.h"
#include "tablero.h"

using namespace std;

Ruta::Ruta()
{
  numeroPasos=0;
}

Ruta::~Ruta()
{

}

void Ruta::setPosicion(Tablero tab){
  //Es el metodo que se usa para elegir y mostrar la posicion inicial del objeto
  srand(time(NULL)); //Se inicia un valor aleatorio
  //int num=rand()%(10-0);
  x = rand()%(10-0); //Se establece el punto de inicio x en 0
  y = rand()%(10-0); //Se establece el punto de inicio y en 0 
  tab.tablero[x][y]=3; //Muestra en la matriz la coordenada donde esta el objeto  
  cout<<"camino [x,y]: "<<y<<" "<<x<<endl; //Se muestra la casilla inicial del objeto
}

void Ruta::hallarRuta(Tablero tab){
  //Es el metodo que se usa para mostrar toda la ruta que hace el objeto desde el punto inicial hasta el final del laberinto
  do //Se usa un ciclo para hacer que el objeto llegue a la posicion final satisfactoriamente y no pase de la cantidad maxima de pasos 
  {
    if(tab.tablero[x+1][y]!=0&&x<=9) { //Mira si el objeto se puede mover y si es posible lo mueve a la derecha
      x+=1; //Cambia el valor del objeto para que este se mueva
      tab.tablero[x][y]=3; //Muestra en la matriz la coordenada donde esta el objeto
      cout<<"camino [x,y]: "<<y<<" "<<x<<endl; //Muestra la posicion actual del objeto
     numeroPasos++; //Suma la cantidad de pasos para que no se pase del limite
    } else if(tab.tablero[x][y+1]!=0&&y<=9) { //Mira si el objeto se puede mover y si es posible lo mueve hacia abajo
     y+=1; //Cambia el valor del objeto para que este se mueva
     tab.tablero[x][y]=3; //Muestra en la matriz la coordenada donde esta el objeto
     cout<<"camino [x,y]: "<<y<<" "<<x<<endl; //Muestra la posicion actual del objeto
     numeroPasos++;//Suma la cantidad de pasos para que no se pase del limite
    } else if(tab.tablero[x-1][y]!=0&&x<=9) { //Mira si el objeto se puede mover y si es posible lo mueve a la izquierda
      x-=1; //Cambia el valor del objeto para que este se mueva
      tab.tablero[x][y]=3; //Muestra en la matriz la coordenada donde esta el objeto
      cout<<"camino [x,y]: "<<y<<" "<<x<<endl; //Muestra la posicion actual del objeto
      numeroPasos++; //Suma la cantidad de pasos para que no se pase del limite
    } else if(tab.tablero[x][y-1]!=0&&y<=9) { //Mira si el objeto se puede mover y si es posible lo mueve hacia arriba
      y-=1; //Cambia el valor del objeto para que este se mueva
      tab.tablero[x][y]=3; //Muestra en la matriz la coordenada donde esta el objeto
     cout<<"camino [x,y]: "<<y<<" "<<x<<endl; //Muestra la posicion actual del objeto
     numeroPasos++; //Suma la cantidad de pasos para que no se pase del limite
    }
  }while ((numeroPasos<30 && tab.tablero[9][9]!=3)||(tab.tablero[x][y+1]!=1&&tab.tablero[x][y+1]!=1&&tab.tablero[x-1][y]!=1&&tab.tablero[x][y-1]!=1)); //Se mantiene el ciclo mientras los pasos sean inferiores a 30 y que la ultima casilla del laberinto no sea el objeto  
  if(tab.tablero[9][9]==3){ //Si la ultima cassila del laberinto es el objeto entonces:
    cout<<"Encontró el camino"<<endl; //Se indica que encontró el camino
  } else { //Si no:
    cout<<"No encontró el camino"<<endl; //Se indica que no encontró el camino
  }
}
