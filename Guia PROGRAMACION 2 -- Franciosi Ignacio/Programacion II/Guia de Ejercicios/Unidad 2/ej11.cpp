#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main()
{
  float *a,ma,mi,sum;
  int n;
  cout<<"Ingrese cantidad de elementos del vector ";
  cin>>n;
  a=new float [n];
  for (int i=0;i<n;i++){
        cout<<"ingrese elemento en la posicion "<<i<<" ";
        cin>>a[i];
    }
    ma=mi=sum=a[0];
    for (int i=1;i<n;i++){
      if (a[i]>ma) ma=a[i];
      if (a[i]<mi) mi=a[i];
      sum+=a[i];
    }
    sum/=n;
    cout<<"\nMaximo "<<ma;
    cout<<"\nMinimo "<<mi;
    cout<<"\nMedia "<<sum;
}

