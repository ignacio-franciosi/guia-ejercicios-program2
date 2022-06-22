#include <iostream>
using namespace std;

int main() {
   int  *p,*q, i,a[5];
   long d;
   for (i=0;i<5;i++){
    cout<<"Ingrese a["<<i<<"] :";
    cin>>a[i];
   }
  for ( i=0;i<5;i++){
    cout<<"\nDireccion a["<<i<<"] :"<<&a[i];
    cout<<"\nContenido a["<<i<<"] :"<<a[i];
   }
   p=&a[0];
   q=&a[4];
   cout<<"\nDireccion a[0] :"<<p;
   cout<<"\nDireccion a[4] :"<<q;
   d=q-p;
   cout<<"\nDistancia  :"<<d;
}
