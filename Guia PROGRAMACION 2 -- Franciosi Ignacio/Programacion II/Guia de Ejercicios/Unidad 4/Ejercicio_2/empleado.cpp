#ifndef __EMPLEADO__
#define __EMPLEADO__
#include "empleado.h"
#endif
#include "string.h"
#include <iostream>
using namespace std;

    Empleado::Empleado(char* n, int e, float s){
     int ln=strlen(n);
     Nombre=new char[ln];
     strcpy(Nombre,n);
     Edad=e;
     Salario=s;
     }
    void Empleado::setNombre(char* n){
     int ln=strlen(n);
     Nombre=new char[ln];
     strcpy(Nombre,n);
    }
    char* Empleado::getNombre(){
        return Nombre;
    }
    void Empleado::setEdad(int e){
        Edad=e;
    }
    int Empleado::getEdad(){
        return Edad;
    }
    void Empleado::setSalario(float s){
        Salario=s;
    }
    float Empleado::getSalario(){
        return Salario;
    }
    void Empleado::verDatos(){
        cout<<"Nombre : "<<Nombre<<endl;
        cout<<"Edad : "<<Edad<<endl;
        cout<<"Salario : "<<Salario<<endl;
    }

