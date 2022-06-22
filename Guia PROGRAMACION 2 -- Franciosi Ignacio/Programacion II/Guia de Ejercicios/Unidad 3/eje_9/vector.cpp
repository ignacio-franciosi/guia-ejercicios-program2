#include "vector.h"

vector::vector(int t){
 tam=t;
 V=new int [t];
}

vector::vector(const vector& z){
 tam=z.tam;
 V=new int [tam];
 for (int i=0;i<tam;i++){
      V[i]=z.V[i];
  }
}

void vector::operator=(vector x){
 tam=x.tam;
 V=new int [tam];
 for (int i=0;i<tam;i++){
    V[i]=x[i];
  }
}

vector vector::operator+(vector x){
    int tmin=tam;
    if (x.tam<tmin) tmin=x.tam;
    vector z(tmin);
    for (int i=0;i<tmin;i++){
        z[i]=V[i]+x[i];
    }
    return z;
}

vector vector::operator-(vector x){
    int tmin=tam;
    if (x.tam<tmin) tmin=x.tam;
    vector z(tmin);
    for (int i=0;i<tmin;i++){
        z.V[i]=V[i]-x.V[i];
    }
    return z;
}

int vector::operator*(vector x){
    int z=0,tmin=tam;
    if (x.tam<tmin) tmin=x.tam;
   for (int i=0;i<tmin;i++){
        z+=V[i]*x.V[i];
    }
    return z;

}

int& vector::operator[](int i){
   return V[i];
}

vector::~vector(){
  delete [] V;
}




