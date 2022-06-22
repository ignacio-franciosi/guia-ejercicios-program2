#include <iostream>

using namespace std;
int MCD(int, int);

int main()
{
   int N, M,aux;
   cout<<"Ingrese el primer numero ";
   cin>>N;
   cout<<"Ingrese el segundo numero ";
   cin>>M;
   if (N>M){
    aux=M;
    M=N;
    N=aux;
   }
   cout<<"El maximo comun divisor entre "<<M<<" y "<<N<<" es "<<MCD(M,N)<<endl;
 }

int MCD(int a, int b)
{
    int r=a%b;
    while (r!=0){
        a=b;
        b=r;
        r=a%b;
    }
    return b;
}


/*

int MCD(int a, int b)
{
     if (a%b==0) return b;
     return MCD(b, a%b);
}
*/
