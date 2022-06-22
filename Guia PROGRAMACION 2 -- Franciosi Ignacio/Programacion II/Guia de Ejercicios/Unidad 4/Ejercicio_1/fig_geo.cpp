#include "fig_geo.h"

Fig_Geo::Fig_Geo(int x1,int y1){
  x=x1;
  y=y1;
}
void Fig_Geo::setX(int x1){
  x=x1;
}
void Fig_Geo::setY(int y1){
  y=y1;
}

int Fig_Geo::getX(){
  return x;
}
int Fig_Geo::getY(){
  return y;
}

void Fig_Geo::mover(int dx, int dy){
  ocultar();
  x+=dx;
  y+=dy;
  mostrar();
}

