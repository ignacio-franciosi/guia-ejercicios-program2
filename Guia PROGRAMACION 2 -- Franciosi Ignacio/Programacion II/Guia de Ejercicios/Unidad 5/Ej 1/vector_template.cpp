#include "vector_template.h"

template<class T>
vector<T>::vector(int t){
 tam=t;
 V=new T [tam];
}

template<class T>
vector<T>::vector(const vector<T> &z){
 tam=z.tam;
 V=new T [tam];
 for (int i=0;i<tam;i++){
    V[i]=z.V[i];
  }
}

template<class T>
void vector<T>::operator=(vector<T> x){
 tam=x.tam;
 V=new T [tam];
 for (int i=0;i<tam;i++){
    V[i]=x.V[i];
  }
}

 template<class T>
vector<T> vector<T>::operator+(vector<T> x){
    int tmin=tam;
    if (x.tam<tmin) tmin=x.tam;
    vector z(tmin);
    for (int i=0;i<tmin;i++){
        z.V[i]=V[i]+x.V[i];
    }
    return z;
}

template<class T>
vector<T> vector<T>::operator-(vector<T> x){
    int tmin=tam;
    if (x.tam<tmin) tmin=x.tam;
    vector z(tmin);
    for (int i=0;i<tmin;i++){
        z.V[i]=V[i]-x.V[i];
    }
    return z;
}




template<class T>
T &vector<T>::operator[](int i){
   return V[i];
}

template<class T>
vector<T>::~vector(){
  delete [] V;
}





