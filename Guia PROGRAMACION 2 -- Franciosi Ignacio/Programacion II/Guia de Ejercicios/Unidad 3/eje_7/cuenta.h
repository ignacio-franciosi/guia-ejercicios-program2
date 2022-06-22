class cuenta{
  protected:
  int nroCta;
  float saldo;
  float tInteres;
  public:
  cuenta(int, float);
  void deposito(float m);
  int extraccion(float m);
  void acredInteres();
  int getNroCta();
  float getSaldo();
  float getTasaInteres();
};
