#ifndef  FIGURA_INCLUIDA
#define FIGURA_INCLUIDA

class Figura{
  protected:
    float area;
    
    
  public:
    Figura();
    virtual void calculaArea() = 0;
    void imprimeArea();
};

#endif