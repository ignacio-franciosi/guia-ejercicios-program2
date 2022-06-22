#ifndef __EMPLEADO__
#define __EMPLEADO__
#include "empleado.h"
#endif


class Repartidor: public Empleado {
  protected:
    int Zona;
  public:
    Repartidor(char* n, int e, float s, int z):Empleado(n,e,s){Zona=z;}
    void setZona(int);
    int getZona();
    void verDatos();
    float sPlus();
};
