class Fecha{
 private:
    int dia;
    int mes;
    int anio;
    int dias(int);
 public:
    Fecha();
    Fecha(int, int, int);
    void setDia(int);
    void setMes(int);
    void setAnio(int);
    int getDia();
    int getMes();
    int getAnio();
    void operator --();
    void operator ++();
    Fecha operator +(int );
    Fecha operator -(int );
    int valida();
};
