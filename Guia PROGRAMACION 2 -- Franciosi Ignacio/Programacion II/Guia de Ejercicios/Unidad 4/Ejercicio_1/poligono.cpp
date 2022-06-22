#include <winbgim.h>
#include <math.h>
#include <iostream>
#include "poligono.h"
using namespace std;

 void Poligono::setRadio(int r){
   radio=r;
  }
  int Poligono::getRadio(){
   return radio;
  }
void Poligono::setNlados(int n){
   nlados=n;
  }
int Poligono::getNlados(){
   return nlados;
  }



void Poligono::mostrar(){
  int *c=new int [nlados*2+2];
  float an=2*M_PI/nlados,anx=0;
  float rx=radio;
  for (int i=0;i<2*nlados;i+=2){
    c[i]=x+rx*cos(anx);
    c[i+1]=y+rx*sin(anx);
     anx+=an;
   }
   c[2*nlados]=c[0];
   c[2*nlados+1]=c[1];
   drawpoly(nlados+1, c);
  }

void Poligono::ocultar(){
     int ac=getcolor();
     setcolor(getbkcolor());
     mostrar();
     setcolor(ac);
  }
