#include "Figura.h"
#include "Circulo.h"

int main(){
    
    //Figura f1;
    //f1.calculaArea();
    //f1.imprimeArea();
    Circulo c1{10};
    //c1.calculaArea();
    //c1.imprimeArea();
    Figura *f2;
    f2=&c1;
    f2->calculaArea();
    f2->imprimeArea();
}