#include <iostream>
#include "vector.h"

using namespace std;

int main(){


vector a(10),b(10),c(10);


for (int i=0;i<10;i++){
    a[i]=i*2;
}
cout<<"\nVector a";

for (int i=0;i<10;i++){
    cout<<"\n"<<a[i];
}
for (int i=0;i<10;i++){
    b[i]=i*3;
}
cout<<"\nVector b";
for (int i=0;i<10;i++){
    cout<<"\n"<<b[i];
}
b=a;
cout<<"\nVector b=a";
for (int i=0;i<10;i++){
    cout<<"\n"<<b[i];
}
c=a+b;
cout<<"\nVector c=a+b";
for (int i=0;i<10;i++){
    cout<<"\n"<<c[i];
}
c=a-b;
cout<<"\nVector c=a-b";
for (int i=0;i<10;i++){
    cout<<"\n"<<c[i];
}
int p=a*b;
cout<<"\nProducto escalar "<<p;

}
