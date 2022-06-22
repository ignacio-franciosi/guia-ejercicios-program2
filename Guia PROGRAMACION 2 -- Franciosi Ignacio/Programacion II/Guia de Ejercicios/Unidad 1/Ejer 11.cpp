#include <iostream>
#include <math.h>

using namespace std;
int contarDistintos(int z[], int n);
bool existe(int x[],int , int );
int main()
{
  int N, A[100];
  cout<<"ingrese el valor de N";
  cin>>N;
  for (int i=0;i<N;i++){
    cout<<"Ingrese el valor en la posicion "<<i<<" ";
    cin>>A[i];
  }
  cout<<"La cantidad de elementos diferentes es "<<contarDistintos(A,N)<<endl;

 }

int contarDistintos(int z[], int n){
 int D[100], nd=0;
 for (int i=0;i<n;i++)
   if (!existe(D,nd,z[i])){
    D[nd]=z[i];
    nd++;
   }
 return nd;
}

bool existe(int x[],int n, int s){
 for (int i=0;i<n;i++){
  if (x[i]==s) return true;
 }
return false;
}

