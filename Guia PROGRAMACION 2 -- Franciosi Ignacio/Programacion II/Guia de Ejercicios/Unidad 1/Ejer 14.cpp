#include <iostream>
#include <math.h>

using namespace std;
void ordenAsc(int z[], int n);
bool esTriangular(int z[], int );

int main()
{
  int N, A[100];
  cout<<"ingrese el valor de N";
  cin>>N;
  for (int i=0;i<N;i++){
    cout<<"Ingrese el valor en la posicion "<<i<<" ";
    cin>>A[i];
  }
  if (esTriangular(A,N))
        cout<<"Existe un triplete triangular ";
  else
         cout<<"No existe un triplete triangular ";
}

bool esTriangular(int z[], int n){
  ordenAsc(z,n);
  for (int i=2;i<n;i++){
      if (z[i]>z[i-2]+z[i-1]) return true;
  }
   return false;
}

void ordenAsc(int z[], int n){
 int cambio=1,aux;
 while (cambio){
 cambio=0;
 for (int i=0;i<n-1;i++){
   if (z[i]>z[i+1]) {
    aux=z[i];
    z[i]=z[i+1];
    z[i+1]=aux;
    cambio=1;
   }
 }
}
}


