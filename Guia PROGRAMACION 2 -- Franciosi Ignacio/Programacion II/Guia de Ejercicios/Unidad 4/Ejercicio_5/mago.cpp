#include "mago.h"
#include <iostream>
using namespace std;

  void mago::AprendeHechizo(char *H){
      if (nroHechizos<4){
        int l=strlen(H);
        hechizo[nroHechizos]=new char[l];
        strcpy(hechizo[nroHechizos],H);
        nroHechizos++;
       }
  }
  void mago::LanzaHechizo(personaje& p){
  if (nroHechizos>0){
    nroHechizos--;
    for (int i=0;i<10;i++) p.decVida();
  }
  }


  void mago::Imprime(){
  cout<<"\nNombre                 : "<<Nombre;
  cout<<"\nRaza                   : "<<Raza;
  cout<<"\nFuerza                 : "<<fuerza;
  cout<<"\nInteligencia           : "<<inteligencia;
  cout<<"\nPuntos de Vida maximos : "<<puntoVidaMax;
  cout<<"\nPuntos de Vida actuales: "<<puntosVidaAct;
  if (nroHechizos>0){
  cout<<"\nHechizos: \n";
  for (int i=0;i<nroHechizos;i++){
   cout<<"\n"<<hechizo[i];
   }
  }

  }



