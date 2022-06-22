class conjunto{
 private:
  int *P;
  int tMax;
  int tAct;
 public:
  conjunto(int);
  conjunto(const conjunto&);
  void operator=(conjunto x);
  void agregar(int);
  void eliminar(int);
  int existe(int);
  int gettMax();
  int gettAct();
  void Mostrar();
  conjunto operator+(conjunto);
  conjunto operator-(conjunto);
  conjunto operator*(conjunto);
  ~conjunto();
};



