#include "persona.h"
#include <string.h>



  persona::persona(){
   strcpy(nombre," ");
   fNac.setDia(1);
   fNac.setMes(1);
   fNac.setAnio(1600);
   DNI=0;
   genero=' ';
   peso=0;
   altura=0;
   }


  persona::persona(char* n, Fecha fn, char g){
   strcpy(nombre,n);
   fNac.setDia(fn.getDia());
   fNac.setMes(fn.getMes());
   fNac.setAnio(fn.getAnio());
   genero=g;
   DNI=0;
   peso=0;
   altura=0;
   }
  persona::persona(char* n, Fecha fn, int dni, char g, float p, float a){
   strcpy(nombre,n);
   fNac.setDia(fn.getDia());
   fNac.setMes(fn.getMes());
   fNac.setAnio(fn.getAnio());
   genero=g;
   DNI=dni;
   peso=p;
   altura=a;
   }
  void persona::setNombre(char* n){
    strcpy(nombre,n);
    }
  void persona::SetFnac(Fecha fn){
   fNac.setDia(fn.getDia());
   fNac.setMes(fn.getMes());
   fNac.setAnio(fn.getAnio());

  }
  void persona::SetFnac(int d, int m, int a){
   fNac.setDia(d);
   fNac.setMes(m);
   fNac.setAnio(a);

  }
  void persona::setDNI(int dni){
   DNI=dni;
  }
  void persona::setGen(char g){
     genero=g;
}
  void persona::SetPeso(float p){
     peso=p;
}
  void persona::SetAlt(float a){
     altura=a;
}
  char* persona::getNombre(){
  return nombre;
  }

  Fecha persona::getFnac(){
  return fNac;
  }
  int persona::getDNI(){
  return DNI;
  }
  char persona::getGen(){
  return genero;
  }
  float persona::getPeso(){
  return peso;
  }
  float persona::getAlt(){
  return altura;
  }

  float persona::calcularIMC(){
    return peso/(altura*altura);

  }
  int persona::calcularEdad(int a){
     return a-fNac.getAnio();
  }
  bool persona::esMayorDeEdad(int a){
   return calcularEdad(a)>=18;
  }
