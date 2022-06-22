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
  for (int i=0;i<N/2;i++){
   aux=A[i];
   A[i]=A[N-i-1];
   A[N-i-1]=aux;
  }
  for (int i=0;i<N;i++){
    cout<<A[i]<<endl;
  }

}

