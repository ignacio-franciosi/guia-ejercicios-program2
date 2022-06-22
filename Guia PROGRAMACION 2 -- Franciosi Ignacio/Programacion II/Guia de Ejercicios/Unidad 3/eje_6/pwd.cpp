#include "pwd.h"
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */

using namespace std;

password::password(){
  longitud=9;
  clave=new char[longitud];
  creaListCar();
 }

password::password(int l){
  if (l<8) l=8;
  longitud=l+1;
  clave=new char[longitud];
  creaListCar();
}

 void password::creaListCar(){
  int j=0;
  for (int i=48;i<123;i++){
    listCar[j]=i;
    if (i==57) i=64;
    if (i==90) i=96;
    j++;
   }
 }

void password::generarPassword(){
    int j,i;
    srand(time(NULL));
    for ( i=0;i<longitud-1;i++){
        j=rand()%62;
        clave[i]=listCar[j];
    }
    clave[i]='\0';
}

void password::setLongitud(int l){
  delete []clave;
  longitud=l+1;
  clave=new char[longitud];
}

int password::getLongitud(){
return longitud-1;
}
char* password::getClave(){
 return clave;
}

int password::esFuerte(){
  /*Para que sea fuerte debe tener más de 2 mayúsculas, más de
  1 minúscula y más de 5 números.*/
 int contMay=0,contMin=0, contNum=0;
 for (int i=0;i<longitud; i++){
   if (clave[i]>='A' &&  clave[i]<='Z') contMay++;
   if (clave[i]>='a' &&  clave[i]<='z') contMin++;
   if (clave[i]>='0' &&  clave[i]<='9') contNum++;
 }
 if (contMay>2 && contMin>1 && contNum>5) return 1;
 return 0;

}
