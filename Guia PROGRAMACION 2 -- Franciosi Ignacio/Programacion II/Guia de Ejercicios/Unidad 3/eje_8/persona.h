#include "../eje_1/fecha.h"

class persona{
 private:
  char nombre[20];
  Fecha fNac;
  int DNI;
  char genero;
  float peso;
  float altura;

 public:
  persona();
  persona(char*, Fecha, char);
  persona(char*, Fecha, int, char, float, float);
  void setNombre(char*);
  void SetFnac(int d, int m, int a);
  void SetFnac(Fecha f);
  void setDNI(int);
  void setGen(char);
  void SetPeso(float);
  void SetAlt(float);
  char* getNombre();
  Fecha getFnac();
  int getDNI();
  char getGen();
  float getPeso();
  float getAlt();
  float calcularIMC();
  int calcularEdad(int a);
  bool esMayorDeEdad(int a);
};
