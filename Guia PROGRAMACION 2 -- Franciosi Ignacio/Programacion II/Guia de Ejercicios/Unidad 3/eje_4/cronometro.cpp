#include "cronometro.h"

     cronometro::cronometro(){
       horas=0;
       minutos=0;
       segundos=0;
     }
      int cronometro::GetHoras(){
          return horas;
      }
      int cronometro::GetMin(){
          return minutos;
      }
      int cronometro::GetSeg(){
          return segundos;
      };
      void cronometro::SetHoras(int h){
       horas=h;
      }
      void cronometro::SetMin(int m){
       minutos=m%60;
       horas+=m/60;
      }
      void cronometro::SetSeg(int s){
        segundos=s%60;
        minutos+=segundos/60;
     }
      void cronometro::Reset(){
       horas=0;
       minutos=0;
       segundos=0;
     }
      void cronometro::operator ++(){
      segundos++;
      if (segundos>59){
        segundos=0;
        minutos++;
        if (minutos >59){
        minutos=0;
        horas++;
        }
       }
      }
