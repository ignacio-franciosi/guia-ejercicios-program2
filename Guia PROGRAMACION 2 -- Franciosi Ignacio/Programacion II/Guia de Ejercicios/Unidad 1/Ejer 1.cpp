#include <iostream>

using namespace std;
int CalculoSaltos(int, int, int);

int main()
{
   int X, Y, D;
   cout<<"Ingrese posicion inicial ";
   cin>>X;
   do{
   cout<<"Ingrese posicion final ";
   cin>>Y;
   } while (Y<X);
   cout<<"Ingrese longitud del salto ";
   cin>>D;
   cout<<"El numero minimo de saltos es "<<CalculoSaltos(X,Y,D)<<endl;
 }

int CalculoSaltos(int x, int y, int d)
 {
   int ns=(y-x)/d;
   if ((y-x)%d>0) ns++;
   return ns;
 }
