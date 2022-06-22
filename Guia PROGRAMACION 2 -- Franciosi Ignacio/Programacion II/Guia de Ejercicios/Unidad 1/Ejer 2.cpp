#include <iostream>

using namespace std;
int cantidadMultiplos(int, int, int);

int main()
{
   int A, B, K;
   cout<<"Ingrese el valor A ";
   cin>>A;
   do{
   cout<<"Ingrese el valor B ";
   cin>>B;
   } while (B<A);
   cout<<"Ingrese el valor K ";
   cin>>K;
   cout<<"El numero multiplos entre "<<A<<" y "<<B<<" es "<<cantidadMultiplos(A,B,K)<<endl;
 }

int cantidadMultiplos(int n1, int n2, int n3)
 {
   int c=0;
   for (int i=n1; i<=n2;i++){
    if (i%n3==0) c++;
   }
   return c;
 }
