#include <iostream>
#include <math.h>

using namespace std;

int main()
{
   int p[100], gr,x,s=0;
   cout<<"Ingrese el grado del polinomio ";
   cin>>gr;
   for (int i=0;i<=gr;i++){
    cout<<"Ingrese el coeficiente de grado "<<i<<" ";
    cin>>p[i];
   }
   cout<<"Ingrese el valor en el cual evaluar el polinomio ";
   cin>>x;
   for (int i=0;i<=gr;i++)
        s+=p[i]*pow(x,i);
    cout<<"El polinomio evaluado en el valor "<<x<<" "<<s<<endl;
 }


