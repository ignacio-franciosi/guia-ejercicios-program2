template <class T>
class vector{
   private:
       T *V;
       int tam;
   public:
    vector(int);
    vector(const vector&);
    vector operator+(vector x);
    vector operator-(vector x);
    void operator=(vector x);
    T& operator[](int i);
    ~vector();
};




