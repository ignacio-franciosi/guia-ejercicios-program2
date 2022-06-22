#include <iostream>
#include <math.h>
using namespace std;
int main()
{
  int n,m, A[100][100],aux,pi,pj;
  cout<<"ingrese cantidad de filas"<<endl;
  cin>>n;
  cout<<"ingrese cantidad de columnas"<<endl;
  cin>>m;
  for (int i=0;i<n;i++)
    {
   for (int j=0;j<m;j++)
   {
    cout<<"Ingrese el valor ["<<i<<"]["<<j<<"]: ";
    cin>>A[i][j];
   }
  }
    for (int i=0;i<n;i++)
    {
   for (int j=0;j<m;j++)
   {
    cout<<A[i][j]<<" ";
   }
   cout<<endl;
  }
  cout<<"ingrese posicion en filas:"<<endl;
  cin>>pi;
  cout<<"ingrese posicion en columnas:"<<endl;
  cin>>pj;
  int sum=0;
  int ii=pi-1,iif=pi+1,ji=pj-1,jjf=pj+1;
  if (ii<0) ii=0;
  if (ji<0) ji=0;
  if (iif>n) iif=n-1;
  if (jjf>m) jjf=m-1;
  for (int i=ii;i<=iif;i++)
   for (int j=ji;j<=jjf;j++)
    sum+=A[i][j];
  sum-=A[pi][pj];
  cout<<"La suma de los vecinos del elemento ["<<pi<<"]["<<pj<<"] es "<<sum<<endl;
 }

