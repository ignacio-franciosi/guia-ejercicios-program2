#include "clerigo.h"
#include <iostream>
using namespace std;

  void clerigo::curar(personaje& p){
  for (int i=0;i<10;i++) p.IncVida();
  }


  void clerigo::Imprime(){
  cout<<"\nNombre                 : "<<Nombre;
  cout<<"\nRaza                   : "<<Raza;
  cout<<"\nFuerza                 : "<<fuerza;
  cout<<"\nInteligencia           : "<<inteligencia;
  cout<<"\nPuntos de Vida maximos : "<<puntoVidaMax;
  cout<<"\nPuntos de Vida actuales: "<<puntosVidaAct;
  cout<<"\nDios                   : "<<nombreDios;
  }


