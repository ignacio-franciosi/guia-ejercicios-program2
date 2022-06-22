#include "persona.h"
#include <iostream>

using namespace std;

int main(){

Fecha f(10,2,2005),f1(15,10,1999);
persona p();
persona a("Juan",f,'H' );
persona b("Pedro",f1,1111111,'H',80,1.70);
cout<<"\n"<<"Persona a "<<endl;
cout<<"Nombre "<<a.getNombre()<<endl;
cout<<"Fecha de Nacimiento "<<a.getFnac().getDia()<<"/"<<a.getFnac().getMes()<<"/"<<a.getFnac().getAnio()<<endl;

cout<<"\n"<<"Persona b "<<endl;
cout<<"Nombre "<<b.getNombre()<<endl;
cout<<"Fecha de Nacimiento "<<b.getFnac().getDia()<<"/"<<b.getFnac().getMes()<<"/"<<b.getFnac().getAnio()<<endl;
cout<<"DNI "<<b.getDNI()<<endl;


}
