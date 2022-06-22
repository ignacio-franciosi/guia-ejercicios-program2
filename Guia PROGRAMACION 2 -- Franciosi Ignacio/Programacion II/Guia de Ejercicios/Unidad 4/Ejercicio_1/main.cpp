#include <iostream>
#include <winbgim.h>
#include "../punto.h";
#include "../circulo.h";
#include "../poligono.h";

using namespace std;

int main()
{
initwindow (1200,700);
Punto P1(20,70);
Circulo C1(100,100,40);
Poligono Pol1(200,200,120, 6);
int rad,c;

for (int i=1;i<=15;i++)
 {
  setcolor(i);
  P1.mostrar();
  C1.mostrar();
  Pol1.mostrar();
  getch();
  P1.ocultar();
  C1.ocultar();
  Pol1.ocultar();
  getch();
  for (int i=0;i<20;i++){
    rad=C1.getRadio()+i;
    C1.setRadio(rad);
    C1.ocultar();
    C1.mostrar();
    Pol1.setRadio(rad);
    Pol1.ocultar();
    Pol1.mostrar();
    getch();
    C1.ocultar();
    Pol1.ocultar();
  }
 for (int i=20;i>0;i--){
    rad=C1.getRadio()-i;
    C1.setRadio(rad);
    C1.ocultar();
    C1.mostrar();
    Pol1.setRadio(rad);
    Pol1.ocultar();
    Pol1.mostrar();
    getch();
    C1.ocultar();
    Pol1.ocultar();
  }
int x=0;
while (x<500){
    C1.mover(5,5);
    delay(100);
    x+=5;
}
int y=0;
while (y<500){
    Pol1.mover(5,5);
    delay(100);
    y+=5;

 }
 }
getch();
closegraph();

}
