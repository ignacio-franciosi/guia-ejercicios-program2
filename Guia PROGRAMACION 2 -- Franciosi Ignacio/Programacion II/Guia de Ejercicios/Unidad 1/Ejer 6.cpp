#include <iostream>
#include <math.h>

using namespace std;
bool esSemiPrimo(int);
bool esPrimo(int);

int main()
{
   int X;
   cout<<"Ingrese el numero ";
   cin>>X;
   if (esSemiPrimo(X))
     cout<<"El numero es semiprimo";
   else
     cout<<"El numero no es semiprimo";
}

bool esSemiPrimo(int a)
{
  int r;
  for (int i=2;i<a;i++){
    r=a/i;
    if (a%i==0 && esPrimo(i) && esPrimo(r)){
        cout<<"Producto de "<<r<<" "<<i<<endl;
        return true;
    }
  }
  return false;
}


bool esPrimo(int x){
    for (int i=2;i<=sqrt(x);i++){
         if (x%i==0)  return false;
    }
    return true;
}

