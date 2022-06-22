
class password{
  private:
      int longitud;
      char *clave;
      char listCar[62];
      void creaListCar();
   public:
   password();
   password(int);
   void generarPassword();
   void setLongitud(int);
   int getLongitud();
   char* getClave();
   int esFuerte();
};
