#include <winbgim.h>
#include "circulo.h"

  void Circulo::setRadio(int r){
   radio=r;
  }
  int Circulo::getRadio(){
   return radio;
  }


void Circulo::mostrar(){
       circle ( x, y, radio);
  }
void Circulo::ocultar(){
     int ac=getcolor();
     setcolor(getbkcolor());
     circle ( x, y, radio);
     setcolor(ac);
  }
