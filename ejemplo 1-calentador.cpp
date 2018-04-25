#include <iostream>
class Calentador{
 private:
 int temperatura;
 int incrementa;

public:
Calentador();
void calentar();
void enfriar();
void imprimeTemperatura();
int accedeTemperatura() const;
};  //punto y come obligatorio papá

Calentador::Calentador(){
    temperatura=15;
    incremento=3;
    
}

void Calentador::calentar(){
  temperatura+=5;  

}

void Calentador::enfriar(){
    temperatura-=5;
    
    
}
int Calentador::accedeTemperatura() const{
    
    return temperatura;
}
int main(){
    
    Calentador cl;
    Calentador c2;
    cl.calentar();
    cl.imprimeTemperatura();
    c2.enfriar();
    c2.imprimeTemperatura();
}

void Calentador::imprimeTemperatura(){
    
    std::cout << "La temperatura es " << temperatura << std::endl;
}