#include <iostream>
#include "fecha.h"

using namespace std;


int main() {
   int d, m, a, ig=0;
   Fecha f1(1,1, 2010) ;
   cout<<"\n"<<"fecha uno "<<f1.getDia()<<"/"<<f1.getMes()<<"/"<<f1.getAnio();
   --f1;
   cout<<"\n"<<"fecha uno menos 1 dia"<<f1.getDia()<<"/"<<f1.getMes()<<"/"<<f1.getAnio();
   ++f1;
   cout<<"\n"<<"fecha uno mas un dia"<<f1.getDia()<<"/"<<f1.getMes()<<"/"<<f1.getAnio();
   Fecha f2=f1+20;
   cout<<"\n"<<"fecha uno mas 20 dias "<<f2.getDia()<<"/"<<f2.getMes()<<"/"<<f2.getAnio();
   Fecha f3=f1-15;
   cout<<"\n"<<"fecha uno menos 15 dias "<<f3.getDia()<<"/"<<f3.getMes()<<"/"<<f3.getAnio();

}
   /*
   Fecha F;
   while(!ig){
   cout<<"\nIngresar dia ";
   cin>>d;
   cout<<"\nIngresar mes ";
   cin>>m;
   cout<<"\nIngresar Anio ";
   cin>>a;
   F.setDia(d);
   F.setMes(m);
   F.setAnio(a);
   if (!F.valida()){
    cout<<"La fecha ingresada no es correcta\nIngresar nuevamente";
   }
   ig=F.valida();
   }
   cout<<"\n"<<F.getDia()<<"/"<<F.getMes()<<"/"<<F.getAnio();

}
*/
