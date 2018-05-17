#include "Figura.h"

class Circulo : public Figura{
    private:
    float radio;
    
    public:
    Circulo(float r);
    void calculaArea();
    
};