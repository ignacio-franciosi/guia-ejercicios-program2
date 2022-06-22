#ifndef __PER_INCLUDED__
#define __PER_INCLUDED__
#include "personaje.h"
#endif
#include <string.h>


class mago: public personaje{
  protected:
      char **hechizo;
      int nroHechizos;
  public:
  mago(char* N, char* R,int f,int i, int vm):personaje(N,R,f,i,vm){
  if (inteligencia<17)inteligencia=17;
  if (fuerza>15)fuerza=15;
  nroHechizos=0;
  hechizo=new char*[4];
  };
  void AprendeHechizo(char *);
  void LanzaHechizo(personaje&);
  void Imprime();
};
