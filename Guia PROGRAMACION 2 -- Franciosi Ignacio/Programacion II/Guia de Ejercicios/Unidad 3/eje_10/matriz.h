class matriz{
   private:
       int **V;
       int nfil;
       int ncol;
   public:
    matriz(int,int);
    matriz(const matriz&);
    matriz operator+(matriz x);
    matriz operator-(matriz x);
    void operator=(matriz x);
    int& operator[](int i);
    int& operator()(int i, int j);
    ~matriz();
};




