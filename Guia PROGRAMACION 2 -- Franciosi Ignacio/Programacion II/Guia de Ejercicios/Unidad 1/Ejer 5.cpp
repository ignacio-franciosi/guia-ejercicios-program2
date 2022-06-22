#include <iostream>
#include <math.h>
using namespace std;
bool igualDivPrim(int, int);
void divisoresPrimos(int ,int r[100], int &);
bool esPrimo(int);
bool presente(int r[100],int ,int );
int main()
{
   int N,M;
   cout<<"Ingrese el primer numero ";
   cin>>N;
   cout<<"Ingrese el segundo numero ";
   cin>>M;
   if (igualDivPrim(N,M))
     cout<<"Tienen los mismos divisores primos";
   else
     cout<<"No tienen los mismos divisores primos";
}
bool igualDivPrim(int a, int b)
{
    int da[100], db[100], na, nb;
    cout<<" Divisores de "<<a<<endl;
    divisoresPrimos(a,da, na);
    for (int i=0;i<na;i++)
       cout<<" da "<<da[i]<<endl;

    cout<<" Divisores de "<<b<<endl;
    divisoresPrimos(b,db, nb);
    for (int i=0;i<nb;i++)
       cout<<" db "<<db[i]<<endl;

    if (na!=nb) return false;
    for (int i=0;i<na;i++)
        if (da[i]!=db[i]) return false;
    return true;
}
void divisoresPrimos(int nu,int r[100], int &n){
     n=0;
     for (int i=2;i<nu;i++){
       if (nu%i==0 && esPrimo(i)){ //&& !presente(r,n,i)){
        r[n]=i;
        n++;
      }
    }
}
bool esPrimo(int x){
    for (int i=2;i<=sqrt(x);i++){
         if (x%i==0)  return false;
    }
    return true;
}
bool presente(int r[100],int n,int ni){
    for (int i=0;i<=n;i++){
         if (r[i]==ni)  return true;
    }
    return false;
}
