#ifndef __EMPLEADO__
#define __EMPLEADO__
#include "empleado.h"
#endif


class Comercial: public Empleado {
  protected:
    float Comision;
  public:
    Comercial(char* n, int e, float s, float c):Empleado(n,e,s){Comision=c;}
    void setComision(float);
    float getComision();
    void verDatos();
    float sPlus();
};
