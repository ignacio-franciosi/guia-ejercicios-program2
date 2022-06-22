#include <iostream>
#include "conjunto.h"

using namespace std;

int main(){

conjunto a(10),b(10),c(10);
for (int i=0;i<5;i++)
  a.agregar(i*3);

cout<<"\nConjunto a";
a.Mostrar();


for (int i=0;i<3;i++){
    b.agregar(i);
}
cout<<"\nConjunto b";
b.Mostrar();


c=a+b;
cout<<"\nConjunto c=a+b";
c.Mostrar();

c=a-b;
cout<<"\nConjunto c=a-b";
c.Mostrar();

c=a*b;
cout<<"\nConjunto c=a*b";
c.Mostrar();


}
