#include "repartidor.h"
#include <iostream>
using namespace std;


    void Repartidor::setZona(int z){
        Zona=z;
    }
    int Repartidor::getZona(){
        return Zona;
    }
    void Repartidor::verDatos(){
        Empleado::verDatos();
        cout<<"Zona : "<<Zona<<endl;

    }
    float Repartidor::sPlus(){
        if (Edad<25 && Zona==3) return 3000;
        return 0;
    }
