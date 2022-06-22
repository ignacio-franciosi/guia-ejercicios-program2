#include <iostream>
using namespace std;
bool Perm(int x[100],int);
bool presente(int ,int x[100],int);
int main(){
    int X[100], n;
    cout<<"Ingrese la cantidad de valores ";
    cin>>n;
    for (int i=0; i<n;i++){
     cout<<"Ingrese el valor en la posicion "<<i<< " ";
     cin>>X[i];
    }
    if (Perm(X,n))
        cout<<"El arreglo es una permitacion"<<endl;
    else
        cout<<"El arreglo no es una permitacion"<<endl;
}


bool Perm(int x[100],int n){
 for (int i=1;i<=n;i++)
    if (!presente(i,x,n)) return false;
 return true;
}

bool presente(int k,int x[100],int n){
 for (int i=0;i<n;i++)
    if (x[i]==k) return true;
 return false;
}
