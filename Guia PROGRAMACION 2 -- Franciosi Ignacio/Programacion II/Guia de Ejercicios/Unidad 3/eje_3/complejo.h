class complejo{
  private:
    float real;
    float imag;
  public:
   complejo();
   complejo(float, float);
   void SetReal(float);
   void SetImag(float);
   float GetReal();
   float GetImag();
   complejo operator+(complejo);
   complejo operator-(complejo);
   complejo operator*(complejo);
   void conjugado();
};
