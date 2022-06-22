#include <iostream>
#include <math.h>

#include "complejo.cpp"

using namespace std;


int main()
{
 complejo c1(2,3), c2(-2,5), c3(1,3);

 cout<<"c1 = "<<c1.GetReal()<<" + "<<c1.GetImag()<<endl;
 cout<<"c2 = "<<c2.GetReal()<<" + "<<c2.GetImag()<<endl;
 cout<<"c3 = "<<c3.GetReal()<<" + "<<c3.GetImag()<<endl;
 complejo c4=c1+c2;
 cout<<"c4 = "<<c4.GetReal()<<" + "<<c4.GetImag()<<endl;
 complejo c5=c1-c2;
 cout<<"c5 = "<<c5.GetReal()<<" + "<<c5.GetImag()<<endl;
 complejo c6=c1*c2;
 cout<<"c6 = "<<c6.GetReal()<<" + "<<c6.GetImag()<<endl;

}
