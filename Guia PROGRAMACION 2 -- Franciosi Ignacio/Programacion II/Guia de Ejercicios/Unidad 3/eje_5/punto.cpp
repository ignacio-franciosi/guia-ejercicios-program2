#include <math.h>
#include "punto.h"

    punto::punto(){
      cx=0;
      cy=0;
     }
    punto::punto(int x, int y){
      cx=x;
      cy=y;
     }
    void punto::SetX(int x){
      cx=x;
      }
    void punto::SetY(int y){
       cy=y;
     }
    int punto::GetX(){
     return cx;
    }
    int punto::GetY(){
     return cy;
    }
    void punto::operator++(){
     cx++;cy++;
    }

    void punto::operator--(){
     cx--;cy--;
    }
   punto punto::operator+(punto q){
        punto z(cx+q.cx,cy+q.cy);
        return z;
    }
    punto punto::operator+(int j){
        punto z(cx+j,cy+j);
        return z;
    }
    punto punto::operator-(punto q){
        punto z(cx-q.cx,cy-q.cy);
        return z;
    }
    punto punto::operator-(int j){
        punto z(cx-j,cy-j);
        return z;
    }
    float punto::angulo(){
       return atan(cy/cx);
    }
    float punto::modulo(){
        return sqrt(cx*cx+cy*cy);
    }
