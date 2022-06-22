#ifndef __PER_INCLUDED__
#define __PER_INCLUDED__
#include "personaje.h"
#endif
#include <string.h>


class clerigo: public personaje{
  protected:
      char *nombreDios;
  public:
  clerigo(char* N, char* R,int f,int i, int vm, char* nd):personaje(N,R,f,i,vm){
  if (inteligencia<12)inteligencia=12;
  if (inteligencia>16)inteligencia=16;
  if (fuerza<18)fuerza=18;
  nombreDios=new char [strlen(nd)];
  strcpy(nombreDios,nd);
  };
  void curar(personaje&);
  void Imprime();
};
