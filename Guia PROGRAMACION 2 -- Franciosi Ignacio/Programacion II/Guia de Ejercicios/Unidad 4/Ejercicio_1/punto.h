
#ifndef __FIG_INCLUDED__
#define __FIG_INCLUDED__
#include "fig_geo.h"
#endif

class Punto:public Fig_Geo{
  public:
  Punto(int x1, int y1):Fig_Geo(x1,y1){};
  virtual void mostrar();
  virtual void ocultar();
};
