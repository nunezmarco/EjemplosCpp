#include <iostream>
class Calentador{
 private:
 int temperatura;
 int incremento;

public:
Calentador();
void calentar();
void enfriar();
void imprimeTemperatura() const;
void imprimeFarenheit() const;
int accedeTemperatura() const;
};  //punto y come obligatorio papá

Calentador::Calentador(){
    temperatura=15;
    incremento=3;
    
}

void Calentador::calentar(){
    if(temperatura+incremento<=30){
        temperatura+=incremento;  
    }
}

void Calentador::imprimeFarenheit() const{
    float farenheit = temperatura*1.8+32;
    std::cout <<"La temperatura es: " << farenheit
    << "F " << std::endl;
    
    
}
void Calentador::enfriar(){
    if(temperatura-incremento>=-10){
    temperatura-=incremento;
    }
    
}
int Calentador::accedeTemperatura() const{
    
    return temperatura;
}
int main(){
    
    Calentador cl;
    Calentador c2;
    
        cl.calentar();
        c2.enfriar();
        cl.imprimeTemperatura();
        cl.imprimeFarenheit();
        c2.imprimeTemperatura();
        c2.imprimeFarenheit();
    
    
}

void Calentador::imprimeTemperatura() const{
    
    std::cout << "La temperatura es " << temperatura << "C" << std::endl;
}