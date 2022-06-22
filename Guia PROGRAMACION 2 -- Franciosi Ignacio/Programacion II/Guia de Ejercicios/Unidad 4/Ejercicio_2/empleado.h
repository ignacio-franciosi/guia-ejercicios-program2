class Empleado{
  protected:
      char* Nombre;
      int Edad;
      float Salario;
  public:
    Empleado(char*, int, float);
    void setNombre(char*);
    char* getNombre();
    void setEdad(int);
    int getEdad();
    void setSalario(float);
    float getSalario();
    void verDatos();
};
