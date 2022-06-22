#include <iostream>
#include "personaje.h"
#include <string.h>
using namespace std;

  personaje::personaje(char* N, char* R,int f,int i, int vm){
  Nombre=new char [strlen(N)];
  strcpy(Nombre,N);
  Raza=new char [strlen(R)];
  strcpy(Raza,R);
   fuerza=f;
   inteligencia=i;
   puntoVidaMax=vm;
   if (puntoVidaMax>100)
     puntoVidaMax=100;
   puntosVidaAct=puntoVidaMax;
  }

  void personaje::setNombre(char *N){
   delete [] Nombre;
   Nombre=new char [strlen(N)];
   strcpy(Nombre,N);
 }
  void personaje::setRaza(char *R){
   delete [] Raza;
   Raza=new char [strlen(R)];
   strcpy(Raza,R);
 }
  void personaje::setFuerza(int f){
   fuerza=f;
  }
  void personaje::setInteligencia(int i){
    inteligencia=i;
 }
  void personaje::setPuntosVidaMax(int vm){
   puntoVidaMax=vm;
   if (puntoVidaMax>100)
     puntoVidaMax=100;
   puntosVidaAct=puntoVidaMax;
  }
  char* personaje::getNombre(){
    return Nombre;
  }
  char* personaje::getRaza(){
    return Raza;
  }
  int personaje::getFuerza(){
    return fuerza;
  }
  int personaje::getInteligencia(){
    return inteligencia;
  }
  int personaje::getPuntosVidaMax(){
    return puntoVidaMax;
  }
  int personaje::getPuntosVida(){
    return puntosVidaAct;
  }
  void personaje::decVida(){
    if (puntosVidaAct>0) puntosVidaAct--;
  }
 void personaje::IncVida(){
    if (puntosVidaAct<puntoVidaMax) puntosVidaAct++;
  }

  void personaje::Imprime(){
  cout<<"\nNombre                 : "<<Nombre;
  cout<<"\nRaza                   : "<<Raza;
  cout<<"\nFuerza                 : "<<fuerza;
  cout<<"\nInteligencia           : "<<inteligencia;
  cout<<"\nPuntos de Vida maximos : "<<puntoVidaMax;
  cout<<"\nPuntos de Vida actuales: "<<puntosVidaAct;
  }

