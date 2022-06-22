#include <iostream>
#include <math.h>

#include "racional.h"

using namespace std;


int main()
{
 racional a1(1,2), b1(4,8),a2;
 a2=a1;
 if (a1==b1)
    cout<<"\n a1 y b1 son Iguales\n";
 else
    cout<<"\na1 y b1 son Diferentes\n";

 racional a(1,2), b(3,2);
 cout<<"a = "<<a.getNum()<<"/"<<a.getDen()<<"\n";
 cout<<"\n a2 = "<<a2.getNum()<<"/"<<a2.getDen()<<"\n";;
 cout<<"b = "<<b.getNum()<<"/"<<b.getDen()<<"\n";
 racional c=a+b;
 cout<<"c = "<<c.getNum()<<"/"<<c.getDen()<<"\n";
 ++a;
 cout<<"a = "<<a.getNum()<<"/"<<a.getDen()<<"\n";
 cout<<"b = "<<b.getNum()<<"/"<<b.getDen()<<"\n";
 if (a==b)
    cout<<"\nIguales\n";
 else
    cout<<"\nDiferentes\n";
 --b;
 cout<<"b = "<<b.getNum()<<"/"<<b.getDen()<<"\n";
 a+=4;
 cout<<"a = "<<a.getNum()<<"/"<<a.getDen()<<"\n";
 b-=2;
 cout<<"b = "<<b.getNum()<<"/"<<b.getDen()<<"\n";
 }
