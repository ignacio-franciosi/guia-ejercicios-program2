#include <iostream>
#include <string.h>
using namespace std;
int main()
{
  int *a;
  int n;
  cout<<"Ingrese cantidad de elementos del vector ";
  cin>>n;
  a=new int [n];
  if (a!=NULL){
    for (int i=0;i<n;i++){
        cout<<"ingrese elemento en la posicion "<<i<<" ";
        cin>>a[i];
    }
    for (int i=0;i<n;i++){
        cout<<"\nElemento en la posicion "<<i<<" "<<a[i];
    }
     for (int i=0;i<n;i++){
        cout<<"\nElemento en la posicion "<<i<<" "<<*(a+i);
    }
   }
  else
    cout<<"No hay memoria suficiente";
}




int cuentaVoc (char *p){
int n=strlen(p);
int con=0;
for (int i=0;i<=n;i++){
    if (*(p+i)=='a'||*(p+i)=='e'||*(p+i)=='i'||*(p+i)=='o'||*(p+i)=='u') con++;
 }
 return con;
}

