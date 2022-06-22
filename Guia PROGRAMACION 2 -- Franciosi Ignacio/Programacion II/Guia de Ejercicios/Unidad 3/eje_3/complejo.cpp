#include "complejo.h"

   complejo::complejo(){
    real=0;
    imag=0;
   }


   complejo::complejo(float r, float i){
    real=r;
    imag=i;
   }
   void complejo::SetReal(float r){
    real=r;
  }

    void complejo::SetImag(float i){
    imag=i;
   }
   float complejo::GetReal(){
     return real;
   }
   float complejo::GetImag(){
     return imag;
   }
   complejo complejo::operator+(complejo x){
     complejo z(real+x.real,imag+x.imag);
     return z;
   }
   complejo complejo::operator-(complejo x){
     complejo z(real-x.real,imag-x.imag);
     return z;
   }
   complejo complejo::operator*(complejo x){
     complejo z(real*x.real-imag*x.imag, real*x.imag+imag*x.real);
     return z;
   }

   void complejo::conjugado(){
     imag*=-1;
   }
