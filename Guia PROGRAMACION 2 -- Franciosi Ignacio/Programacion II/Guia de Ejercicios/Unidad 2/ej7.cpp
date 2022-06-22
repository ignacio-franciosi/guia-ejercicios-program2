#include <iostream>
#include <string.h>

using namespace std;

void copia (char *,char *);

int main()
{
  char x[50],y[50];
  cin.getline(x,50);
  copia(y,x) ;
  cout<<"x "<<x;
  cout<<"\ny "<<y;
}

void copia (char *p,char *q){
int n=strlen(q);
for (int i=0;i<=n;i++){
    *(p+i)=*(q+i);
   // p[i]=q[i];
 }
}

