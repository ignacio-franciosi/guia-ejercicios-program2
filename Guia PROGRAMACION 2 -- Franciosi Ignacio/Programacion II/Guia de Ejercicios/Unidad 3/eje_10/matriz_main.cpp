#include <iostream>
#include "matriz.h"

using namespace std;

int main(){

matriz a(5,5),b(5,5),c(5,5);
for (int i=0;i<5;i++){
 for (int j=0;j<5;j++){
    a(i,j)=i*j;
 }
}
cout<<"\nMatriz a\n";

for (int i=0;i<5;i++){
 for (int j=0;j<5;j++){
    cout<<" "<<a(i,j);
 }
 cout<<"\n";
}

for (int i=0;i<5;i++){
 for (int j=0;j<5;j++){
    b(i,j)=i*j*2;
 }
}

cout<<"\nMatriz b\n";
for (int i=0;i<5;i++){
 for (int j=0;j<5;j++){
    cout<<" "<<b(i,j);
 }
 cout<<"\n";
}

b=a;
cout<<"\nMatriz b=a\n";
for (int i=0;i<5;i++){
 for (int j=0;j<5;j++){
    cout<<" "<<b(i,j);
 }
 cout<<"\n";
}
c=a+b;
cout<<"\nMatriz c=a+b\n";
for (int i=0;i<5;i++){
 for (int j=0;j<5;j++){
    cout<<" "<<c(i,j);
 }
 cout<<"\n";
}
}
