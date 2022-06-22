#include <iostream>
#ifndef __EMPLEADO__
#define __EMPLEADO__
#include "empleado.h"
#endif
#include "comercial.h"
#include "repartidor.h"

int main(){

 Empleado E("Juan", 25, 24000);
 Comercial C("Pedro", 21, 23500, 13);
 Repartidor R("Miguel", 20, 21000,3);

 E.verDatos();
 C.verDatos();
 R.verDatos();

}
