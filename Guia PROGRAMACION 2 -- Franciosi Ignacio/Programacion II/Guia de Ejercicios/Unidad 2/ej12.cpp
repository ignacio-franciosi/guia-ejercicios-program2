#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main()
{
  float **a;
  int n,m;
  cout<<"Ingrese cantidad de filas ";
  cin>>n;
  cout<<"Ingrese cantidad de columnas ";
  cin>>m;
  a=new float* [n];
  for (int i=0;i<n;i++){
         a[i]=new float [m];
    }
  for (int i=0;i<n;i++){
   for (int j=0;j<m;j++){
        cout<<"ingrese elemento en la fila "<<i<<" columna"<<j<<" ";
        cin>>a[i][j];
    }
  }
  for (int i=0;i<n;i++){
   for (int j=0;j<m;j++){
        cout<<"\nElemento en la fila "<<i<<" columna"<<j<<" "<<a[i][j];
    }
  }
}

