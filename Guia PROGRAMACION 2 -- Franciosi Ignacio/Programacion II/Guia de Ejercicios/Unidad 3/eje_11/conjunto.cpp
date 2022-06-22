#include "conjunto.h"
#include <iostream>

using namespace std;

conjunto::conjunto(int t){
      P=new int [t];
      tMax=t;
      tAct=0;
  }

 conjunto::conjunto(const conjunto& z){
 tMax=z.tMax;
 P=new int [tMax];
 tAct=z.tAct;
 for (int i=0;i<tAct;i++){
    P[i]=z.P[i];
  }
}
 void conjunto::agregar(int n){
      if (tAct<tMax && existe(n)==-1){
        P[tAct]=n;
        tAct++;
       }
  }

 void conjunto::eliminar(int n){
    int i=existe(n);
    if (i!=-1){
        P[i]=P[tAct-1];
        tAct--;
     }
  }

void conjunto::operator=(conjunto z){
 tMax=z.tMax;
 P=new int [tMax];
 tAct=z.tAct;
 for (int i=0;i<tAct;i++){
    P[i]=z.P[i];
  }
}
  int conjunto::gettMax(){
      return tMax;
  }
 void conjunto::Mostrar(){
   for (int i=0;i<tAct;i++){
    cout <<"\n"<<P[i];
   }
 }
  int conjunto::gettAct(){
      return tAct;
  }

  int conjunto::existe(int n){
  for (int i=0;i<tAct;i++)
   if (P[i]==n) return i;
  return -1;
  }

  conjunto conjunto::operator+(conjunto c){
      conjunto z(tMax+c.tMax);
      int i;
      for (i=0;i<tAct;i++){
        z.agregar(P[i]);
      }
     for (i=0;i<c.tAct;i++){
        z.agregar(c.P[i]);
      }
   return z;
   }

  conjunto conjunto::operator*(conjunto c){
   int tmin=tMax;
   if (c.tMax<tmin) tmin=c.tMax;
      conjunto z(tmin);
      int i;
      for (i=0;i<tAct;i++){
        if (c.existe(P[i])!=-1) z.agregar(P[i]);
      }
   return z;
  }

  conjunto conjunto::operator-(conjunto c){
      conjunto z(tMax);
      int i;
      for (i=0;i<tAct;i++){
        if (c.existe(P[i])==-1) z.agregar(P[i]);
      }
   return z;


  }

conjunto::~conjunto(){
  delete [] P;
}
