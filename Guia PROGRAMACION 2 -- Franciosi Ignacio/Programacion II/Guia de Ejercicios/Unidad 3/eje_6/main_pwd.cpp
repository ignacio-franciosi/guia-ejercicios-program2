#include "pwd.cpp"
#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int lpw=10,continuar=1;
    password uno(lpw);
    while (continuar)
    {
    uno.generarPassword();
    cout<<"\n"<<uno.getClave();
    if (!uno.esFuerte()){
            lpw++;
            uno.setLongitud(lpw);
        }
    else continuar=0;
    }
    cout<<endl<<"Longitud "<<uno.getLongitud()<<endl;
 }
