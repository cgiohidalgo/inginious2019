#ifndef _RUTA_H_
#define _RUTA_H_
#include "tablero.h"

class Ruta//Clase para encontrar el camino
{
  public:
    Ruta();//Constructor
    ~Ruta();//Destructor
    void setPosicion(Tablero tab);//Metodo para la posicion aleatoria del avatar
    virtual void hallarRuta(Tablero tab);//Metodo para hallar el camino a la salida
  
  private:
    int numeroPasos;//Entero para la cantidad de pasos realizados por el avatar
    int x,y;//Variable de tipo entero para las coordenadas del avatar
};

#endif//_RUTA_H_