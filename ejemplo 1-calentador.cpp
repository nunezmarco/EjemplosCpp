#include <iostream>
class Calentador{
 private:
 int temperatura;
 int incremento;

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
    if(temperatura+incremento<=30){
        temperatura+=incremento;  
    }
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
    for (int i=0 ;i<10;i++){
        cl.calentar();
        c2.enfriar();
        cl.imprimeTemperatura();
        c2.imprimeTemperatura();
    }
    
}

void Calentador::imprimeTemperatura(){
    
    std::cout << "La temperatura es " << temperatura << std::endl;
}