#include <iostream>
#include <string.h>
using namespace std;
void invertir (char *);
int main()
{
  char x[50];
 cout<<"Ingrese la cadena que desea invertir"<<endl;
 cin.getline(x,50);
  //cin>>x;
  invertir(x);
  cout<<"La cadena invertida es: "<<x;
}
void invertir (char *p){
int n=strlen(p);
char aux;
for (int i=0;i<n/2;i++){
     aux=*(p+i);
    *(p+i)=*(p+n-i-1);
    *(p+n-i-1)=aux;
 }
}
    // cout<<*(p+i)<<" "<<*(p+n-i-1)<<"\n";
//   aux=p[i];
 //   p[i]=p[n-i-1];
  //  p[n-i-1]=aux;

