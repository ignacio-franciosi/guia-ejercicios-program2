#include <iostream>
#include <math.h>

using namespace std;
int buscar(int x[],int , int );
int main()
{
  int N, A[100],k;
  cout<<"ingrese el valor de N";
  cin>>N;
  for (int i=0;i<N;i++){
    cout<<"Ingrese el valor en la posicion "<<i<<" ";
    cin>>A[i];
  }
  cout<<"Ingrese el numero a buscar ";
  cin>>k;
  int pos=buscar(A,N , k );
  if (pos==-1)
     cout<<"El numero  "<<k<<" no esta presente en el arreglo"<<endl;
  else
    cout<<"El numero  "<<k<<" se encuentra en la posicion "<<pos<<endl;
}


int buscar(int x[],int n, int s){
 for (int i=0;i<n;i++){
  if (x[i]==s) return i;
 }
return -1;
}

