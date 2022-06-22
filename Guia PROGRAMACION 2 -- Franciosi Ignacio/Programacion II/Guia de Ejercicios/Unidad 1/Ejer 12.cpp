#include <iostream>
#include <math.h>

using namespace std;
void ordenAsc(int z[], int n);

int main()
{
  int N, A[100];
  cout<<"ingrese el valor de N";
  cin>>N;
  for (int i=0;i<N;i++){
    cout<<"Ingrese el valor en la posicion "<<i<<" ";
    cin>>A[i];
  }
  ordenAsc(A,N);
  for (int i=0;i<N;i++){
    cout<<"A["<<i<<"]= "<<A[i]<<endl;
  }
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


