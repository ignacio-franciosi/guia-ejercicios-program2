#include <iostream>
#include "cronometro.cpp"

using namespace std;


int main()
{
 cronometro c;

 while (c.GetHoras()<1){
    cout<<"Horas :"<<c.GetHoras()<<endl;
    cout<<"Minutos :"<<c.GetMin()<<endl;
    cout<<"Segundos :"<<c.GetSeg()<<endl;
    cout<<endl<<endl;
    ++c;
  }

}
