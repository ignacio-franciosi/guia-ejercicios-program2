#include <iostream>
#include <string.h>

using namespace std;
void mayusculas (char *);

int main()
{
  char x[10];
  cin.getline(x,10);
  mayusculas(x);
  cout<<x;
}

void mayusculas (char *p){
int n=strlen(p);
cout<<"La longitude de la cadena recibida es "<<n<<"\n";
for (int i=0;i<n;i++){
  //     p[i]=toupper(p[i]);
    *(p+i)=toupper(*(p+i));
}
}

