#ifndef __FIG_INCLUDED__
#define __FIG_INCLUDED__
#include "fig_geo.h"
#endif


class Poligono:public Fig_Geo{
  protected:
  int radio;
  int nlados;
  public:
  Poligono(int x1, int y1, int r, int nl):Fig_Geo(x1,y1){radio=r;nlados=nl;}
  void setRadio(int );
  int getRadio();
  void setNlados(int );
  int getNlados();
  virtual void mostrar();
  virtual void ocultar();
};
