#include <iostream>
#include <math.h>

using namespace std;
void cambio(int&, int&);

int main()
{
   int X,Y;
   cout<<"Ingrese el valor de X ";
   cin>>X;
   cout<<"Ingrese el valor de Y ";
   cin>>Y;
   cambio(X,Y);
   cout<<"Valor de X "<<X<<endl;
   cout<<"Valor de Y "<<Y<<endl;
}
void cambio(int& a, int& b){
 int aux=a;
 a=b;
 b=aux;
}


