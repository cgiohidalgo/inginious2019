#include <iostream>
#include <math.h>
using namespace std;
#include "factor.h"


Factor::Factor(){
int numero=0;
}
Factor::~Factor(){
}

int Factor::mostrarFactor()
{ 
//  cout<<"digite numero  ";
  cin>> numero;
  factor=2;
  
  while(factor <= sqrt(numero))
    {
      if(numero%factor==0)
      {
      cout<< factor<<" * ";
      numero= numero/factor;
      continue;
      }
  if(factor == 2) factor++;
    else factor+=2; 
    }
  cout<<numero<<endl;
return 0;
}
