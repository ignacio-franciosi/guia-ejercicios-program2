#include <iostream>
using namespace std;
int main() {
   int   *p,i,a[5];
   for (i=0;i<5;i++){
    cout<<"Ingrese a["<<i<<"] :";
    cin>>a[i];
   }
cout<<"\nCon notacion de arreglos"<<endl;
  for ( i=0;i<5;i++){
    cout<<"\nDireccion a["<<i<<"] :"<<&a[i];
    cout<<"\nContenido a["<<i<<"] :"<<a[i];
   }
cout<<"\n\nCon notacion de aritmetica de punteros"<<endl;
for ( i=0;i<5;i++){
    cout<<"\nDireccion a["<<i<<"] :"<<a+i;
    cout<<"\nContenido a["<<i<<"] :"<<*(a+i);
   }
cout<<"\n\nCon notacion de aritmetica de punteros 2"<<endl;
p=&a[0];
for ( i=0;i<5;i++){
    cout<<"\nDireccion a["<<i<<"] :"<<p+i;
    cout<<"\nContenido a["<<i<<"] :"<<*(p+i);
   }
}
