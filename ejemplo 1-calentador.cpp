#include <iostream>
class Calentador{
 private:
 int temperatura;
 int incremento; 
 int min;
 int max;

public:
Calentador(int min, int max, int temperatura=0); //el 0 hace que si no pongo ningun valor, entonces lo toma como 0
void calentar();
void enfriar();
void imprimeTemperatura() const;
void imprimeFarenheit() const;
int accedeTemperatura() const;
};  //punto y come obligatorio papá

Calentador::Calentador(int min, int max,int temperatura){
    if(max<min){
       std::cout << "Error en el rango min-max" << std::endl;
        std::exit(EXIT_FAILURE);
        
    }
    if(temperatura<=max&&temperatura>=min){
    this->temperatura=temperatura;
    }
    else{
        this->temperatura=min;
    }
    incremento=3;
    
    this->min=min;
    this->max=max;
    
    
}

void Calentador::calentar(){
    if(temperatura+incremento<=this->max){
        temperatura+=incremento;  
    }
}

void Calentador::imprimeFarenheit() const{
    float farenheit = temperatura*1.8+32;
    std::cout <<"La temperatura es: " << farenheit
    << "F " << std::endl;
    
    
}
void Calentador::enfriar(){
    if(temperatura-incremento>=this->min){
    temperatura-=incremento;
    }
    
}
int Calentador::accedeTemperatura() const{
    
    return temperatura;
}
int main(){
   
    Calentador cl{11,10};
    Calentador c2{0,30,10};
    
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