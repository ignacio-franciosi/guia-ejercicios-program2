#include "comercial.h"
#include <iostream>
using namespace std;

    void Comercial::setComision(float c){
        Comision=c;
    }
    float Comercial::getComision(){
        return Comision;
    }
    void Comercial::verDatos(){
        Empleado::verDatos();
        cout<<"Comision: "<<Comision<<endl;
    }
    float Comercial::sPlus(){
        if (Edad>30 && Comision>12) return 3000;
        return 0;
    }
