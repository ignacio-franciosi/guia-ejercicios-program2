#include "fecha.h"

Fecha::Fecha(){
  dia=1;
  mes=1;
  anio=1900;
}

Fecha::Fecha(int d, int m, int a){
  dia=d;
  mes=m;
  anio=a;
}



void Fecha::setDia(int d)
{
    dia=d;
}
void Fecha::setMes(int m)
{
    mes=m;
}
void Fecha::setAnio(int a)
{
    anio=a;
}

int Fecha::getDia()
{
    return dia;
}
int Fecha::getMes()
{
    return mes;
}
int Fecha::getAnio()
{
    return anio;
}

int Fecha::valida()
{
    if (dia<1 ||dia>31 ||mes<1 ||mes>12) return 0;
    if (dia>30 && (mes==4||mes==6||mes==9||mes==11)) return 0;
    if (dia>29 && mes==2) return 0;
    if (dia>28 && mes==2 && anio%4!=0) return 0;
    return 1;
}

void Fecha::operator ++(){
  dia++;
  if (!valida()){
    dia=1;
    mes++;
    if (!valida()){
        mes=1;
        anio++;
    }
   }
}

void Fecha::operator --(){
  dia--;
  if (!valida()){
    dia=dias(mes-1);
    mes--;
    if (!valida()){
        mes=12;
        anio--;
    }
   }
}

int Fecha::dias(int m){
    switch (m) {
    case 0:
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12: return 31;
             break;
    case 4:
    case 6:
    case 9:
    case 11: return 30;
             break;
    case 2:  if (anio%4==0) return 29; else return 28;
             break;

    }
}

Fecha Fecha::operator +(int d){
    Fecha fx(dia,mes, anio);
    for (int i=0;i<d;i++)
        ++fx;
    return fx;
}

Fecha Fecha::operator -(int d){
    Fecha fx(dia,mes, anio);
    for (int i=0;i<d;i++)
        --fx;
    return fx;
}
