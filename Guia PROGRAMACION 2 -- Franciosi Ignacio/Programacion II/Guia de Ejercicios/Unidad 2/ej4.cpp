#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main()
{
  int a[15];
  srand (time(NULL));
  for (int i=0;i<15;i++){
    a[i]=rand()%100;
   }
  cout<<"\nCon notacion de arreglo\n";
  for (int i=0;i<15;i++){
   cout<<"Direccion de memoria : "<< &a[i];
   cout<<" Valor del arreglo : "<<a[i]<<"\n";
   }
 cout<<"\nCon aritmetica de punteros\n";
  for (int i=0;i<15;i++){
   cout<<"Direccion de memoria : "<< a+i;
   cout<<" Valor del arreglo : "<<*(a+i)<<"\n";
   }
}




