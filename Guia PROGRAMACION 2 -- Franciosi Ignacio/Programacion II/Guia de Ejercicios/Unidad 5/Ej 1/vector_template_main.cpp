#include <iostream>
#include "../practico 3/eje_1/fecha.cpp"
#include "../practico 3/eje_2/racional.cpp"
#include "vector_template.cpp"

using namespace std;

int main(){
vector<int> a(10),b(10),c(10);

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

vector<float> af(10),bf(10),cf(10);

for (int i=0;i<10;i++){
    af[i]=i*2.5;
}
cout<<"\nVector af";

for (int i=0;i<10;i++){
    cout<<"\n"<<af[i];
}

for (int i=0;i<10;i++){
    bf[i]=i*1.6;
}
cout<<"\nVector bf";
for (int i=0;i<10;i++){
    cout<<"\n"<<bf[i];
}
cf=af+bf;
cout<<"\nVector cf=af+bf";
for (int i=0;i<10;i++){
    cout<<"\n"<<cf[i];
}
cf=af-bf;
cout<<"\nVector cf=af-bf";
for (int i=0;i<10;i++){
    cout<<"\n"<<cf[i];
}

vector<Fecha> f1(10),f2(10),f3(10);
cout<<"\nVector de fechas f1\n";
for (int i=0;i<10;i++){
   cout<< f1[i].getDia()<<"/"<<f1[i].getMes()<<"/"<<f1[i].getAnio()<<endl;
}
cout<<"\nVector de fechas f2\n";
for (int i=0;i<10;i++){
   cout<< f2[i].getDia()<<"/"<<f2[i].getMes()<<"/"<<f2[i].getAnio()<<endl;
}

for (int i=0;i<10;i++){
    f1[i]=f2[i]+i*10;
}
cout<<"\nVector de fechas f1 modificado\n";
for (int i=0;i<10;i++){
   cout<< f1[i].getDia()<<"/"<<f1[i].getMes()<<"/"<<f1[i].getAnio()<<endl;
}
cout<<"\nVector de fechas f2 sin modificar\n";
for (int i=0;i<10;i++){
   cout<< f2[i].getDia()<<"/"<<f2[i].getMes()<<"/"<<f2[i].getAnio()<<endl;
}

vector<racional> r1(10),r2(10),r3(10);

for (int i=0;i<10;i++){
   r1[i].setNum(i*10);
   r1[i].setDen(i+10);
}
cout<<"\nVector de racionales r1 \n";
for (int i=0;i<10;i++){
   cout<< r1[i].getNum()<<"/"<<r1[i].getDen()<<endl;
}

for (int i=0;i<10;i++){
   r2[i].setNum(i+10);
   r2[i].setDen((i+1)+5);
}
cout<<"\nVector de racionales r2 \n";
for (int i=0;i<10;i++){
   cout<< r2[i].getNum()<<"/"<<r2[i].getDen()<<endl;
}
r3=r1+r2;
cout<<"\nVector de racionales r3=r1+r2 \n";
for (int i=0;i<10;i++){
   cout<< r3[i].getNum()<<"/"<<r3[i].getDen()<<endl;
}

}
