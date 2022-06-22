#ifndef __FIG_INCLUDED__
#define __FIG_INCLUDED__
#include "fig_geo.h"
#endif

class Circulo:public Fig_Geo{
  protected:
  int radio;
  public:
  Circulo(int x1, int y1, int r):Fig_Geo(x1,y1){radio=r;}
  void setRadio(int );
  int getRadio();
  virtual void mostrar();
  virtual void ocultar();
};
