#ifndef _TABLERO_H_
#define _TABLERO_H_

#include <string>


using namespace std;

class Tablero //Clase para cargar el tablero
{
  public:
    Tablero();//Constructor
    ~Tablero();//DEstructor
    void setTablero();//Metodo para asignar el tablero
    void mostrarTablero();//Metodo que lo muestra
    int tablero[10][10];//Array que representa el tablero

  private:
    
};

#endif //_TABLERO_H_