#include "cuenta.h"

  cuenta::cuenta(int n, float i){
      nroCta=n;
      saldo=0;
      tInteres=i;

  }
  void cuenta::deposito(float m){
     saldo+=m;
  }

  int cuenta::extraccion(float m){
   if (saldo>=m) {
        saldo-=m;
        return 1;
   }
   return 0;
  }

  void cuenta::acredInteres(){
   saldo+=saldo*tInteres/100;

  }

  int cuenta::getNroCta(){
      return nroCta;
  }
  float cuenta::getSaldo(){
      return saldo;
  }

  float cuenta::getTasaInteres(){
     return tInteres;
  }
