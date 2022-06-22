#include <iostream>
#include <math.h>

using namespace std;

int main()
{
  int N, A[100],aux;
  cout<<"ingrese el valor de N";
  cin>>N;
  for (int i=0;i<N;i++){
    cout<<"Ingrese el valor en la posicion "<<i<<" ";
    cin>>A[i];
  }
  int i1=0,i2=N-1;
  while (i1<i2){
    if (A[i1]%2!=0){
        i1++;
    }
    else{
        aux=A[i2];
        A[i2]=A[i1];
        A[i1]=aux;
        i2--;
    }
  }
  for (int i=0;i<N;i++){
    cout<<"Valor en la posicion "<<i<<" = "<<A[i]<<endl;
  }
}

