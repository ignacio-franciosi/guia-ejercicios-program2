#include <winbgim.h>
#include "punto.h"

   void Punto::mostrar(){
     putpixel(x, y, getcolor());
  }
   void Punto::ocultar(){
     putpixel(x, y, getbkcolor());

  }
