#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;
void ordenar(int *, int);
int main()
{
  int *a;
  int x[10];
  int n;
  srand (time(NULL));
  cout<<"Ingrese cantidad de elementos del vector ";
  cin>>n;
  a=new int [n];
  if (a!=NULL){
   for (int i=0;i<n;i++){
    a[i]=rand()%100;
   }
   ordenar(a,n);
   for (int i=0;i<n;i++){
        cout<<"\nElemento en la posicion "<<i<<" "<<a[i];
    }
   for (int i=0;i<n;i++){
        cout<<"\nElemento en la posicion "<<i<<" "<<*(a+i);
    }
  }
  else
    cout<<"No hay memoria suficiente";
}
void ordenar(int *v, int n)
{
int cont=1,aux;
while (cont){
  cont=0;
  for (int i=0;i<n-1;i++){
   if (v[i]>v[i+1])
    {
    aux=v[i];
    v[i]=v[i+1];
    v[i+1]=aux;
    cont=1;
   }
 }
}
}

