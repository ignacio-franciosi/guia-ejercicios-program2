#include <iostream>

using namespace std;
int factorial(int);

int main()
{
   int Num;
   cout<<"Ingrese un numero ";
   cin>>Num;

   if (Num>0){
    cout<<"El factorial de "<<Num<<" es "<<factorial(Num)<<endl;
    }
   else{
    cout<<"Factorial no definido"<<endl;
   }
 }

int factorial(int a)
{
     if (a==0) return 1;
     return a*factorial(a-1);
}
