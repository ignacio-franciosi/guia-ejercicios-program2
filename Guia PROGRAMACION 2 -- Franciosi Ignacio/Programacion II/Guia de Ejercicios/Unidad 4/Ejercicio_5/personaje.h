class personaje{
 protected:
  char *Nombre;
  char *Raza;
  int fuerza;
  int inteligencia;
  int puntoVidaMax;
  int puntosVidaAct;
 public:
  personaje(char* N, char* R,int f,int i, int vm);
  void setNombre(char *N);
  void setRaza(char *R);
  void setFuerza(int f);
  void setInteligencia(int i);
  void setPuntosVidaMax(int p);
  char* getNombre();
  char* getRaza();
  int getFuerza();
  int getInteligencia();
  int getPuntosVidaMax();
  int getPuntosVida();
  void decVida();
  void IncVida();
  void Imprime();
};
