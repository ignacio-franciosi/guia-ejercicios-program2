#include "matriz.h"

matriz::matriz(int f,int c){
 nfil=f;
 ncol=c;
 V=new int* [nfil];
 for (int i=0;i<ncol;i++){
    V[i]=new int [ncol];
  }
}

matriz::matriz(const matriz& z){
  nfil=z.nfil;
  ncol=z.ncol;
  V=new int* [nfil];
  for (int i=0;i<ncol;i++){
    V[i]=new int [ncol];
  }
  for (int i=0;i<nfil;i++){
  for (int j=0;j<ncol;j++){
    V[i][j]=z.V[i][j];
  }
 }
}

void matriz::operator=(matriz x){
  nfil=x.nfil;
  ncol=x.ncol;
  V=new int* [nfil];
  for (int i=0;i<ncol;i++){
    V[i]=new int [ncol];
  }
  for (int i=0;i<nfil;i++){
  for (int j=0;j<ncol;j++){
    V[i][j]=x.V[i][j];
  }
 }
}

matriz matriz::operator+(matriz x){
    int fmin=nfil;
    if (x.nfil<fmin) fmin=x.nfil;
    int cmin=ncol;
    if (x.ncol<cmin) cmin=x.ncol;
    matriz z(fmin,cmin);
    for (int i=0;i<fmin;i++){
     for (int j=0;j<cmin;j++){
        z.V[i][j]=V[i][j]+x.V[i][j];
     }
    }
    return z;
}

matriz matriz::operator-(matriz x){
    int fmin=nfil;
    if (x.nfil<fmin) fmin=x.nfil;
    int cmin=ncol;
    if (x.ncol<cmin) cmin=x.ncol;
    matriz z(fmin,cmin);
    for (int i=0;i<fmin;i++){
     for (int j=0;j<cmin;j++){
        z.V[i][j]=V[i][j]-x.V[i][j];
     }
    }
    return z;
}


int& matriz::operator()(int i, int j){
   return V[i][j];
}


int& matriz::operator[](int i){
   return V[i][i];
}

matriz::~matriz(){
 for (int i=0;i<ncol;i++){
    delete V[i];
  }
delete [] V;
}





