#include <iostream>
#include "tablero.h"
#include "ruta.h"

using namespace std;

int main() {
  Tablero tab;//Instanciacion del tablero
  //Ejecucion de los metodos de la clase tablero
  tab.mostrarTablero();
  Ruta ruta1;//Instanciacion de la ruta
  //Ejecucion de los metodos de la clase ruta
  ruta1.setPosicion(tab);
  ruta1.hallarRuta(tab);
}