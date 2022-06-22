#include <math.h>
#include "racional.h"

   racional::racional(){
    num=0;
    den=1;
    error=0;
   }
   racional::racional(int n, int d){
    num=n;
    den=d;
    if (den!=0) error=0;
    else error=1;
   }
   void racional::setNum(int n){
    num=n;
   }
   int racional::getNum(){
    return num;
   }
   void racional::setDen(int d){
     den=d;
     if (den!=0) error=0;
     else error=1;
   }
   int racional::getDen(){
    return den;
   }
   int racional::getError(){
    return error;
   }
   void racional::operator++(){
    num+=den;
    simplifica();
    }
   void racional::operator--(){
      num-=den;
      simplifica();
    }
   racional racional::operator+(racional x){
     racional z(num*x.den+den*x.num, den*x.den);
     z.simplifica();
     return z;
   }
   racional racional::operator-(racional x){
     racional z(num*x.den-den*x.num, den*x.den);
     z.simplifica();
     return z;
   }
   void racional::operator+=(int x){
    num+=x*den;
    simplifica();
   }
   void racional::operator-=(int x){
    num-=x*den;
    simplifica();
   }
   void racional::simplifica(){
   int d=MCD();
   num/=d;
   den/=d;
   }
   int racional::operator==(racional z){
    return num*z.den==den*z.num;
   }

   int racional::MCD(){
    int a,b,aux,r;
    a=num; b=den;
    if (a<0) a*=-1;
    if (b<0) b*=-1;
    if (b>a) {
       aux=a;
       a=b;
       b=aux;
    }
    r=a%b;
    while (r!=0){
        a=b;
        b=r;
        r=a%b;
     }
     return b;
   }

