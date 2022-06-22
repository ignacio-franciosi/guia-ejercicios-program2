#include <iostream>
#include <string.h>
using namespace std;
int cuentaVoc (char *);
int main()
{
  char x[50];
  cin.getline(x,50);
  cout<<"En la cadena hay "<<cuentaVoc(x)<<" Vocales";
}

int cuentaVoc (char *p){
int n=strlen(p);
int con=0;
for (int i=0;i<=n;i++){
    if (*(p+i)=='a'||*(p+i)=='e'||*(p+i)=='i'||*(p+i)=='o'||*(p+i)=='u')
        con++;
 }
 return con;
}

